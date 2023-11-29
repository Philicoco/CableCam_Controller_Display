#include "process_data.h"
#include "Global/Global_var.h"


void split_msg(const String &input, char delimiter, String *outputArray, size_t outputArraySize){
   String temp = input;
  int index = 0;
  while (temp.length() > 0 && index < outputArraySize) {
    int delimiterIndex = temp.indexOf(delimiter);
    if (delimiterIndex >= 0) {
      outputArray[index++] = temp.substring(0, delimiterIndex);
      temp = temp.substring(delimiterIndex + 1);
    } else {
      outputArray[index++] = temp;
      temp = "";
    }
  } 
}
void process_msg(String  msg){
    String msg_arr[20];
    String buffer[2]; // für trennung von : verwendet
    split_msg(msg,'-',msg_arr,sizeof(msg_arr));
    if(msg_arr[0] == "Go_st") _ui_screen_change(&ui_SettingsScreen, LV_SCR_LOAD_ANIM_FADE_ON, 50, 0, NULL); //Go to Settings
    else if (msg_arr[0] == "Leave_st") _ui_screen_change(&ui_MainScreen, LV_SCR_LOAD_ANIM_FADE_ON, 50, 0, NULL); //Leave Settings
    else if (msg_arr[0] == "Estop"){ //Estop
      _ui_screen_change(&ui_EStopScreen, LV_SCR_LOAD_ANIM_FADE_ON, 50, 0, NULL);} 
    else if (msg_arr[0] == "V") { //v --> velocity (speed) 
        lv_label_set_text(ui_SpeedValue, msg_arr[1].c_str());
        _ui_arc_increment(ui_Arc1, msg_arr[1].toInt());
    } 
    else if (msg_arr[0] == "Bat"){ //Bat Status
        if (msg_arr[1] == "Con") lv_slider_set_value(ui_SLBatRC, msg_arr[2].toInt(), LV_ANIM_OFF); //änder Bat anzeige von cablecam Controller
        else if (msg_arr[1] == "CC") lv_slider_set_value(ui_SLBatCC, msg_arr[2].toInt(), LV_ANIM_OFF);  //änder Bat anzeige von cablecam     
    }
    else if (msg_arr[0] ==  "Profile") lv_label_set_text(ui_ProfileNR, msg_arr[1].c_str()); //change Profile shown on screen 
    else if (msg_arr[0] == "Con_stat") ; //chnage Connection status shown on display 
    else if (msg_arr[0]  == "psc_val" ){
    //  antwort: PSC-P:1-S:25-A:1-D:1-G:1-OR:t-RL:100-BD:4 --> psc_val-Profile_id-Speed-Acc-Dcc-Gimbal--Other_Rope-Rope_length-Break_Distance
    for(int i = 1; i <= 8 ; i++){
      split_msg(msg_arr[i],':',buffer,sizeof(buffer)); // return P & 1
      
    struct Profile *profile_data = &Prof_1;
   
    switch (i)
    {
    case 1: //Auswahl des Profiles
       switch (buffer[1].toInt())
      {
      case 2:
        profile_data = &Prof_2;
        break;
      case 3:
        profile_data = &Prof_3;
        break;
      case 4: 
        profile_data = &Prof_4;
        break;
      default:
        profile_data = &Prof_1;
        break;
    }
       profile_data->id = buffer[1].toInt();
       break;
    case 2: //Speicher speed wert
       profile_data->Speed = buffer[1].toInt();
       break;
    case 3: //Speichert ACC wert
        profile_data->Acc = buffer[1].toInt();
        break;
    case 4: //speichert DCC wert
        profile_data->Dec = buffer[1].toInt();
        break;   
    case 5:
        profile_data->gimbal = buffer[1].toInt();
        break;
    case 6:
        profile_data->other_rope = buffer[1].toInt();
        break;
    case 7:
        profile_data->rope_lenght = buffer[1].toInt();
        break;
    case 8:
        profile_data->break_distance = buffer[1].toInt();  
        break;                  
    default:
      break;
    }
   }  
    }



}





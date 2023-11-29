#include "send_data.h"
#include <string>

uint8_t adress_rsp = 0x20;
 void i2c_send_save_settings_other(){
 int rope_lenght, stop_lenght, gimbal;
 bool other_rope;
 rope_lenght = lv_slider_get_value(ui_SLRopeL);
 stop_lenght = lv_slider_get_value(ui_SLRopeSL);
 gimbal = lv_dropdown_get_selected(ui_Dropdown2);
/*
rp_l rope length
st_l stope length
gb gimbal gimbal used
or other rope

*/

 std::string data = "s_other_st|rp_l=" + std::to_string(rope_lenght) + "|st_l="  + std::to_string(stop_lenght) + "|gb="+std::to_string(gimbal) + "|or=" + std::to_string(other_rope);
 SendData_py(adress_rsp,data.c_str());
 }

void i2c_send_save_profile(){
 std::string data = "s_profile|"; //get other screen
 SendData_py (adress_rsp,data.c_str());
}

void i2c_disable_estop(){
    std::string data = "d_estop"; //disable e-stop
    SendData_py(adress_rsp,data.c_str());

}

void i2c_get_profile_screen_val(){
    std::string data = "get_psc"; //get profile screen   antwort: PSC-P:1-S:25-A:1-D:1 --> PSC-Profile-Speed-Acc-Dcc
    SendData_py (adress_rsp,data.c_str());
}

void i2c_get_bat_val(){
    std::string data = "get_bat";
    SendData_py (adress_rsp,data.c_str());
}

void i2c_get_rt_(){ //get run time 

std::string data = "get_rt";
SendData_py(adress_rsp,data.c_str());

}




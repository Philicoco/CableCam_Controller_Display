
#include "Touch/touch_screen.h"
#include "lvgl.h"
#include "pin_config.h"
#include <Arduino.h>
#include "UI/ui.h"
#include  "I2C_Com/I2C_Com.h"
         //  Full circle 2.1 inches using CST820 touch screen
// #define USING_2_8_INC_GT911      1           //  Full circle 2.8 inches using GT911 touch screen
// #define USING_2_1_INC_FT3267     1           //  Half circle 2.1 inches use FT3267 touch screen



 XL9535 xl;
bool touch_pin_get_int = false;



void setup()
{
  setup_I2C_com_py(); 
  touch_init();
  ui_init();
  lv_timer_handler();
  Serial.print("init dsp ready");
  _ui_screen_change(&ui_SettingsScreen, LV_SCR_LOAD_ANIM_FADE_ON, 50,0,NULL); 
  lv_timer_handler();

  
}

void loop()
{
    delay(2);
    lv_timer_handler();
   
}


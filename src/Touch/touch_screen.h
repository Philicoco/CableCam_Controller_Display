#include "Wire.h"
#include "XL9535_driver.h"
#include "esp_lcd_panel_io.h"
#include "esp_lcd_panel_ops.h"
#include "esp_lcd_panel_rgb.h"
#include "esp_lcd_panel_vendor.h"
#include "lvgl.h"
#include "pin_config.h"

extern void lcd_send_data(uint8_t data);
 
extern void tft_init(void);
extern void lcd_cmd(const uint8_t cmd);
extern void lcd_data(const uint8_t *data, int len);
extern void scan_iic(void);
extern void print_chip_info(void);
extern void lcd_send_data(uint8_t data);
extern void lcd_cmd(const uint8_t cmd);
extern void tft_init(void);
extern void lcd_data(const uint8_t *data, int len);
 void example_lvgl_flush_cb(lv_disp_drv_t *drv, const lv_area_t *area, lv_color_t *color_map);
  void lv_touchpad_read(lv_indev_drv_t *indev_driver, lv_indev_data_t *data);
 // extern  ;
extern void touch_init(); 
#ifndef _TOUCH_SCREEN_H
#define _TOUCH_SCREEN_H
extern XL9535 xl;
 extern bool touch_pin_get_int;

#endif
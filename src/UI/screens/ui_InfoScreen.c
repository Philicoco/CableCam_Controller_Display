// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.3.0
// LVGL version: 8.3.6
// Project name: CabelCaUI1

#include "UI/ui.h"

void ui_InfoScreen_screen_init(void)
{
    ui_InfoScreen = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_InfoScreen, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_InfoScreen, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_InfoScreen, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_LSettingsIU = lv_label_create(ui_InfoScreen);
    lv_obj_set_width(ui_LSettingsIU, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_LSettingsIU, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_LSettingsIU, 1);
    lv_obj_set_y(ui_LSettingsIU, -179);
    lv_obj_set_align(ui_LSettingsIU, LV_ALIGN_CENTER);
    lv_label_set_text(ui_LSettingsIU, "INFO");
    lv_obj_set_style_text_color(ui_LSettingsIU, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_LSettingsIU, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_LSettingsIU, &lv_font_montserrat_30, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_LableIOh = lv_label_create(ui_InfoScreen);
    lv_obj_set_width(ui_LableIOh, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_LableIOh, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_LableIOh, -69);
    lv_obj_set_y(ui_LableIOh, -53);
    lv_obj_set_align(ui_LableIOh, LV_ALIGN_CENTER);
    lv_label_set_text(ui_LableIOh, "Operating hours: ");
    lv_obj_set_style_text_color(ui_LableIOh, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_LableIOh, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_LableIOh, &lv_font_montserrat_16, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_LabelSoVCC = lv_label_create(ui_InfoScreen);
    lv_obj_set_width(ui_LabelSoVCC, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_LabelSoVCC, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_LabelSoVCC, -102);
    lv_obj_set_y(ui_LabelSoVCC, 10);
    lv_obj_set_align(ui_LabelSoVCC, LV_ALIGN_CENTER);
    lv_label_set_text(ui_LabelSoVCC, "Software Ver. CabelCam:");
    lv_obj_set_style_text_color(ui_LabelSoVCC, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_LabelSoVCC, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_LabelSoVCC, &lv_font_montserrat_16, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_LabelSoVC = lv_label_create(ui_InfoScreen);
    lv_obj_set_width(ui_LabelSoVC, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_LabelSoVC, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_LabelSoVC, -94);
    lv_obj_set_y(ui_LabelSoVC, -21);
    lv_obj_set_align(ui_LabelSoVC, LV_ALIGN_CENTER);
    lv_label_set_text(ui_LabelSoVC, "Software Ver. Conroller: ");
    lv_obj_set_style_text_color(ui_LabelSoVC, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_LabelSoVC, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_LabelSoVC, &lv_font_montserrat_16, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_LableIohV = lv_label_create(ui_InfoScreen);
    lv_obj_set_width(ui_LableIohV, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_LableIohV, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_LableIohV, 48);
    lv_obj_set_y(ui_LableIohV, -53);
    lv_obj_set_align(ui_LableIohV, LV_ALIGN_CENTER);
    lv_label_set_text(ui_LableIohV, "0h");
    lv_obj_set_style_text_color(ui_LableIohV, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_LableIohV, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_LableIohV, &lv_font_montserrat_16, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_LabelSoVCV = lv_label_create(ui_InfoScreen);
    lv_obj_set_width(ui_LabelSoVCV, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_LabelSoVCV, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_LabelSoVCV, 55);
    lv_obj_set_y(ui_LabelSoVCV, -21);
    lv_obj_set_align(ui_LabelSoVCV, LV_ALIGN_CENTER);
    lv_label_set_text(ui_LabelSoVCV, "1.0.0");
    lv_obj_set_style_text_color(ui_LabelSoVCV, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_LabelSoVCV, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_LabelSoVCV, &lv_font_montserrat_16, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_LabelSoVCCV = lv_label_create(ui_InfoScreen);
    lv_obj_set_width(ui_LabelSoVCCV, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_LabelSoVCCV, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_LabelSoVCCV, 55);
    lv_obj_set_y(ui_LabelSoVCCV, 10);
    lv_obj_set_align(ui_LabelSoVCCV, LV_ALIGN_CENTER);
    lv_label_set_text(ui_LabelSoVCCV, "1.0.0");
    lv_obj_set_style_text_color(ui_LabelSoVCCV, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_LabelSoVCCV, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_LabelSoVCCV, &lv_font_montserrat_16, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_BTNBackInfo = lv_btn_create(ui_InfoScreen);
    lv_obj_set_width(ui_BTNBackInfo, 114);
    lv_obj_set_height(ui_BTNBackInfo, 44);
    lv_obj_set_x(ui_BTNBackInfo, -5);
    lv_obj_set_y(ui_BTNBackInfo, 163);
    lv_obj_set_align(ui_BTNBackInfo, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_BTNBackInfo, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_BTNBackInfo, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_BTNBackInfo, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_BTNBackInfo, lv_color_hex(0x1F60EA), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_BTNBackInfo, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui_BTNBackInfo, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_BTNBackInfo, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_BTNBackInfo, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_BTNBackInfo, &lv_font_montserrat_16, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label3 = lv_label_create(ui_BTNBackInfo);
    lv_obj_set_width(ui_Label3, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label3, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label3, -2);
    lv_obj_set_y(ui_Label3, 2);
    lv_obj_set_align(ui_Label3, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label3, "Back");

    lv_obj_add_event_cb(ui_BTNBackInfo, ui_event_BTNBackInfo, LV_EVENT_ALL, NULL);

}

// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.3.0
// LVGL version: 8.3.6
// Project name: CabelCaUI1

#include "UI/ui.h"

void ui_ProfileScreen_screen_init(void)
{
    ui_ProfileScreen = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_ProfileScreen, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_ProfileScreen, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_ProfileScreen, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_LSettingsOU1 = lv_label_create(ui_ProfileScreen);
    lv_obj_set_width(ui_LSettingsOU1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_LSettingsOU1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_LSettingsOU1, 1);
    lv_obj_set_y(ui_LSettingsOU1, -179);
    lv_obj_set_align(ui_LSettingsOU1, LV_ALIGN_CENTER);
    lv_label_set_text(ui_LSettingsOU1, "Profile");
    lv_obj_set_style_text_color(ui_LSettingsOU1, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_LSettingsOU1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_LSettingsOU1, &lv_font_montserrat_30, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_BTNBackProfile = lv_btn_create(ui_ProfileScreen);
    lv_obj_set_width(ui_BTNBackProfile, 114);
    lv_obj_set_height(ui_BTNBackProfile, 44);
    lv_obj_set_x(ui_BTNBackProfile, -5);
    lv_obj_set_y(ui_BTNBackProfile, 163);
    lv_obj_set_align(ui_BTNBackProfile, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_BTNBackProfile, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_BTNBackProfile, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_BTNBackProfile, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_BTNBackProfile, lv_color_hex(0x1F60EA), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_BTNBackProfile, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui_BTNBackProfile, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_BTNBackProfile, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_BTNBackProfile, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_BTNBackProfile, &lv_font_montserrat_16, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label7 = lv_label_create(ui_BTNBackProfile);
    lv_obj_set_width(ui_Label7, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label7, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label7, -2);
    lv_obj_set_y(ui_Label7, 2);
    lv_obj_set_align(ui_Label7, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label7, "Back");

    ui_BNTProfileUp = lv_btn_create(ui_ProfileScreen);
    lv_obj_set_width(ui_BNTProfileUp, 39);
    lv_obj_set_height(ui_BNTProfileUp, 43);
    lv_obj_set_x(ui_BNTProfileUp, 64);
    lv_obj_set_y(ui_BNTProfileUp, -118);
    lv_obj_set_align(ui_BNTProfileUp, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_BNTProfileUp, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_BNTProfileUp, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_shadow_color(ui_BNTProfileUp, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ui_BNTProfileUp, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label8 = lv_label_create(ui_BNTProfileUp);
    lv_obj_set_width(ui_Label8, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label8, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Label8, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label8, ">");
    lv_obj_set_style_text_color(ui_Label8, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label8, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_Label8, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label8, &lv_font_montserrat_46, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_BNTProfileDown = lv_btn_create(ui_ProfileScreen);
    lv_obj_set_width(ui_BNTProfileDown, 39);
    lv_obj_set_height(ui_BNTProfileDown, 43);
    lv_obj_set_x(ui_BNTProfileDown, -58);
    lv_obj_set_y(ui_BNTProfileDown, -118);
    lv_obj_set_align(ui_BNTProfileDown, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_BNTProfileDown, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_BNTProfileDown, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_shadow_color(ui_BNTProfileDown, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ui_BNTProfileDown, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label9 = lv_label_create(ui_BNTProfileDown);
    lv_obj_set_width(ui_Label9, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label9, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Label9, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label9, "<");
    lv_obj_set_style_text_color(ui_Label9, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label9, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_Label9, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label9, &lv_font_montserrat_46, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_LSettingsProfileV = lv_label_create(ui_ProfileScreen);
    lv_obj_set_width(ui_LSettingsProfileV, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_LSettingsProfileV, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_LSettingsProfileV, 6);
    lv_obj_set_y(ui_LSettingsProfileV, -117);
    lv_obj_set_align(ui_LSettingsProfileV, LV_ALIGN_CENTER);
    lv_label_set_text(ui_LSettingsProfileV, "1");
    lv_obj_set_style_text_color(ui_LSettingsProfileV, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_LSettingsProfileV, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_LSettingsProfileV, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_LSettingsProfileV, &lv_font_montserrat_36, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_LPSpeed = lv_label_create(ui_ProfileScreen);
    lv_obj_set_width(ui_LPSpeed, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_LPSpeed, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_LPSpeed, -107);
    lv_obj_set_y(ui_LPSpeed, -42);
    lv_obj_set_align(ui_LPSpeed, LV_ALIGN_CENTER);
    lv_label_set_text(ui_LPSpeed, "Speed: ");
    lv_obj_set_style_text_color(ui_LPSpeed, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_LPSpeed, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_LPSpeed, &lv_font_montserrat_24, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_LSpeedV = lv_label_create(ui_ProfileScreen);
    lv_obj_set_width(ui_LSpeedV, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_LSpeedV, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_LSpeedV, -27);
    lv_obj_set_y(ui_LSpeedV, -42);
    lv_obj_set_align(ui_LSpeedV, LV_ALIGN_CENTER);
    lv_label_set_text(ui_LSpeedV, "25%");
    lv_obj_set_style_text_color(ui_LSpeedV, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_LSpeedV, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_LSpeedV, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_LSpeedV, &lv_font_montserrat_24, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_LDEC = lv_label_create(ui_ProfileScreen);
    lv_obj_set_width(ui_LDEC, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_LDEC, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_LDEC, -98);
    lv_obj_set_y(ui_LDEC, 66);
    lv_obj_set_align(ui_LDEC, LV_ALIGN_CENTER);
    lv_label_set_text(ui_LDEC, "DEC: ");
    lv_obj_set_style_text_color(ui_LDEC, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_LDEC, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_LDEC, &lv_font_montserrat_24, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_LACC = lv_label_create(ui_ProfileScreen);
    lv_obj_set_width(ui_LACC, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_LACC, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_LACC, -94);
    lv_obj_set_y(ui_LACC, 9);
    lv_obj_set_align(ui_LACC, LV_ALIGN_CENTER);
    lv_label_set_text(ui_LACC, "Acc: ");
    lv_obj_set_style_text_color(ui_LACC, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_LACC, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_LACC, &lv_font_montserrat_24, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_LSpeedV1 = lv_label_create(ui_ProfileScreen);
    lv_obj_set_width(ui_LSpeedV1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_LSpeedV1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_LSpeedV1, -31);
    lv_obj_set_y(ui_LSpeedV1, 66);
    lv_obj_set_align(ui_LSpeedV1, LV_ALIGN_CENTER);
    lv_label_set_text(ui_LSpeedV1, "1");
    lv_obj_set_style_text_color(ui_LSpeedV1, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_LSpeedV1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_LSpeedV1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_LSpeedV1, &lv_font_montserrat_24, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_LSpeedV2 = lv_label_create(ui_ProfileScreen);
    lv_obj_set_width(ui_LSpeedV2, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_LSpeedV2, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_LSpeedV2, -32);
    lv_obj_set_y(ui_LSpeedV2, 9);
    lv_obj_set_align(ui_LSpeedV2, LV_ALIGN_CENTER);
    lv_label_set_text(ui_LSpeedV2, "1");
    lv_obj_set_style_text_color(ui_LSpeedV2, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_LSpeedV2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_LSpeedV2, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_LSpeedV2, &lv_font_montserrat_24, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_BNTDSp = lv_btn_create(ui_ProfileScreen);
    lv_obj_set_width(ui_BNTDSp, 31);
    lv_obj_set_height(ui_BNTDSp, 32);
    lv_obj_set_x(ui_BNTDSp, 30);
    lv_obj_set_y(ui_BNTDSp, -42);
    lv_obj_set_align(ui_BNTDSp, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_BNTDSp, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_BNTDSp, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_shadow_color(ui_BNTDSp, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ui_BNTDSp, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label10 = lv_label_create(ui_BNTDSp);
    lv_obj_set_width(ui_Label10, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label10, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label10, -1);
    lv_obj_set_y(ui_Label10, -2);
    lv_obj_set_align(ui_Label10, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label10, "-");
    lv_obj_set_style_text_color(ui_Label10, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label10, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_Label10, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label10, &lv_font_montserrat_46, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_BNTISp = lv_btn_create(ui_ProfileScreen);
    lv_obj_set_width(ui_BNTISp, 31);
    lv_obj_set_height(ui_BNTISp, 32);
    lv_obj_set_x(ui_BNTISp, 76);
    lv_obj_set_y(ui_BNTISp, -42);
    lv_obj_set_align(ui_BNTISp, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_BNTISp, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_BNTISp, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_shadow_color(ui_BNTISp, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ui_BNTISp, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label11 = lv_label_create(ui_BNTISp);
    lv_obj_set_width(ui_Label11, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label11, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Label11, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label11, "+");
    lv_obj_set_style_text_color(ui_Label11, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label11, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_Label11, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label11, &lv_font_montserrat_46, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_BNTDDEC = lv_btn_create(ui_ProfileScreen);
    lv_obj_set_width(ui_BNTDDEC, 31);
    lv_obj_set_height(ui_BNTDDEC, 32);
    lv_obj_set_x(ui_BNTDDEC, 30);
    lv_obj_set_y(ui_BNTDDEC, 66);
    lv_obj_set_align(ui_BNTDDEC, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_BNTDDEC, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_BNTDDEC, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_shadow_color(ui_BNTDDEC, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ui_BNTDDEC, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label12 = lv_label_create(ui_BNTDDEC);
    lv_obj_set_width(ui_Label12, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label12, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label12, -1);
    lv_obj_set_y(ui_Label12, -2);
    lv_obj_set_align(ui_Label12, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label12, "-");
    lv_obj_set_style_text_color(ui_Label12, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label12, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_Label12, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label12, &lv_font_montserrat_46, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_BNTIDEC = lv_btn_create(ui_ProfileScreen);
    lv_obj_set_width(ui_BNTIDEC, 31);
    lv_obj_set_height(ui_BNTIDEC, 32);
    lv_obj_set_x(ui_BNTIDEC, 75);
    lv_obj_set_y(ui_BNTIDEC, 66);
    lv_obj_set_align(ui_BNTIDEC, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_BNTIDEC, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_BNTIDEC, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_shadow_color(ui_BNTIDEC, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ui_BNTIDEC, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label13 = lv_label_create(ui_BNTIDEC);
    lv_obj_set_width(ui_Label13, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label13, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Label13, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label13, "+");
    lv_obj_set_style_text_color(ui_Label13, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label13, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_Label13, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label13, &lv_font_montserrat_46, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_BNTDACC = lv_btn_create(ui_ProfileScreen);
    lv_obj_set_width(ui_BNTDACC, 31);
    lv_obj_set_height(ui_BNTDACC, 32);
    lv_obj_set_x(ui_BNTDACC, 30);
    lv_obj_set_y(ui_BNTDACC, 9);
    lv_obj_set_align(ui_BNTDACC, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_BNTDACC, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_BNTDACC, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_shadow_color(ui_BNTDACC, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ui_BNTDACC, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label14 = lv_label_create(ui_BNTDACC);
    lv_obj_set_width(ui_Label14, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label14, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label14, -1);
    lv_obj_set_y(ui_Label14, -2);
    lv_obj_set_align(ui_Label14, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label14, "-");
    lv_obj_set_style_text_color(ui_Label14, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label14, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_Label14, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label14, &lv_font_montserrat_46, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_BNTIACC = lv_btn_create(ui_ProfileScreen);
    lv_obj_set_width(ui_BNTIACC, 31);
    lv_obj_set_height(ui_BNTIACC, 32);
    lv_obj_set_x(ui_BNTIACC, 76);
    lv_obj_set_y(ui_BNTIACC, 9);
    lv_obj_set_align(ui_BNTIACC, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_BNTIACC, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_BNTIACC, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_shadow_color(ui_BNTIACC, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ui_BNTIACC, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label15 = lv_label_create(ui_BNTIACC);
    lv_obj_set_width(ui_Label15, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label15, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Label15, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label15, "+");
    lv_obj_set_style_text_color(ui_Label15, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label15, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_Label15, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label15, &lv_font_montserrat_46, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_add_event_cb(ui_BTNBackProfile, ui_event_BTNBackProfile, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Label8, ui_event_Label8, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_BNTDSp, ui_event_BNTDSp, LV_EVENT_ALL, NULL);

}

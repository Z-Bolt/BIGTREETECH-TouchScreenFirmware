#ifndef _STATUS_SCREEN_H_
#define _STATUS_SCREEN_H_

#ifdef __cplusplus
extern "C" {
#endif

#include <stdint.h>
#include "GUI.h"

// Colors for drawing the icons
#define GANTRYLBL_BKCOLOR   0x2187 // Z-BOLT
#define GANTRYLBL_COLOR     WHITE // Z-BOLT
#define HEADING_COLOR       WHITE // Z-BOLT
#define VAL_COLOR           WHITE // Z-BOLT
#define INFOBOX_BKCOLOR     0x4b0d // Z-BOLT
#define INFOBOX_BORDER      0x4b0d // Z-BOLT
#define INFOBOX_ICON_COLOR  0x03BF // Z-BOLT 
#define INFOMSG_BKCOLOR     BLACK // Z-BOLT
#define INFOMSG_COLOR       WHITE // Z-BOLT

extern const GUI_POINT ss_title_point;
extern const GUI_POINT ss_val_point;
extern const GUI_RECT msgRect;

void menuStatus(void);
void drawTemperature(void);
void storegantry(int n, float val);
void statusScreen_setMsg(const uint8_t *title,const uint8_t *msg);
void statusScreen_setReady(void);
void drawStatusScreenMsg(void);
float getAxisLocation(uint8_t n);
void gantry_dec(int n, float val);
void gantry_inc(int n, float val);

#ifdef __cplusplus
}
#endif

#endif

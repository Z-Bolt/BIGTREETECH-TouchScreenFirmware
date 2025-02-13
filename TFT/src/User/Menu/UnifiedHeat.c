#include "UnifiedHeat.h"
#include "includes.h"

const MENUITEMS UnifiedHeatItems = {
  // title
  LABEL_UNIFIEDHEAT,
  // icon                          label
  {
    {ICON_HEAT,                    LABEL_PREHEAT},
    {ICON_HEAT,                    LABEL_HEAT},
    {ICON_FAN,                     LABEL_FAN},
    {ICON_COOLDOWN,                LABEL_COOLDOWN},
    {ICON_BACKGROUND,              LABEL_BACKGROUND},
    {ICON_BACKGROUND,              LABEL_BACKGROUND},
    {ICON_BACKGROUND,              LABEL_BACKGROUND},
    {ICON_BACK,                    LABEL_BACK},
  }
};

void menuUnifiedHeat(void)
{
  KEY_VALUES key_num = KEY_IDLE;

  menuDrawPage(&UnifiedHeatItems);

  while (MENU_IS(menuUnifiedHeat))
  {
    key_num = menuKeyGetValue();
    switch (key_num)
    {
      case KEY_ICON_0:
        OPEN_MENU(menuPreheat);
        break;

      case KEY_ICON_1:
        OPEN_MENU(menuHeat);
        break;

      case KEY_ICON_2:
        OPEN_MENU(menuFan);
        break;

      case KEY_ICON_3:
        heatCoolDown();
        break;

      case KEY_ICON_7:
        CLOSE_MENU();
        break;

      default:
        break;
    }

    loopProcess();
  }
}

/*
   Enhanced NCSA Mosaic from Spyglass
   "Guitar"

   Copyright 1994 Spyglass, Inc.
   All Rights Reserved

   Author(s):
   Eric W. Sink eric@spyglass.com
 */

/*
    This code specifies the layout of the toolbar for the IBM version
*/

#include "all.h"

#ifdef FEATURE_TOOLBAR

/*
    The RES_TB symbols are defined in rc_menu.h.  The association of symbols with
    actual bitmaps is in the rc file.
*/

#define TB_GROUP_GAP  (12)

#ifdef _GIBRALTAR
struct TB_Button_Info gToolBarInfo[] = {

    {RES_MENU_ITEM_OPENURL, RES_TB_UP_OPENURL, RES_TB_DN_OPENURL, RES_TB_GR_OPENURL, 1},

#ifdef _USE_MAPI
    {RES_MENU_ITEM_PRINT, RES_TB_UP_PRINT, RES_TB_DN_PRINT, RES_TB_GR_PRINT, 1},
    {RES_MENU_ITEM_MAIL, RES_TB_UP_MAIL, RES_TB_DN_MAIL, RES_TB_GR_MAIL, TB_GROUP_GAP},
#else
    {RES_MENU_ITEM_PRINT, RES_TB_UP_PRINT, RES_TB_DN_PRINT, RES_TB_GR_PRINT, TB_GROUP_GAP},
#endif // _USE_MAPI

    {RES_MENU_ITEM_BACK, RES_MENU_ITEM_BACK, RES_TB_DOWN_BACK, RES_TB_GRAY_BACK, 1},
    {RES_MENU_ITEM_FORWARD, RES_MENU_ITEM_FORWARD, RES_TB_DOWN_FORWARD, RES_TB_GRAY_FORWARD, TB_GROUP_GAP},
    
    {RES_MENU_ITEM_STOP, RES_TB_UP_STOP, RES_TB_DN_STOP, RES_TB_UP_STOP, 1},
    {RES_MENU_ITEM_RELOAD, RES_TB_UP_RELOAD, RES_TB_DN_RELOAD, RES_TB_GR_RELOAD, TB_GROUP_GAP},

    {RES_MENU_ITEM_HOME, RES_TB_UP_HOME, RES_TB_DN_HOME, RES_TB_GR_HOME, 1},
    {RES_MENU_ITEM_SEARCH_INTERNET, RES_TB_UP_SEARCH, RES_TB_DN_SEARCH, RES_TB_GR_SEARCH, TB_GROUP_GAP},
    
    {RES_MENU_ITEM_HOTLIST, RES_TB_UP_HOTLIST, RES_TB_DN_HOTLIST, RES_TB_GR_HOTLIST, 1},
    {RES_MENU_ITEM_ADDCURRENTTOHOTLIST, RES_TB_UP_ADDCURRENTTOHOTLIST, RES_TB_DN_ADDCURRENTTOHOTLIST, RES_TB_GR_ADDCURRENTTOHOTLIST, TB_GROUP_GAP},

    {RES_MENU_ITEM_FONTPLUS, RES_TB_UP_FONTPLUS, RES_TB_DN_FONTPLUS, RES_TB_GR_FONTPLUS, 1},
    {RES_MENU_ITEM_FONTMINUS, RES_TB_UP_FONTMINUS, RES_TB_DN_FONTMINUS, RES_TB_GR_FONTMINUS, TB_GROUP_GAP},

    {RES_MENU_ITEM_CUT, RES_TB_UP_CUT, RES_TB_DN_CUT, RES_TB_UP_CUT, 1},
    {RES_MENU_ITEM_COPY, RES_TB_UP_COPY, RES_TB_DN_COPY, RES_TB_UP_COPY, 1},
    {RES_MENU_ITEM_PASTE, RES_TB_UP_PASTE, RES_TB_DN_PASTE, RES_TB_UP_PASTE, 0},
};

#else

    {RES_MENU_ITEM_HOME, RES_TB_UP_HOME, RES_TB_DN_HOME, RES_TB_GR_HOME, 1},
    {RES_MENU_ITEM_OPENURL, RES_TB_UP_OPENURL, RES_TB_DN_OPENURL, RES_TB_GR_OPENURL, 1},
    {RES_MENU_ITEM_OPENLOCAL, RES_TB_UP_OPENLOCAL, RES_TB_DN_OPENLOCAL, RES_TB_GR_OPENLOCAL, TB_GROUP_GAP},

    {RES_MENU_ITEM_RELOAD, RES_TB_UP_RELOAD, RES_TB_DN_RELOAD, RES_TB_GR_RELOAD, 1},
    {RES_MENU_ITEM_LOADALLIMAGES, RES_TB_UP_LOADALLIMAGES, RES_TB_DN_LOADALLIMAGES, RES_TB_GR_LOADALLIMAGES, TB_GROUP_GAP},

    {RES_MENU_ITEM_FIND, RES_TB_UP_FIND, RES_TB_DN_FIND, RES_TB_GR_FIND, 1},
    {RES_MENU_ITEM_FINDAGAIN, RES_TB_UP_FINDAGAIN, RES_TB_DN_FINDAGAIN, RES_TB_GR_FINDAGAIN, TB_GROUP_GAP},

    {RES_MENU_ITEM_PRINT, RES_TB_UP_PRINT, RES_TB_DN_PRINT, RES_TB_GR_PRINT, 1},
    {RES_MENU_ITEM_SAVEAS, RES_TB_UP_SAVEAS, RES_TB_DN_SAVEAS, RES_TB_GR_SAVEAS, TB_GROUP_GAP},

    {RES_MENU_ITEM_HOTLIST, RES_TB_UP_HOTLIST, RES_TB_DN_HOTLIST, RES_TB_GR_HOTLIST, 1},
    {RES_MENU_ITEM_ADDCURRENTTOHOTLIST, RES_TB_UP_ADDCURRENTTOHOTLIST, RES_TB_DN_ADDCURRENTTOHOTLIST, RES_TB_GR_ADDCURRENTTOHOTLIST, TB_GROUP_GAP},

    {RES_MENU_ITEM_HELPPAGE, RES_TB_UP_HELPPAGE, RES_TB_DN_HELPPAGE, RES_TB_GR_HELPPAGE, 1},
    {RES_MENU_ITEM_STOP, RES_TB_UP_STOP, RES_TB_DN_STOP, RES_TB_GR_STOP, 0},

#endif // _GIBRALTAR

void PREF_SetupToolbar(void)
{
    /*
        Currently, the contents and look of the toolbar are hard-coded.  We
        can make it configurable later if we want.
    */

#define TB_BUTTON_SIZE  20

    {
        gPrefs.tb.bShowToolBar = TRUE;
        gPrefs.tb.iButtonSize = TB_BUTTON_SIZE;
        gPrefs.tb.nButtons = sizeof(gToolBarInfo) / sizeof(struct TB_Button_Info);
        gPrefs.tb.paButtons = gToolBarInfo;
    }
}

#endif /* FEATURE_TOOLBAR */
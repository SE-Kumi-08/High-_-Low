/* インクルードガード */
#pragma once

// button gpio number
#define BTN_A_GPIO 39
#define BTN_B_GPIO 38
#define BTN_C_GPIO 37

// jpg image path
#define TITLE_IMG_PATH "/images/title/title.jpg"

#define CARD_HEART1_IMG_PATH "/images/card/card_heart_01.jpg"
#define CARD_HEART2_IMG_PATH "/images/card/card_heart_02.jpg"
#define CARD_HEART3_IMG_PATH "/images/card/card_heart_03.jpg"
#define CARD_HEART4_IMG_PATH "/images/card/card_heart_04.jpg"
#define CARD_HEART5_IMG_PATH "/images/card/card_heart_05.jpg"
#define CARD_HEART6_IMG_PATH "/images/card/card_heart_06.jpg"
#define CARD_HEART7_IMG_PATH "/images/card/card_heart_07.jpg"
#define CARD_HEART8_IMG_PATH "/images/card/card_heart_08.jpg"
#define CARD_HEART9_IMG_PATH "/images/card/card_heart_09.jpg"
#define COMMON_ORANGEFILLWHITE_IMG_PATH "/images/common/orange_number/fillwhite.jpg"

#define CARD_SPADE1_IMG_PATH "/images/card/card_spade_01.jpg"
#define CARD_SPADE2_IMG_PATH "/images/card/card_spade_02.jpg"
#define CARD_SPADE3_IMG_PATH "/images/card/card_spade_03.jpg"
#define CARD_SPADE4_IMG_PATH "/images/card/card_spade_04.jpg"
#define CARD_SPADE5_IMG_PATH "/images/card/card_spade_05.jpg"
#define CARD_SPADE6_IMG_PATH "/images/card/card_spade_06.jpg"
#define CARD_SPADE7_IMG_PATH "/images/card/card_spade_07.jpg"
#define CARD_SPADE8_IMG_PATH "/images/card/card_spade_08.jpg"
#define CARD_SPADE9_IMG_PATH "/images/card/card_spade_09.jpg"
#define CARD_REAR_IMG_PATH "/images/card/rear.jpg"
#define COMMON_BLUEFILLWHITE_IMG_PATH "/images/common/blue_number/fillwhite.jpg"

#define BUTTON_BACK_IMG_PATH "/images/button/back.jpg"
#define BUTTON_DECIDE_IMG_PATH "/images/button/decide.jpg"
#define BUTTON_AGAIN_IMG_PATH "/images/button/again.jpg"
#define BUTTON_START_IMG_PATH "/images/button/start.jpg"
#define BUTTON_RECORD_IMG_PATH "/images/button/record.jpg"
#define BUTTON_HIGH_IMG_PATH "/images/button/high.jpg"
#define BUTTON_LOW_IMG_PATH "/images/button/low.jpg"
#define BUTTON_FILLWHITE_IMG_PATH "/images/button/fillwhite.jpg"

#define MENU_MEMU_IMG_PATH "/images/menu/menu.jpg"
#define MENU_WIN_IMG_PATH "/images/menu/win.jpg"
#define MENU_LOSE_IMG_PATH "/images/menu/lose.jpg"



// TITLE jpg image coordinate
#define TITLE_X_CRD 0
#define TITLE_Y_CRD 0

// MENU jpg image coordinate

// Fight jpg image coordinate

// Date jpg image coordinate



typedef enum {
    TITLE,
    MENU,
    FIGHT,
    DATE
} State;
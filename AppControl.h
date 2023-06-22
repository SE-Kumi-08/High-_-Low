/* インクルードガード */
#pragma once

#include "Hihg-_-Low.h"
#include "MdDateTime.h"
#include "MdLcd.h"

class AppControl // classの定義
{
private: // privateはクラス内からしかアクセスできない
    bool m_flag_btnA_is_pressed = false;
    bool m_flag_btnB_is_pressed = false;
    bool m_flag_btnC_is_pressed = false;

    /* State Machine */
    State m_state = TITLE;
    Action m_action = ENTRY;

public: // publicはどこからでもアクセス可能
    State getState();
    void setState(State state);
    Action getAction();
    void setAction(Action action);
    void setBtnAFlg(bool flg);
    void setBtnBFlg(bool flg);
    void setBtnCFlg(bool flg);
    void setBtnAllFlgFalse();
    void setStateMachine(State state, Action action);
    void displayTitleInit();
    void displayMenuInit();
    void displayDateInit();
    void displayDateUpdate();
    void controlApplication();
};

#include <Arduino.h>
#include <M5Stack.h>

MdLcd mlcd;
MdDateTime mdtime;



const char* g_str_heart[] = {
    CARD_HEART1_IMG_PATH 
    CARD_HEART2_IMG_PATH
    CARD_HEART3_IMG_PATH 
    CARD_HEART4_IMG_PATH 
    CARD_HEART5_IMG_PATH 
    CARD_HEART6_IMG_PATH 
    CARD_HEART7_IMG_PATH 
    CARD_HEART8_IMG_PATH 
    CARD_HEART9_IMG_PATH
};

const char* g_str_spade[] = {
    CARD_SPADE1_IMG_PATH
    CARD_SPADE2_IMG_PATH
    CARD_SPADE3_IMG_PATH
    CARD_SPADE4_IMG_PATH
    CARD_SPADE5_IMG_PATH
    CARD_SPADE6_IMG_PATH
    CARD_SPADE7_IMG_PATH
    CARD_SPADE8_IMG_PATH
    CARD_SPADE9_IMG_PATH
};

void AppControl::setBtnAFlg(bool flg)
{
    m_flag_btnA_is_pressed = flg;
}

void AppControl::setBtnBFlg(bool flg)
{
    m_flag_btnB_is_pressed = flg;
}

void AppControl::setBtnCFlg(bool flg)
{
    m_flag_btnC_is_pressed = flg;
}

void AppControl::setBtnAllFlgFalse()
{
    m_flag_btnA_is_pressed = false;
    m_flag_btnB_is_pressed = false;
    m_flag_btnC_is_pressed = false;
}

State AppControl::getState()
{
    return m_state;
}

void AppControl::setState(State state)
{
    m_state = state;
}

Action AppControl::getAction()
{
    return m_action;
}

void AppControl::setAction(Action action)
{
    m_action = action;
}

void AppControl::setStateMachine(State state, Action action)
{
    setState(state);
    setAction(action);
}

void AppControl::displayTitleInit()
{
    mlcd.displayJpgImageCoordinate(TITLE_IMG_PATH, TITLE_X_CRD, TITLE_Y_CRD);
}

void AppControl::displayMenuInit()
{
    mlcd.clearDisplay();
    mlcd.fillBackgroundWhite();
    
    setBtnAllFlgFalse();
}


void AppControl::controlApplication()
{
    SD.begin();
    
    while (1) {

        switch (getState()) {
        case TITLE:
            switch (getAction()) {
            case ENTRY:

                setStateMachine(TITLE,DO)
                break;

            case DO:

                setStateMachine(TITLE,EXIT)
                break;
            case EXIT:

                setStateMachine(MENU,ENTRY)
                break;

            default:
                break;
            }

            break;

        case MENU:
            switch (getAction()) {
            case ENTRY:
                
                break;

            case DO:

                break;
            case EXIT:

                break;

            default:
                break;
            }

            break;

        case FIGHT:
            switch (getAction()) {
            case ENTRY:

                break;

            case DO:

                break;
            case EXIT:

                break;

            default:
                break;
            }

            break;

        case DATE:
            switch (getAction()) {
            case ENTRY:

                break;

            case DO:

                break;
            case EXIT:

                break;

            default:
                break;
            

            break;
            }

        default:
            break;
        }

    }
    
}
#include <FL/Fl.H>
#include <FL/Fl_Double_Window.H>
#include <FL/Fl_Button.H>
#include <FL/Fl_Check_Button.H>
#include <FL/Fl_Return_Button.H>
#include <FL/Fl_Group.H>
#include <FL/Fl_Text_Editor.H>
#include <FL/Fl_Radio_Round_Button.H>

int main(){
    Fl_Double_Window window(450, 350, "基本控件");
    Fl_Group* pGroup = new Fl_Group(50, 50, 400, 150);
    Fl_Button* pButton = new Fl_Button(70, 50, 150, 30, "Fl_Button");
    Fl_Check_Button* pChkButton = new Fl_Check_Button(230, 50, 150, 30, "Fl_Check_Button");

    Fl_Return_Button* pRetButton = new Fl_Return_Button(70, 100, 150, 30, "Fl_Return_Button");
    Fl_Radio_Round_Button* pRndButton = new Fl_Radio_Round_Button(230, 100, 150, 30, "Fl_Round_Button");

    pGroup->end();
    Fl_Text_Editor* pText = new Fl_Text_Editor(50, 150, 350, 150);
    Fl_Text_Buffer* pBuff = new Fl_Text_Buffer();
    pText->buffer(pBuff);
    pBuff->text("示例文字");
    pText->end();
    window.end();
    window.show();
    return Fl::run();
}
#include <iostream>
#include "Pen.h"
using namespace std;

int main()
{
    Pen *MyPen = new Pen();
    MyPen->InkColor = black;
    MyPen->Length = 7;

    cout << "Ink color: " << MyPen->InkColor << endl;
    cout << "Length: " << MyPen->Length << endl;
    MyPen->write_on_paper("My name is Zee");
    
    delete MyPen;
    return 0;
}
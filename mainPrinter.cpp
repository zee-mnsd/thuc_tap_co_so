#include <iostream>
#include "Printer.h"
using namespace std;

int main()
{
    Printer *MyPrinter = new Printer();
    MyPrinter->Ink = Low;

    cout << "Ink level: " << MyPrinter->Ink << endl;

    string document = "Nihao?";
    if (MyPrinter->Ink == Low) cout << "Out of ink" << endl;
    else MyPrinter->printDocument(document);

    delete MyPrinter;
    return 0;
}
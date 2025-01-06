#ifndef PRINTER_H_INCLUDED
#define PRINTER_H_INCLUDED

#include <string>
using namespace std;

enum InkLevel
{
    Low,
    Medium,
    High
};

class Printer
{
    public:
        InkLevel Ink;
        void printDocument(string);
};

#endif // PRINTER_H_INCLUDED
#ifndef PEN_H_INCLUDED
#define PEN_H_INCLUDED

#include <string>
using namespace std;

enum Color
{
    blue,
    red,
    black
};

class Pen
{
public:
    Color InkColor;
    float Length;

    void write_on_paper(string words);
};
#endif // PEN_H_INCLUDED
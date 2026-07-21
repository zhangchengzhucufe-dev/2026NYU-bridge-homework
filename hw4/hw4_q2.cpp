#include <iostream>
using namespace std;

void printRoman(int num)
{
    while(num / 1000 != 0)
    {
        cout << "M";
        num -= 1000;
    }
    if(num / 500 != 0)
    {
        cout << "D";
        num -= 500;
    }
    for(int i = 0; num / 100 != 0 && i < 4; i++)
    {
        cout << "C";
        num -= 100;
    }
    if(num / 50 != 0)
    {
        cout << "L";
        num -= 50;
    }
    for(int i = 0; num / 10 != 0 && i < 4; i++)
    {
        cout << "X";
        num -= 10;
    }
        if(num / 5 != 0)
    {
        cout << "V";
        num -= 5;
    }
        for(int i = 0; num / 1 != 0 && i < 4; i++)
    {
        cout << "I";
        num -= 1;
    }
}
#include <random>
#include <iostream>
using namespace std;

void generateMapping(int mapping[])
{
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<int> dist(1,3);
    for(int i = 0; i < 10; i++)
    {
        mapping[i] = dist(gen);
    }
}

void printMapping(int mapping[])
{
    mapping[10];
    cout << "PIN: 0 1 2 3 4 5 6 7 8 9" << endl;
    cout << "NUM: ";
    for(int i = 0; i < 10; i++)
    {
        cout << mapping[i] << " " ;
    }
}

bool checkPIN(int actualPIN, int enteredCode, int mapping[])
{
    while(enteredCode != 0)
    {
        if(mapping[enteredCode % 10] != actualPIN % 10)
        {
            return false;
        }
        else
        {
            enteredCode /= 10;
            actualPIN /= 10;
        }
    }
    return true;
}
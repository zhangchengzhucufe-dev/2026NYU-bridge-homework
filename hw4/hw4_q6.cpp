#include <cmath>
#include <iostream>
using namespace std;

void printMoreEvenDigits(int inputNum)
{
    int Num;
    const double eps = 1e-9;
    for(int Num = 1; Num <= inputNum; Num++)
    {
        int power = 0;
        while(pow(10, power) - eps <= inputNum)
        {
            power++;
        }
        power--;
        int evenNum = 0, oddNum = 0;
        int Num1 = Num;
        for(int i = 0; i <= power ; i++)
        {   
            int product = 1;
            for(int c = 1; c <= power - i; c++)
            {
                product = product * 10;
            }
            if(Num1 / product % 2 == 0 || Num1 == 0)
            {
                
                evenNum++;
            }
            else
            {
                oddNum++;
            }
            Num1 = Num1 - (Num1 / product) * product;
        }

        if(evenNum > oddNum)
        {
            cout << Num << endl;
        }
    }    
}

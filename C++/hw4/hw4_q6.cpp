#include <iostream>
using namespace std;

void printMoreEvenDigits(int n)
{
    for(int i = 1; i < n; i++)
    {
        int num = i;
        int countOdd = 0, countEven = 0;
        do
        {
            if(num % 10 % 2 == 0 || i % 10 == 0)
            {
                ++countEven;
            }
            else
            {
                ++countOdd;
            }
            num /= 10;
        }while(num != 0);

        if(countEven > countOdd)
        {
            cout << i << endl;
        }
    }
}

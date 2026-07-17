#include <iostream>
using namespace std;

void fib(int n)
{
    if(n < 3)
    {
        cout << "1" << endl;
    }
    else
    {
        int preNum = 1, curNum = 1, temp;
        for(int i = 0; i < n -2; i++)
        {
            temp = curNum;
            curNum += preNum;
            preNum = temp;
        }
        cout << curNum << endl;
        

    }
}

//int main()
//{
//
//    return 0;
//}
#include <cmath>
#include <iostream>
using namespace std;

int main()
{
    cout << "Please enter a Real number:" << endl;
    double inputNum;
    cin >> inputNum;
    cout << "Choose your rounding method:" << endl;
    cout << "1. Floor round" << endl;
    cout << "2. Ceiling round" << endl;
    cout << "3. Round to the nearest whole number" << endl;
    int choice;
    cin >> choice;
    const double eps = 1e-9;
    
    if(fabs(fmod(inputNum,1)) < eps)
    {
        cout << static_cast<int>(inputNum);
    }

    if(inputNum > 0)
    {
        switch(choice)
        {
            case 1:
            {
                cout << static_cast<int>(inputNum) << endl;
                break;
            }
            case 2:
            {
                cout << static_cast<int>(inputNum) + 1 << endl;
                break;
            }
            case 3:
            {
                if(inputNum - static_cast<int>(inputNum) + eps < 0.5)
                {
                    cout << static_cast<int>(inputNum) << endl;
                }
                else
                {
                    cout << static_cast<int>(inputNum) + 1 << endl;
                }
                break;
            }
        }
    }
    else
    {
        switch(choice)
        {
            case 1:
            {
                cout << static_cast<int>(inputNum) - 1 << endl;
                break;
            }
            case 2:
            {
                cout << static_cast<int>(inputNum) << endl;
                break;
            }
            case 3:
            {
                if(static_cast<int>(inputNum) - inputNum + eps <= 0.5)
                {
                    cout << static_cast<int>(inputNum) << endl;
                    break ;
                }
                else
                {
                    cout << static_cast<int>(inputNum) - 1 << endl;
                    break;
                }
            }
        }
    }
}

#include <iostream>
using namespace std;

int main()
{
    int num1, num2, num3;
    cout << "Please enter three integers separated by spaces:" ;
    cin >> num1 >> num2 >> num3;
    cout << "The largest value is:" ;
    if(num1 >= num2 && num1 >= num3)
    {
        cout << num1;
    }
    else if(num2 >= num1 && num2 >= num3)
    {
        cout << num2;
    }
    else
    {
        cout << num3;
    }
    return 0;
}

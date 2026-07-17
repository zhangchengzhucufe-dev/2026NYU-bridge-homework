#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Please enter an integer: ";
    cin >> num;
    if(num % 2 == 0)
    {
        cout << num << " is Even";
    }
    else
    {
        cout << num << " is Odd";
    }
    
    return 0;
}
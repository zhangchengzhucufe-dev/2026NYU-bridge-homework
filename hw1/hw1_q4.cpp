#include <iostream>
using namespace std;

int main()
{
    cout << "Please enter two positive integers, separated by a space:" << endl;
    int num1, num2;
    cin >> num1 >> num2;
    float num3 = num1 / static_cast<float>(num2);
    cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
    cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
    cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
    cout << num1 << " / " << num2 << " = " << num3 << endl;
    cout << num1 << " div " << num2 << " = " << static_cast<int>(num1) / num2 << endl;
    cout << num1 << " mod " << num2 << " = " << num1 % num2 << endl;
    return 0;
} 
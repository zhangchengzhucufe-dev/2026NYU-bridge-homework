#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float a, b ,c;
    cout << "Please enter value of a:" << endl;
    cin >> a;
    cout << "Please enter value of b:" << endl;
    cin >> b;
    cout << "Please enter value of c:" << endl;
    cin >> c;
    if(a == 0 && b == 0 && c == 0)
    {
        cout << "This equation has infinite solutions" << endl;
    }
    else if(a == 0 && b == 0 && c != 0)
    {
        cout << "This equation has no solution" << endl;
    }
    else if(a == 0 && b != 0 )
    {
        cout << "This equation has one soulution x = " << -1*c/b << endl;
    }
    else if(a != 0 && pow(b, 2) < a*4*c)
    {
        cout << "This equation has no real solution" << endl;
    }
    else if(a != 0 && pow(b, 2) == 4*a*c)
    {
        cout << "This equation has one solution x = " << -1*b/(2*a) << endl;
    }
    else if(a != 0 && pow(b, 2) > 4*a*c)
    {
        cout << "This equation has two solution x1 =" << (-1*b + sqrt(pow(b, 2) - 4*a*c)) / (2*a) << " x2 =" << (-1*b - sqrt(pow(b, 2) - 4*a*c)) / (2*a) << endl; 
    }    
    return 0; 
}
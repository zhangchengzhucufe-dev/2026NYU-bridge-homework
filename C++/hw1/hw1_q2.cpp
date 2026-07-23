#include <iostream>
using namespace std;

int main()
{
    cout << "Please enter your amount in the format of dollars and cents separated by a space:" ;
    int dollars, cents, sum;
    cin >> dollars;
    cin >> cents;
    cout << dollars << " dollars and " << cents << " cents are:";
    sum = 100*dollars + cents;
    int quarters, dimes, nickels, pennies;
    quarters = sum / 25;
    dimes = (sum - 25*quarters) / 10;
    nickels = (sum - 25*quarters - 10*dimes) / 5;
    pennies = (sum - 25*quarters - 10*dimes - 5*nickels);
    cout << quarters << " quarters, " << dimes << " dimes, " << nickels << " nickels, " << pennies << " pennies";
    return 0;
}
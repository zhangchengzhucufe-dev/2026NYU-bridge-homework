#include <iostream>
using namespace std;

int main()
{
    int quarters, dimes, nickels, pennies;
    cout << "Please enter number of coins:" << endl;
    cout << "# of quarters:" << endl;
    cin >> quarters;
    cout << "# of dimes:" << endl;
    cin >> dimes;
    cout << "# of nickels:" << endl;
    cin >> nickels;
    cout << "# of pennies:" << endl;
    cin >> pennies;
    cout << "The total is " 
        <<  (25 * quarters + 10 * dimes + 5 * nickels + pennies) / 100
        << " dollars and " 
        << (25 * quarters + 10 * dimes + 5 * nickels + pennies) % 100 
        << " cents" ;
    return 0;
}
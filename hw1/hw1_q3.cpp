#include <iostream>
using namespace std;

int main()
{
    int days1, days2, hours1, hours2, minutes1, minutes2;
    cout << "Please enter the number of days John has worked: " ;
    cin >> days1;
    cout << "Please enter the number of hours John has worked: " ;
    cin >> hours1;
    cout << "Please enter the number of minutes John has worked: " ;
    cin >> minutes1;
    cout << "Please enter the number of days Bill has worked: " ;
    cin >> days2;
    cout << "Please enter the number of hours Bill has worked: " ;
    cin >> hours2;
    cout << "Please enter the number of minutes Bill has worked: " ;
    cin >> minutes2;
    
    int minutes, hours, days;
    minutes = (minutes1 + minutes2) / 60;
    hours = (hours1 + hours2 + minutes) / 24;
    days = days1 + days2 + hours;
    cout << "The total time both of them worked together is: " 
        << days << " days, " << hours1 + hours2 - 24*hours 
        << " hours and " << minutes1 + minutes2 - 60*minutes<< " minutes." ;
    return 0;
}
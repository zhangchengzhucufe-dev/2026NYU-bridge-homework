#include <cmath>
#include <iostream>
using  namespace std;

void printDivisors(int num)
{
    cout << "Please enter a positive integer >= 2: " ;
    cin >> num;
    for(int i = 1; i <= sqrt(num); i++)
    {
        if(num % i == 0)
        {
            cout << i << " ";
        }
        
    }
}

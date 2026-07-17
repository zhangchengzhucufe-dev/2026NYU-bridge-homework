#include <iostream>
using namespace std;

double eApprox(int n)
{
    double sum = 1, product = 1;
    for(int i = 0; i < n; i++)
    {
        product *= i;
        sum += 1.0 / product;
    }
    return sum;
}



int main()
{
    cout.precision(30);
    for(int n = 1; n <= 15; n++)
    {
        cout << "n = " << n << '\t' << eApprox(n) << endl;
    }
    return 0;
}
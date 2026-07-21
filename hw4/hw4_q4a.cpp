#include <cmath>
#include <iostream>
using namespace std;

void geomMeanLength()
{
    double product = 1;
    int num;
    cin >> num;
    int input;
    for(int i = 0; i < num; i++)
    {
        cin >> input;
        product *= static_cast<double>(input);
    }
    double result = pow(product, 1.0 / num);
    cout << result;
}
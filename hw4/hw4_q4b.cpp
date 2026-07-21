#include <cmath>
#include <iostream>
using namespace std;

void geomMeanSentinel()
{
    int input;
    int num = 0;
    double product = 1;
    while(input != -1)
    {
        ++num;
        cin >> input;
        product *= static_cast<double>(input);
    }
    cout << pow(product, 1.0 / num);

}
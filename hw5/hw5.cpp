#include <iostream>
using namespace std;

int main()
{
    cout << "Please enter a positive integer:" << endl;
    int input;
    cin >> input;
    for(int i = 1; i <= input;  i++)
    {
        for(int o = 1; o <= input; o++)
        {
            cout << o*i << "\t";
        }
        cout << "\n";
    }
}

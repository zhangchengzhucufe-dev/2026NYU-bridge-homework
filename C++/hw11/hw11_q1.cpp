#include <iostream>
using namespace std;

void printTriangle(int n)
{
    if(n != 1)
    {
        printTriangle(n - 1);
        for(int i = 0; i < n; i++)
        {
            cout << "*";
        }
        cout << endl;
    }
    else
    {
        cout << "*" << endl;
    }
}

void printOppositeTriangles(int n)
{
    if(n == 1)
    {
        cout << "*" << endl;
        cout << "*" << endl;
    }
    else
    {
        for(int i = 0; i < n; i++)
        {
            cout << "*";
        }
        cout << "\n";
        printOppositeTriangles(n - 1);
        for(int i = 0; i < n; i++)
        {
            cout << "*";
        }
        cout << "\n";
    }
}

void printRuler(int n)
{
    if(n == 1)
    {
        cout << "-" << endl;
    }
    else
    {
        printRuler(n - 1);
        for(int i = 0; i < n; i++)
        {
            cout << "-";
        }
        cout << endl;
        printRuler(n - 1);
    }
}





int main()
{
    printRuler(4);
    return 0;
}
#include <string>
#include <iostream>
using namespace std;

int main()
{
    string name;
    cout << "Please enter your name:" ;
    cin >> name;
    int graYear, curYear, diff;
    cout << "Please enter your graduation year:" ;
    cin >> graYear;
    cout << "Please enter current year:" ;
    cin >> curYear;
    cout << name << ", you are " ;
    diff = graYear - curYear;
    if(diff <= 0)
    {
        cout << "Graduated";
        return 0;
    }

    switch(diff)
    {
        case 1:
            cout << "a Senior";
            break;
        case 2:
            cout << "a Junior";
            break;
        case 3:
            cout << "a Sophomore";
            break;
        case 4:
            cout << "a Freashman";
            break;
        default:
            cout << "not in college yet";
    }
    return 0;
}
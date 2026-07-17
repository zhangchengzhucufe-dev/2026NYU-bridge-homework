#include <iostream>
using namespace std;

int main()
{
    int length, width;
    cout << "Enter the rectangle length: ";
    cin >> length;
    cout << "Enter the rectangle width: ";
    cin >> width;
    cout << "Perimeter: " << 2*(length + width) << endl;
    cout << "Area: " << width*length;
    return 0;
}
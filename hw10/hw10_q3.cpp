#include <iostream>
using namespace std;


int main()
{
    int countNum = 0;
    while(true)
    {
        int input;
        cin >> input;
        ++countNum;
        if(input == -1)
        {
            --countNum;
            break;
        }
    }
    int* ptr = new int[countNum];

    while(true)
    {
        int input, idx = 0;
        cin >> input;
        if(input == -1)
        {
            --countNum;
            break;
        } 
        ptr[idx] = input;
        ++idx;
    }
    cout << "Please enter a number you want to search." << endl;
    int search;
    cin >> search;
    cout << search << " shows in lines ";
    bool first = true;
    for(int i = 0; i < countNum; i++)
    {
        if(first && ptr[i] == search)
        {
            first = false;
            cout << i;
        }
        else if(ptr[i] == search)
        {
            cout << ", " << i;
        }
        else if(i == countNum - 1)
        {
            cout << ".";
        }
    }
}
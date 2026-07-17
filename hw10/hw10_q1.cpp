#include <string>
#include <sstream>
#include <iostream>
using namespace std;

string* createWordsArray(string sentence, int& outWordsArrSize)
{
    outWordsArrSize = 0;
    istringstream iss(sentence);
    string partStr;
    while(iss >> partStr)
    {    
        outWordsArrSize++;
    }
    string* str = new string[outWordsArrSize];
    for(int i = 0; i < outWordsArrSize; i++)
    {
        iss >> partStr;
        str[i] = partStr;
    } 
    return str;
}
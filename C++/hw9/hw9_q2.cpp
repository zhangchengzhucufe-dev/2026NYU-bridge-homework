#include <array>
#include <string>
using namespace std;

array<int,26> freqAlpha(string str)
{
    array<int,26> arr = {};
    for(int i = 0; i < str.size(); i++)
    {
        if(isalpha(str[i]))
        {
            char ch = tolower(str[i]);
            ++arr[ch - 'a'];
        }       
    }
    return arr;
}


bool areAnagrams(string s1, string s2)
{
    array<int,26> arrS1, arrS2;
    arrS1 =  freqAlpha(s1);
    arrS2 =  freqAlpha(s2);
    for(int i = 0; i < 26; i++)
    {
        if(arrS1[i] != arrS2[i])
        {
            return false;
        }
    }
    return true;
}
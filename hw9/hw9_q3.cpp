#include <algorithm>
#include <cmath>
#include <string>
#include <cctype>
using namespace std;

void countFreq(int (&arr)[26], string s1)
{
    for(char ch : s1)
        {
            if(isalpha(ch))
            {
                ch = tolower(ch);
                arr[ch - 'a']++;
            }
        }
}


bool areAnagrams(string s1, string s2)
{
    int freqWordsS1[26] = {0};
    int freqWordsS2[26] = {0};
    countFreq(freqWordsS1, s1);
    coutFreq(freqWordsS2, s2);
    bool result = equal(freqWordsS1, freqWordsS1+26, freqWordsS2);
    return result;

}
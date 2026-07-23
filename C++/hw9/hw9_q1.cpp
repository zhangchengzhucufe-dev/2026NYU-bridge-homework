#include <string>
using namespace std;

string wordAndLetterCount(string input)
{
    int freq[26] = {}, countWords = 0;
    bool isNew = true;
    for(int i = 0; i < input.length(); i++)
    {
        if(isalpha(input[i]))
        {
            if(isNew)
            {
                ++countWords;
                isNew = false;
            }
            char ch = tolower(input[i]);
            ++freq[ch - 'a'];
        }
        else
        {
            isNew = true;
        }
    }
    string result = to_string(countWords);
    result += "\t";
    for(int i = 0; i < 26; i++)
    {
        if(freq[i] != 0)
        {
            result += "\n";
            result += to_string(freq[i]);
            result += "\t";
            char ch2 = 'a' + freq[i];
            result += ch2;
        }
    }
    return result;
}
#include <sstream>
#include <cctype>
#include <string>
using namespace std;

string* createWordsArray(string sentence, int& outWordsArrSize)
{
    bool isNew = true;
    for(char ch : sentence)
    {
        if(isNew && isalpha(ch))
        {
            ++outWordsArrSize;
            isNew = false;
        }
        else if(!isNew && !isalpha(ch))
        {
            isNew = true;
        }
    }
    string* str = new string[outWordsArrSize];
    string word = "";
    int idx = 0;
    for(char ch : sentence)
    {
        if(isNew && isalpha(ch))
        {
            ++outWordsArrSize;
            isNew = false;
            word += ch;
        }
        else if(!isNew && !isalpha(ch))
        {
            isNew = true;
            str[idx++] = word;
        }
        else if(!isNew && isalpha(ch))
        {
            word += ch;
        }
    }
    return str;
}

string* createWordsArray2(string sentence, int& outWordsArrSize)
{
    outWordsArrSize = 0;
    istringstream iss(sentence);
    string word;
    while(iss >> word)
    {
        ++outWordsArrSize;
    }
    string* str = new string[outWordsArrSize];
    iss.clear();
    iss.seekg(0, ios::beg);
    int idx = 0;
    while(iss >> word)
    {
        if(!isalpha(word[word.size() - 1]))
        {
            word.pop_back();
            str[idx++] = word;
        }
        else
        {
            str[idx++] = word;
        }
    }
    return str;
}

#include <cctype>
#include <string>
using namespace std;

bool isStart(int i, string text)
{   
    if(i == 0)
    {
        return true;
    }
    if(!isalpha(text[i - 1]) && !isdigit(text[i - 1]))
    {
        return true;
    }
    return false;
}

bool isEnd(int i, string text, int len)
{
    if(isalpha(text[i + len + 1]) || i + len + 1 == text.size())
    {
        return true;
    }
}


int getLen(string text, int i)
{
    int len = 0;
    while(isdigit(text[i + 1]))
    {
        ++len;
        ++i;
    }
    return len;
}

string hideNumbers(string text)
{
    string result = "";
    for(int i = 0; i < text.size(); i++)
    {
        if(isdigit(text[i]))
        {
            int len = getLen(text, i);
            if(isEnd(i, text, len) && isStart(i, text))
            {
                for(int o = 0; o < len + 1; o++)
                {
                    result += "x";
                }
            }
            else
            {
                result += "text[i]";
            }
        }
        else
        {
            result += "text[i]";
        }
    }
    return result;
}
#include <iostream>
using namespace std;

int printMonthCalender(int numOfDays, int startingDay)
{
    cout << "Mon" << "\t"
        << "Tue" << "\t"
        << "Wed" << "\t"
        << "Thr" << "\t"
        << "Fri" << "\t"
        << "Sat" << "\t"
        << "Sun" << "\t" << endl;
    int numOfSpace = 1;
    int printDay = 0;
    int day = 1;
    for(int i = 1; i <= numOfDays; i++)
    {
        // print spaces before out date
        while(true)
            {
                if(numOfSpace == startingDay)
                {
                    break;
                }
                cout << "\t";
                ++numOfSpace;
                day++;
            }



        cout << i << "\t";
        day++;
        if(day == 8)
        {
            day = 1;
            cout << "\n";
        }
    }
    return day;
}

bool isLeap(int year)
{
    if(year % 4 == 0)
    {
        if(year % 100 == 0 && year % 400 != 0)
        {
            return false;
        }
        return true;
    }
    return false;
}

void matchDays(int year, int month, int& numOfDays)
{
    switch(month)
    {

        case 12:
        cout << "December" << endl;
            numOfDays = 31;
            break;
        case 1:
        cout << "January" << endl;
            numOfDays = 31;
            break;
        case 3:
        cout << "March" << endl;
            numOfDays = 31;
            break;
        case 5:
        cout << "May" << endl;
            numOfDays = 31;
            break;
        case 7:
        cout << "July" << endl;
            numOfDays = 31;
            break;
        case 8:
        cout << "August" << endl;
            numOfDays = 31;
            break;
        case 10:
        cout << "October" << endl;
            numOfDays = 31;
            break;
        
        case 2:
            cout << "February" << endl;
            if(isLeap(year))
            {
                numOfDays = 29;
                break;
            }
            numOfDays = 28;
            break;
        
        case 11:
            cout << "November" << endl;
            numOfDays = 30;
            break;     
        case 4:
            cout << "April" << endl;
            numOfDays = 30;
            break;     
        case 6:
            cout << "June" << endl;
            numOfDays = 30;
            break;     
        case 9:
            cout << "September" << endl;
            numOfDays = 30;
            break;     
    }
}

void printYearCalender(int year, int startingDay)
{
    int month = 1, numOfDays;
    while(month < 13)
    {
        matchDays(year, month, numOfDays);
        startingDay = printMonthCalender(numOfDays, startingDay);
        month++;
        cout << "\n";
    } 
}


int main()
{
    printYearCalender(2026, 4);
    return 0;
}
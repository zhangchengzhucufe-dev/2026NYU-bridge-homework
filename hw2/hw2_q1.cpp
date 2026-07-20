#include <cctype>
#include <iostream>
using namespace std;

double CalDisPrice(int price1, int price2, char clubCard)
{
    double disPrice;
    clubCard = tolower(clubCard);
    if(clubCard == 'y')
    {
        if(price1 <= price2)
        {
            disPrice = (price1 / 2.0 + price2) * 0.9;
        }
        else
        {
            disPrice = (price2 / 2.0 + price1) * 0.9;
        }
    }
    else
    {
        if(price1 <= price2)
        {
            disPrice = price1 / 2.0 + price2;
        }
        else
        {
            disPrice = price2 / 2.0 + price1;
        }  
    }
    return disPrice;
}


int main()
{
    int price1, price2;
    double tax;
    char clubCard;
    cout << "Enter price of first item:";
    cin >> price1;
    cout << "\n";

    cout << "Enter price of second item:";
    cin >> price2;
    cout << "\n";
    
    cout << "Does customer have a club card? (Y/N):";
    cin >> clubCard;
    cout << "\n";
    
    cout << "Enter tax rate, e.g. 5.5 for 5.5% tax:";
    cin >> tax;
    cout << "\n";
    
    cout << "Base price:";
    cout << price1 + price2;
    cout << "\n";
    
    cout << "Price after discounts: ";
    double disPrice = CalDisPrice(price1, price2, clubCard);
    cout << disPrice;
    cout << "\n";
    
    cout << "Total price: ";
    cout << disPrice * (100 + tax) / 100;
    return 0;
}
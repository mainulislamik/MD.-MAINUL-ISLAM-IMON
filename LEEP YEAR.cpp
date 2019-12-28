//C++ LEEP YEAR
#include<iostream>
#include<conio.h>

using namespace std;
int main()
{
    int year;
    cout<<"enter the year:";
    cin>>year;
    if(year%4==0 && year%100!=0)
    {
        cout<<"this is leep year";
    }
    else if(year%400==0)
    {
        cout<<"this is leep year";
    }
    else
    {
        cout<<"this is not leep year";
    }
    getch();
}

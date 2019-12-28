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


//c++ class
#include<iostream>
#include<conio.h>
using namespace std;

class student
{
    public:
        string name;
        int id;
        double gpa;
};

int main()
{
    student nahid;
    nahid.name = "nahid";
    nahid.id = 1001;
    nahid.gpa =4.81;
    cout<<"name: "<<nahid.name <<"\nid: "<<nahid.id <<"\ngpa: " <<nahid.gpa;
    student kamal;
    kamal.name = "kamal";
    kamal.id = 1002;
    kamal.gpa =4.50;
    cout<<"\n\nname: "<<kamal.name <<"\nid: "<<kamal.id <<"\ngpa: " <<kamal.gpa;
    getch();
}

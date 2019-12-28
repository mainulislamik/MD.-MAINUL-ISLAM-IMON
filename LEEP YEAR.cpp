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
//c++ class useing function+perameeter
#include<iostream>
#include<conio.h>
using namespace std;

class student
{
    public:
        string name;

        int id;
        double gpa;
        void display()
        {
            cout<<"name: "<<name <<"\nid: "<<id <<"\ngpa: " <<gpa<<"\n\n";
        }
        void setvalu( string m,int y, double z)
        {

            name=m;
            id=y;
            gpa=z;
        }
};

int main()
{
    student nahid;
    nahid.setvalu("nahid",1001,4.20);
    nahid.display();

    student kamal;
    kamal.setvalu("kamal",1002,4.22);
    kamal.display();

    getch();
}
//c++ constructor
#include<iostream>
#include<conio.h>
using namespace std;

class student
{
    public:
        string name;

        int id;
        double gpa;
        void display()
        {
            cout<<"name: "<<name <<"\nid: "<<id <<"\ngpa: " <<gpa<<"\n\n";
        }
        student( string m,int y, double z)
        {

            name=m;
            id=y;
            gpa=z;
        }
};

int main()
{
    student nahid("nahid",1001,4.20);
    nahid.display();

    student kamal("kamal",1002,4.22);
    kamal.display();

    getch();
}
//c++ defult conosturtor
#include<iostream>
#include<conio.h>
using namespace std;

class student
{
    public:
        string name;

        int id;
        double gpa;
        void display()
        {
            cout<<"name: "<<name <<"\nid: "<<id <<"\ngpa: " <<gpa<<"\n\n";
        }
        student( string m,int y, double z)
        {

            name=m;
            id=y;
            gpa=z;
        }
        student()
        {
            cout<<"welcome to student management system"<<endl;
        }
};

int main()
{
    student db;
    student nahid("nahid",1001,4.20);
    nahid.display();

    student kamal("kamal",1002,4.22);
    kamal.display();

    getch();
}

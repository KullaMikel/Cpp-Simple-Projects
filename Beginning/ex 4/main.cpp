//Excersize to find if a year is leap or common

#include <iostream>

using namespace std;

int main()
{
    int year;
    cout<<"Enter a year: "<<endl;
    cin>>year;                                                          //Takes a value from user ( A year )

    if ((year % 4==0 && year % 100 != 0) || (year % 400 == 0))          //Algorithem to find a leap year
    {
        cout<<"leap year"<<endl;
    }
    else
    {
        cout<<"common year"<<endl;
    }
}

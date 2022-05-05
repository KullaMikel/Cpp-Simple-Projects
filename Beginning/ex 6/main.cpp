// Excercise to find the biggist number of three given numbers

#include <iostream>

using namespace std;

int main()
{
    int a,b,c,l;
    cout<<"input three numbers: "<<endl;
    cin>>a>>b>>c;
    if (a>b&&a>c)
        l=a;
    else if (b>a&&b>c)
        l=b;
    else
        l=c;
    cout<<"the biggest number is: "<<l;
}

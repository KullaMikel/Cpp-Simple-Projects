// Simple math excercise

#include <iostream>

using namespace std;

int main()
{
    float x,y,f;
    cout<<"Input x and y:"<<endl;
    cin>>x>>y;
    f=((x*x)+(y*y))/(((x*x)+2)*y);
    if(y>0 )
    {
        cout<<"Value of function= "<<f;
    }
    else if(y<=0)
    {
        cout << "No solution!"<<endl;
    }
    return 0;
}

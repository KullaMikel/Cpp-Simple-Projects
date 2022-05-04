#include <iostream>
#include<cmath>

using namespace std;

int main()
{float a,b,c,x1,x2,d;
cout<<"input a, b and c"<<endl;
cin>>a>>b>>c;
d=b*b-4*a*c;
if(d>0){
    x1=(-b+sqrt(d))/(2*a);
    x2=(-b-sqrt(d))/(2*a);
    cout<<"xl="<<x1<<endl;
    cout<<"x2="<<x2<<endl;
}
else if(d=0){
    x1=-b/(2*a);
    cout<<"x1=x2="<<x1<<endl;
}else{cout<<"no real solution"<<endl;
}
    return 0;
}

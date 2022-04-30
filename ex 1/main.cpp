#include <iostream>
using namespace std;
int main()
{
   int x,y,z;
   double S,M,A;
   cout<<"imput three no. "<<endl;
   cin>>z>>y>>x;
   S=x+y+z;
   A=(x+y+z)/3.0;
   M=x*y*z;

   cout<<"sum = "<<S;
   cout<<"\naverage = "<<A;
   cout<<"\nmultiplication = "<<M;
}

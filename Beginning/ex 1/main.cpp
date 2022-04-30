// Ex: Calculates the sum, average, multiplication of 3 numbers

#include <iostream>
using namespace std;
int main()
{
   int x,y,z;
   double S,M,A;                                //we use double valiables because we will do division 
   cout<<"imput three no. "<<endl;
   cin>>z>>y>>x;                                // taking input from the user
   S=x+y+z;
   A=(x+y+z)/3.0;
   M=x*y*z;

   cout<<"sum = "<<S;
   cout<<"\naverage = "<<A;
   cout<<"\nmultiplication = "<<M;
}

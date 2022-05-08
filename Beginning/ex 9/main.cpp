// LLogaritja e veprimeve te kredise

#include <iostream>
#include <math.h>

using namespace std;
void interesimujor(float pm,float value,float t){
    float im;
    im=pm-(value/t);
    cout<<"\nInteresi mujor eshte: "<<endl;
    cout<<im<<endl;
}
void pagesamujore(float value,float t,float i){
     float pm;
     pm = (value*i)/(1.0-(1.0/(pow((1.0+i),t))));
     cout<<"\nPagesa mujore eshte: "<<endl;
     cout<<pm<<endl;
     interesimujor(pm,value,t);
}

int main()
{
   float i,value,t,pm,im;   //t is in mounths
   cout<< "Vendos vleren e kredise: "<<endl;
   cin>>value;
   cout<< "\nVendos vleren e interesit: "<<endl;
   cin>>i;
   cout<< "\nVendos kohen ne muaj: "<<endl;
   cin>>t;

    pagesamujore(value,t,i);
}

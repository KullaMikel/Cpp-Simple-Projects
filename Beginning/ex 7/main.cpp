// Excercise to find how many odd(tek) and even(cift)
// numbers are in one number
// EX: input: 10
// output:
//          Numra cift kemi: 5
//          Numra tek kemi: 5

#include <iostream>

using namespace std;

int main()
{
    int x,tek=0, cift=0;

    cout<<"Vendos numrin"<<endl;
    cin>>x;
    for (;x>0;x--)
    {
        if (x % 2 == 0)
        {
            cift++;
        }
        else
        {
            tek++;
        }
    }
    cout<<"Numra cift kemi: "<<cift<<endl;
    cout<<"Numra tek kemi: "<<tek<<endl;
    return 0;
}

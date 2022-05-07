// multiplication table until 9 (only the above part of matrix)

#include <iostream>

using namespace std;

int main()
{
    int i,j;
    for(i=1; i<=9; i++)
    {
        for(j=1; j<=9; j++)
        {
            if(i>j)
            {

                   cout << "\t";
            }
            else
            {
                cout<<i*j;
                cout << " \t";
            }
        }
        cout<<endl;
    }
    return 0;
}


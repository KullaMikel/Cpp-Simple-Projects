// excercise to find power of numbers, and maximum of 2 or 3 numbers

#include <iostream>
using namespace std;
void afisho()
    {
    cout << "pershendetje C++ \n"<<endl;
    }


int maksimumi(int n1, int n2)
    {
    if (n1>n2)
        return n1;
    else
        return n2;
    }


int maksimumi(int n1, int n2, int n3)
    {
//int maks1 = maksimumi(n1, n2);
//int maks = maksimumi(maksimumi(n1, n2), n3);
    return maksimumi(maksimumi(n1, n2), n3);
    }


double maksimumi(double n1, double n2)
    {
    if (n1>n2)
        return n1;
    else
        return n2;
    }

int pow (int a, int b)
    {
    int p = 1;
    for (int i = 1; i <=b; i++)
        {
        p = p * a;
        }
    return p;
    }


int main()
    {
    cout << "Jepni 2 numra per ti ngritur ne fuqi"<<endl;
    int a, b;
    cin>>a>>b;
    cout<<"Fuqia e 2 numrave te dhene eshte: " << pow(a,b) << endl;
    cout << "Jepni 3 numra"<<endl;
    int x, y, z;
    cin>>x>>y>>z;
    cout << "Jepni 2 numra me presje"<<endl;
    double x1, y1;
    cin>>x1>>y1;
    int maks = maksimumi(x, y, z);
    double maks2 = maksimumi(x1, y1);
    cout<<"Maksimumi eshte: " << maks << endl;
    cout<<"Maksimumi 2 eshte: " << maks2 << endl;
    afisho();
    return 0;
}
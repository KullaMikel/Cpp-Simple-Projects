#include <iostream>
#include <cmath>
using namespace std;
int main() {
    char x;
    char y,z;
    float rbd;
    float rbey, ref;
    cout<<"* * * Normat e kthimit te Bonove Te Thesarit * * *"<<endl;
    while(true) {
        cout<<"Zgjidh nje nga menyrat e llogaritjes se normes(Shyp numrin perkates)"<<endl;
        cout<<"1.Norma diskonte e bankes (rBD)\n2.Norma ekuivalente e obligacionit (rBEY)\n3.Norma efektive vjetore (rEF)\n0.Exit"<<endl;
        cin>>x;
        float Vn,p,n;
        switch (x)
        {
            case '1':
                cout<<"Gjej: \n1.Vn,\n2.P,\n3.n,\n4.rBD?\n";
                cin>>y;
                switch(y){
                    case '1':
                        cout<< "rBD (%) = ";
                        cin >> rbd;
                        cout << "P = ";
                        cin >> p;
                        cout << "n = ";
                        cin >> n;
                        cout<<"Vn = "<<p/(1-(rbd/100*n/360))<<endl;
                        cout<<"*******************************************"<<endl;
                        break;
                    case '2':
                        cout<< "rBD (%) = ";
                        cin >> rbd;
                        cout << "Vn = ";
                        cin >> Vn;
                        cout << "n = ";
                        cin >> n;
                        cout<<"P = "<< Vn*(1-(rbd/100*n/360))<<endl;
                        cout<<"*******************************************"<<endl;
                        break;
                    case '3':
                        cout<< "rBD (%) = ";
                        cin >> rbd;
                        cout << "Vn = ";
                        cin >> Vn;
                        cout << "P = ";
                        cin >> p;
                        cout<<"n = "<<(Vn-p)/(rbd/100*Vn/360)<<endl;
                        cout<<"*******************************************"<<endl;
                        break;
                    case '4':
                        cout << "Vn = ";
                        cin >> Vn;
                        cout << "P = ";
                        cin >> p;
                        cout << "n = ";
                        cin >> n;
                        cout<<"rBD = "<<(Vn-p)/Vn*(360/n)*100<<"%"<<endl;
                        cout<<"*******************************************"<<endl;
                        break;
                }
            break;
            case '2':
                cout<<"Gjej: \n1.Vn,\n2.P,\n3.n,\n4.rBEY?\n";
                cin>>y;
                switch(y) {
                    case '1':
                        cout << "rBEY (%) = ";
                        cin >> rbey;
                        cout << "P = ";
                        cin >> p;
                        cout << "n = ";
                        cin >> n;
                        cout << "Vn = " << p*(1+(rbey/100*n/365)) << endl;
                        cout << "*******************************************" << endl;
                        break;
                    case '2':
                        cout << "rBEY (%) = ";
                        cin >> rbey;
                        cout << "Vn = ";
                        cin >> Vn;
                        cout << "n = ";
                        cin >> n;
                        cout << "P = " <<Vn/(1+(rbey/100*n/365)) << endl;
                        cout << "*******************************************" << endl;
                        break;
                    case '3':
                        cout << "rBEY (%) = ";
                        cin >> rbey;
                        cout << "Vn = ";
                        cin >> Vn;
                        cout << "P = ";
                        cin >> p;
                        cout << "n = " << (Vn - p) / (rbey/100*p/365) << endl;
                        cout << "*******************************************" << endl;
                        break;
                    case '4':
                        cout << "Vn = ";
                        cin >> Vn;
                        cout << "P = ";
                        cin >> p;
                        cout << "n = ";
                        cin >> n;
                        cout << "rBEY = " << ((((Vn - p)/p) * (365 / n)) * 100) << "%" << endl;
                        cout << "*******************************************" << endl;
                        break;
                }
                break;
            case '3':
                cout<<"Gjej: \n1.Vn,\n2.P,\n3.n,\n4.rEF?\n";
                cin>>z;
                switch (z){
                    case '1':
                        cout << "rBEY (%) = ";
                        cin >> ref;
                        cout << "P = ";
                        cin >> p;
                        cout << "n = ";
                        cin >> n;
                        double r,w;
                        r=(ref/100)+1;
                        w=(n/360);
                        cout<<"Vn = "<< p*(pow(r,w))<<endl;
                        cout << "*******************************************" << endl;
                        break;
                    case '2':
                        cout << "rBEY (%) = ";
                        cin >> ref;
                        cout << "Vn = ";
                        cin >> Vn;
                        cout << "n = ";
                        cin >> n;
                        double t,u;
                        t=(ref/100)+1;
                        u=(n/360);
                        cout<<"P = "<< Vn/ (pow(t,u))<<endl;
                        cout << "*******************************************" << endl;
                        break;
                    case '3':
                        cout << "rEF (%) = ";
                        cin >> ref;
                        cout << "P = ";
                        cin >> p;
                        cout << "Vn = ";
                        cin >> Vn;
                        double a,b;
                        a = ref/100 + 1;
                        b = 1 + ((Vn-p)/p);
                        cout << "n = " << (360/ log(a))*(log(b)) << endl;
                        cout << "*******************************************" << endl;
                        break;
                    case '4':
                        cout << "Vn = ";
                        cin >> Vn;
                        cout << "P = ";
                        cin >> p;
                        cout << "n = ";
                        cin >> n;
                        float k;
                        k = 1+((Vn-p)/p);
                        cout << "ref = " << (pow(k,360/n)-1 )*100<< "%" << endl;
                        cout << "*******************************************" << endl;
                        break;
                }
                break;
            case '0' :
                cout<<"* * * * * * * * * * *"<<endl;
                cout<<"* * * Good bye! * * *"<<endl;
                cout<<"* * * * * * * * * * *"<<endl;
                exit(0);
            default :
                cout << "Operator i gabuar" << endl;
        }
    }
    return 0;
}
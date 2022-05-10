// Simple calculator
#include <iostream>
#include <cmath>

             using namespace std;
             int main()
             {
                 double a,b;
                 char Operator = 0;
                 cout << "-> **** Makina llogaritese eshte ne pune! ****" << endl;
                 while(true)
                 {
                     cout << "-> zgjidh veprimin (/, *, -, +, %, r (rrenja katrore), f (fuqia e dy numrave), e(exit)): " << endl;
                     cin >> Operator;
                     switch (Operator)
                     {
                         case '/' :
                             cout << "-> Jepni 2 numra: ";
                             cin >> a >> b;
                             cout << a << " / " << b << " = " << a / b << endl;
                             break;
                         case '*' :
                             cout << "-> Jepni 2 numra: ";
                             cin >> a >> b;
                             cout << a << " * " << b << " = " << a * b << endl;
                             break;
                         case '+' :
                             cout << "-> Jepni 2 numra: ";
                             cin >> a >> b;
                             cout << a << " + " << b << " = " << a + b << endl;
                             break;
                         case '-' :
                             cout << "-> Jepni 2 numra: ";
                             cin >> a >> b;
                             cout << a << " - " << b << " = " << a - b << endl;
                             break;
                         case '%' :
                             int x, c;
                             cout << "-> Jepni 2 numra: ";
                             cin >> x >> c;
                             cout << x << " % " << c << " = " << x % c << endl;
                             break;
                         case 'r' :
                             cout << "-> Jepni 1 numer: ";
                             cin >> b;
                             cout << " rrenja katrore e " << b << " = " << sqrt(b) << endl;
                             break;
			 case 'f' :
                             cout << "-> Jepni 2 numra: ";
                             cin >> a >> b;
                 	     cout << a << " ne fuqi " << b << " = " << pow(a, b) << endl;
                 	     break;
             		 case 'e' :
                 	     exit(0);
            	         default :
                 	     cout << "Operator i gabuar" << endl;
         }
     }
        return 0;
    }
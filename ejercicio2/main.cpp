#include <iostream>

using namespace std;

int main()
{
    int A, B, C, residuo  ;
    cout <<"ingrece A" << endl;
    cin >> A;
    cout << "ingrece B" << endl;
    cin >>B;
    C=A/B;
    residuo= A-(C*B);

    cout<<"El residuo es" << endl << residuo << endl << endl;

    return 0;


}

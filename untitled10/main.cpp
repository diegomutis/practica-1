#include <iostream>
using namespace std;

void cadena_de_carc(int&);
int main()
{
    int num=123;
    cadena_de_carc(num);

    return 0;
}

void cadena_de_carc(int& numero){
    int copia = numero;
    int digitos =1;
    while (copia/10>0) {
        digitos=digitos+1;
        copia=copia/10;
    }
     int array [digitos];
     for (int i=0;i<=digitos-1;i++){
         array[i]=numero%10;
         numero=numero/10;

     }
     cout << endl<<'"';
     for (int i=digitos-1;0<=i;i--){
         cout << array[i];
     }
     cout<<'"'<<endl;
}


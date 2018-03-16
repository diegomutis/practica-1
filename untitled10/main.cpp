#include <iostream>
#include <stdlib.h>
using namespace std;

void cadena_de_carc(int numero);

int main()
{

    cout<<"ingrece un numer"<<endl;
    int numero;
    cin>>numero;
    cadena_de_carc(numero);


    return 0;
}

void cadena_de_carc(int numero){
    int digitos=1;
    char *pun ;
    pun = new char[numero];
    int copia=numero;
    while (copia/10>0){
        copia=copia/10;
        digitos=digitos+1;
}
    for (int i=0;i<digitos;i++){
        for (int n=0;n<digitos;n++){
            pun[i]= numero%10;
            numero=numero/10;
            cout << *pun+i<<endl;
        }

    }
}






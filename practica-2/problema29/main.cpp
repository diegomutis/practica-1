/*
Problema 9.
Escribir un programa que reciba un número n y lea una cadena de caracteres numéricos, el programa debe separar la cadena de caracteres en números de n cifras, sumarlos e imprimir el resultado.
En caso de no poderse dividir exactamente en números de n cifras se colocan ceros a la izquierda del primer número.
Ejemplo: Si n=3 y se lee el arreglo 87512395 la suma seria 087+512+395=994. Nota:
         la salida del programa debe ser:
         Original: 87512395.
         Suma: 994.
*/

#include <iostream>

using namespace std;
void potencia(int,int&);
int main()
{
    int contador=0;
    int total=0;
    int numero;
    int indice=0;
    int base;
    int suma;
    cout << "ingrece un numero"<<endl;
    cin>> numero;
    int array[]={8,7,5,1,2,3,9,5};
    int limite = (sizeof(array)/sizeof(array[0]));
    int limite2=limite;
    int ceros=0;
    int salir=0;
    while (limite%numero!=0){
        limite=limite+1;
        ceros=ceros+1;
    }
    int particiones=limite/numero;
    salir =(limite/particiones)-ceros;
    int numero2=salir-1;

    for (int i=0;i<particiones;i++){
        suma=0;
        for (int n=0;n<numero;n++){
            potencia(numero2,base);
            suma=array[indice]*base+suma;
            indice=indice+1;
            numero2=numero2-1;
            contador=contador+1;
            if (contador==salir){
                numero2=numero-1;
                break;
            }

        }
        numero2=numero-1;
        total=total+suma;

    }
    cout<<"Original: ";
    for (int i=0;i<limite2;i++){
        cout<<array[i];
    }
    cout<<'.'<<endl<<"Suma: "<<total<<'.'<<endl;

    return 0;
}


void potencia(int numero,int& base){
    base=1;
    for (int i=0;i<numero;i++){
        base=base*10;
    }
}

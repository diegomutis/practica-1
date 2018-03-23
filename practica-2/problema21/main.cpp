/*
Problema 1.
Se necesita un programa que permita determinar la mínima combinación de billetes y monedas para una cantidad de dinero determinada.
Los billetes en circulación son de $50.000, $20.000, $10.000, $5.000, $2.000 y $1.000, y las monedas son de $500, $200, $100 y $50.
Hacer un programa que entregue el número de billetes y monedas de cada denominación para completar la cantidad deseada.
Si por medio de los billetes y monedas disponibles no se puede lograr la cantidad deseada, el sistema deberá decir lo que resta para lograrla.
Use arreglos y ciclos para realizar el programa.
Ejemplo: si se ingresa 47810, el programa debe imprimir:
         50000 : 0
         20000: 2
         10000 : 0
         5000: 1
         2000 : 1
         1000: 0
         500 : 1
         200: 1
         100 : 1
         50: 0
         Faltante: 10
*/

#include <iostream>

using namespace std;

int main()
{

    int dinero;
    int contador;
    cout<<"Ingrece la cantidad de dinero"<<endl;
    cin >> dinero;
    int villetes_monedas[10]{50000,20000,10000,5000,2000,1000,500,200,100,50}; // arreglo con los valores de los villetes y monedas
    for (int i=0;i<10;i++){ //ciclo for para ir tomando cada pocicion del arreglo, que corresponde a una moneda o billete

        contador=0;

        while (dinero/villetes_monedas[i]>0){ // ciclo while para saber cuantas nonedas o billetes de su serie hay
            contador = contador + 1;
            dinero=dinero-villetes_monedas[i];  // variable para ir actualizando el dinero

        }

        cout<<villetes_monedas[i]<<" = "<<contador<<endl;


    }
        if (dinero<50){ // condicional en caso de que dinero faltante para completar una moneda de 50
         cout<<"Faltante "<<dinero<<endl;
        }




    return 0;
}

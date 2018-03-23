/*
Problema 5.
Haga una función que reciba un numero entero (int) y lo convierta a cadena de caracteres.
Use parámetros por referencia para retornar la cadena.
Escriba un programa de prueba.
Ejemplo: si recibe un int con valor 123, la cadena que se retorne debe ser “123”.
*/

#include <iostream>

using namespace std;

// Prototipo de funcion (funcion que recive un entero , un puntero y no retorna ningun valor)
void cadadena_de_caracteres(int, int *);

//Prototipo de funcion para calcular la potencia de un numero
void potencia(int,int&);

int main()
{
    cout<<'"';
    int cifras=1;
    int numero=123;
    int numero1=numero;
    while (numero1/10>0) { // ciclo while para contar los digitos del numero
        numero1=numero1/10;
        cifras=cifras+1;

    }
    int array[cifras]; // arreglo para guardar la cadena de caracteres

    cadadena_de_caracteres(numero,array); // Llamado de la funcion

    for (int i=0;i<cifras;i++){ // ciclo for para imprimir la cadena de caracteres
        cout<<*(array+i);
    }
    cout<<'"'<<endl;

    return 0;
}

// Implementacion de la funcion para convertir el numero a cdena de caracteres
void cadadena_de_caracteres(int numero, int *cadena ){

    int cifras=1;
    int exponente;
    int base=1;
    int numero2=numero;

    while (numero2/10>0) {  // ciclo para calcular el el numero de digitos del numero
        numero2=numero2/10;
        cifras=cifras+1;

    }
    exponente=cifras-1;

    for (int i=0;i<cifras;i++){ // ciclo for para separar cada numero e irlo asignando al un arreglo para de esta manera convertirlo a cadena de caracteres
        potencia(exponente,base);
        exponente=exponente-1;
        cadena[i]=numero/base;
        numero=numero%base;
    }

}

// implementacion de la funcion para calcular la potencia de un numero elevado a si mismo
void potencia(int numero,int& base){
    base=1;
    for (int i=0;i<numero;i++){
        base=base*10;
    }

}

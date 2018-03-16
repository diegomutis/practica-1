// Problema 5

#include <iostream>

using namespace std;

int main()
{
    cout << "ingrece un numero impar"<<endl;
    int numero;
    int m=0;
    int a;
    cin >>numero;
    int espacios2 = numero;
    int repeticiones = (numero/2)+1;
    int repeticiones2=(numero/2);
    int espacios = numero;
    for (int i=1; i<=repeticiones; i++){ // ciclo para determinar cuantas filas se deben imprimir
        a = espacios/2;
        espacios = espacios-2;
        for (int contador =1; a>=contador;contador++){  // ciclo for para ir imprimiendo los espacios
            cout<<" ";
        }
        for (int n=0; n<(i*2-1); n++){ // ciclo for para imprimir las filas de caracteres
            cout<<"*";
            int j = n;
            if (j==numero-1){
                cout<<endl;
                    for (int i=1;i<=repeticiones2; i++){ // ciclo para imprimir las filas de caracteres inversamente y determiar cuantas filas se deben imprimir

                        m = (espacios2 /2);
                        espacios2 = espacios2-2 ;


                        for (int n =0 ;n<i;n++){ // ciclo para imprimir espacios

                            cout <<" ";
                        }

                        for(int n=0;n<(m*2-1);n++){  // siclo para imprimir los caracteres de las filas
                            cout<<"*";

                        }
                        cout << endl;
                    }

            }
        }

            cout<< endl;

        }



    cout << endl<<endl;
    return 0;
}

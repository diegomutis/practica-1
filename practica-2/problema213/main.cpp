#include <iostream>

using namespace std;
// Prototipo de funcion que recibe un puntero y retorna un int
int encontrar_estrella(int *);

int main()
{
    int estrellas;
    int *pocicion;
    int matriz[6][8]={{0,3,4,0,0,0,6,8},{5,13,6,0,0,0,2,3},{2,6,2,7,3,0,10,0},{0,0,4,15,4,1,6,0},{0,0,7,12,6,9,10,4},{5,0,6,10,6,4,8,0}}; //matriz

    pocicion=*matriz; // puntero que apunta a una pocicion de la matiz en este caso a la pocicion [0][0]

    estrellas = encontrar_estrella(pocicion); // llamado de la funcion que me retorna el numero de estrllas encontradas
    cout<<"se encontraron "<<estrellas<<" estrellas " <<endl;
    return 0;

}

// Funcion para determinar cuantas estrellas a desde la pocicion del puntero recivido en adelante
int encontrar_estrella(int * pocicion){
    int contador = 0;
    int pocicion1=*pocicion;
    int matriz[6][8]={{0,3,4,0,0,0,6,8},{5,13,6,0,0,0,2,3},{2,6,2,7,3,0,10,0},{0,0,4,15,4,1,6,0},{0,0,7,12,6,9,10,4},{5,0,6,10,6,4,8,0}};

    if (pocicion1==0){ // si el puntero apunta a la pocicion cero de array multidimencional es necesario hacer esto, ya que de lo contrario surgira un error
        pocicion1=pocicion1+1;
    }

    for (int i=1;i<5;i++){ // siclo para ir accediendo a cada pocicion de la matriz
        for (int j=1;j<7;j++){


            if ((matriz[i][j]+matriz[i][j-1]+matriz[i][j+1]+matriz[i-1][j]+matriz[i+1][j])/5 > 6){  // condicion que de ve cumplir la pacicion de la matriz para ser una estrella
                cout<<"la pocicion ["<<i<<']'<<" ["<<j<<"] " <<" = "<<matriz[i][j]<<" representa una estrella"<<endl;
                contador=contador+1;
            }
        }
    }

    return contador;
}


#include <iostream> //libreria para gestionar la entrada y salida de datos <>

#define multiplicacion(a,b) a*b //definir operaciones, valores, procesos y secuencias
#define cuadrado(a) a*a

using namespace std; // funciona para utilizar la versión actualizada de c (c++)

int main(){

    int Multiplicacion = multiplicacion(7,8);
    cout<<Multiplicacion<<"\n";
    int Cuadrado = cuadrado(3);
    cout<<Cuadrado;
    
    return 0;
}
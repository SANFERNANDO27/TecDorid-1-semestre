// Plantillas o templates

//Sacar el valor absoluto de un numero

#include <iostream> //libreria para gestionar la entrada y salida de datos <>
using namespace std; // funciona para utilizar la versión actualizada de c (c++)

//Prototipo de Funcion
template <class TIPOD>
void mostrarAbs(TIPOD numero);

int main(){
    int num1 = -4;
    float num2 = -56.67;
    double num3 = -123.8189;

    mostrarAbs(num1);
    mostrarAbs(num2);
    mostrarAbs(num3);
    
    return 0;
}

template <class TIPOD>
void mostrarAbs(TIPOD numero){
    if(numero<0){
        numero = numero * -1;
    }

    cout<<"El valor absoluto del numero es: "<<numero;
}
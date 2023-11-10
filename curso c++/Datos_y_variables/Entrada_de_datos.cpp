#include <iostream> //libreria para gestionar la entrada y salida de datos <>
#include <math.h> //libreria para agregar operaciones matematicas
#include <iomanip> //libreria para ajustar la precisión de decimales

using namespace std; // funciona para utilizar la versión actualizada de c (c++)

int main(){

    //Variables
    float peso = 0;
    float altura = 0;
    float resultado = 0;

    cout<<"Calculadora de IMC\n"; //salida de datos
    cout<<"Ingrese su peso en kg\n";
    cin>>peso; //entrada de datos
    cout<<"Ingrese su altura en metros\n";
    cin>>altura; //entrada de datos

    //resultado
    resultado = peso / pow(altura, 2);
    cout<<"Su IMC es: "<<setprecision(4)<<resultado;

    return 0;
}
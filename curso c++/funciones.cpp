#include <iostream> //libreria para gestionar la entrada y salida de datos <>

using namespace std; // funciona para utilizar la versión actualizada de c (c++)

void mensaje(string a = "Hola mundo"); //valores propios de una funcion por defecto
void suma(int a = 10); // para asignar un valor por defecto a una variable, se toma el indice de esta para asignarlo, NO su nombre

int main(){

    mensaje(); // mandar a llamar una funcion sin ningun parametro
    mensaje("Esto es una funcion");

    suma();

    return 0;
}

void mensaje(string b){
    cout<<b<<"\n";

}

void suma(int b){
    
    cout<<b*5<<"\n";
}
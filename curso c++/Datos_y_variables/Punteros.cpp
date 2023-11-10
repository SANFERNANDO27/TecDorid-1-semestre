#include <iostream>

using namespace std;

int main() {
    int num,*dir_num;

    num = 20;
    dir_num = &num; //'&' nos sirve para acceder a la dirección de una variable

    //'*' nos sirve para acceder al valor dentro de la dirección asignada, es importante definir a la variable con un '*' 
    //para indicar que es una referencia
    cout<<"Numero: "<<*dir_num<<endl; // se utiliza '*' para acceder al valor
    //los punteros nos ayudan a saber la dirección donde se esta guardando una variable
    cout<<"Direccion del numero: "<<dir_num<<endl;

    return 0;
}
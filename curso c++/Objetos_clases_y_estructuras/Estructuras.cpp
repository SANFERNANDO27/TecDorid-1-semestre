#include <iostream> //libreria para gestionar la entrada y salida de datos <>

using namespace std; // funciona para utilizar la versión actualizada de c (c++)

//declarar una estructura
struct pokemon{

    //variables 
    char nombre[50];
    char tipo[50];
    float peso;
    char genero;
}pokemon1;

int main(){

    cout<<"Ingrese el nombre de su pokemon"<<"\n";
    cin.getline(pokemon1.nombre,50,'\n');

    cout<<"Ingrese el tipo de su pokemon"<<"\n";
    cin.getline(pokemon1.tipo,50,'\n');

    cout<<"Ingrese el peso de su pokemon"<<"\n";
    cin>>pokemon1.peso;

    cout<<"Ingrese el genero de su pokemon"<<"\n";
    cin>>pokemon1.genero;

    cout<<"Nombre: "<<pokemon1.nombre<<"\n";
    cout<<"tipo: "<<pokemon1.tipo<<"\n";
    cout<<"peso: "<<pokemon1.peso<<"\n";
    cout<<"genero: "<<pokemon1.genero<<"\n";

    return 0;
}
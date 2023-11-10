#include <iostream> //libreria para gestionar la entrada y salida de datos <>

 //Declarar constantes
 #define PI 3.1416

using namespace std; // funciona para utilizar la versión actualizada de c (c++)

int main(){

    float altura = 1.70;
    cout<<altura<<"\n";
    altura = 1.75;
    cout<<altura<<"\n";

    const float GRAVEDAD = 9.8;
    cout<<GRAVEDAD<<"\n";
    cout<<PI<<"\n";

    return 0;
}
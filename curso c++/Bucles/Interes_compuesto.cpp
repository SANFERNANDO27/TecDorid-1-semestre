#include <iostream> //libreria para gestionar la entrada y salida de datos <>
#include <clocale> //libreria para establecer el idioma de la consola

using namespace std; // funciona para utilizar la versión actualizada de c (c++)

int main(){
    setlocale(LC_CTYPE, "Spanish");

    int tazaInicial, años, añosTotales, interes, ganancia;

    cout<<"Ingrese la taza inicial\n";
    cin>>tazaInicial;
    cout<<"Ingrese el numero de años\n";
    cin>>años;
    cout<<"Ingrese la taza de interes\n";
    cin>>interes;

    añosTotales = años;

    while (años > 0)
    {
        tazaInicial += tazaInicial * interes / 100;
        años--;
        
    }

    ganancia = tazaInicial;

    cout<<"En: "<<añosTotales<<"años, tendras: $"<<ganancia;
    

}
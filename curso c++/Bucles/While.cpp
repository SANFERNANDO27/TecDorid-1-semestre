#include <iostream> //libreria para gestionar la entrada y salida de datos <>

using namespace std; // funciona para utilizar la versión actualizada de c (c++)

int main(){
    
    int a = 0;

    cout<<"Ingrese un numero mayor a 10\n";
    cin>>a;

    while(a < 10){
        cout<<a<<"INGRESA UN NUMERO MAYOR A 10\n";
        cin>>a;
    }

    return 0;
}
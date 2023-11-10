#include <iostream> //libreria para gestionar la entrada y salida de datos <>

using namespace std; // funciona para utilizar la versión actualizada de c (c++)

int main(){

    int horas;
    cout<<"Por favor ingresa cuantas horas trabajaste";
    cin>>horas;

    if(horas < 5){
        cout<<"Tu ganancia es de 10 Dolares";

    }else if (horas > 5 && horas < 11)
    {
         cout<<"Tu ganancia es de 20 Dolares";
    }else if(horas > 10){
         cout<<"Tu ganancia es de 30 Dolares";
    }
    
    return 0;
}
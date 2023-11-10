#include <iostream> //libreria para gestionar la entrada y salida de datos <>

using namespace std; // funciona para utilizar la versión actualizada de c (c++)

int main(){

    int numero[] ={4, 5, 6, 7, 10, 11};

    for(int i = 0; i <= 5; i++){
        cout<<numero[i]<<"\n";
    }

    int prueba[4], a;
    
    for (int i = 0; i < 5; i++)
    {
        cout<<"Ingresa un dato"<<"\n";
        cin>>a;
        prueba[i] = a;
    }

    for(int i = 0; i < 5; i++){
        cout<<prueba[i]<<"\n";
    }
    
    return 0;
}
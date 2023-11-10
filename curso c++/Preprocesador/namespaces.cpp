#include <iostream> //libreria para gestionar la entrada y salida de datos <>
namespace MiNamespace {
    int valor = 42;
    void Saludar() {
        std::cout<<"Estoy accediendo a esto desde un name space";
    }
}


int main(){

    std::cout<< "Valor en MiNamespace "<<MiNamespace::valor<<"\n";
    MiNamespace::Saludar();

    return 0;
}


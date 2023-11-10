#include <iostream> //libreria para gestionar la entrada y salida de datos <>

using namespace std; // funciona para utilizar la versión actualizada de c (c++)

//declarar clases
class Pokemon{
    //atributos, siempre necesitan tener un nivel de seguridad
    public:
        string nombre;
        float peso;
    //metodos y constructor
    public:
        Pokemon(string, float);
        void Saludo();
};

Pokemon::Pokemon(string _nombre, float _peso){
    nombre = _nombre;
    peso = _peso;
}

void Pokemon::Saludo(){
    cout<<"El pokemon que te saluda es: "<<nombre<<" y el pesa "<<peso<<" kilogramos\n";
}

int main(){

    Pokemon pokemon1 = Pokemon("Pikachu", 3.5);
    pokemon1.Saludo();

    Pokemon pokemon2("Charmander", 0.90);
    pokemon2.Saludo();

    return 0;
}
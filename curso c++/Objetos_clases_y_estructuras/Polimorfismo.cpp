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

//Clase hija
class Pokemons_Fuego : public Pokemon{
    public:
        int vida;
        char genero;
    public:
        Pokemons_Fuego(string, float, int, char);
        void Saludo();
};

Pokemons_Fuego::Pokemons_Fuego(string _nombre, float _peso, int _vida, char _genero) : Pokemon(_nombre, _peso){
    vida = _vida;
    genero = _genero;
}

void Pokemons_Fuego::Saludo(){
    Pokemon::Saludo(); //Poliformismo
    cout<<"El pokemon tiene: "<<vida<<" puntos de vida y su genero es: "<<genero<<"\n";
}

int main(){

    Pokemons_Fuego pokemon1("Charmander", 0.90, 100, 'F');
    pokemon1.Saludo();

    return 0;
}
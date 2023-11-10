#include <iostream> //libreria para gestionar la entrada y salida de datos <>
#include <random>
#include <thread>
#include <chrono>

using namespace std; // funciona para utilizar la versión actualizada de c (c++)

void Delay(int delay){
    // Delay
    this_thread::sleep_for(chrono::milliseconds(delay));
}

//declarar clases
class Pokemon{
    //atributos, siempre necesitan tener un nivel de seguridad
    public:
        string nombre;
        float daño;
        int vida;
    //metodos y constructorD
    public:
        Pokemon(string, float, int);
        void Info();
        void setVida(int x);
};

Pokemon::Pokemon(string _nombre, float _daño, int _vida){
    nombre = _nombre;
    daño = _daño;
    vida = _vida;
}

void Pokemon::Info(){
    cout<<nombre<<" tiene: "<<vida<<" puntos de vida y hace: "<<daño<<" de daño\n";
}

//Clase hija
class Pokemons_Fuego : public Pokemon{
    public:
        char genero;
        string habilidad1[3];
        string habilidad2[3];
        string habilidad3[3];
    public:
        Pokemons_Fuego(string, float, int, char, string[3], string[3], string[3]);
        void Info();
        void UsarHabilidad(Pokemon& pokemon);
        void UsarHabilidadAleatoria(Pokemon& pokemon);

};

Pokemons_Fuego::Pokemons_Fuego(string _nombre, float _daño, int _vida, char _genero, string _habilidad1[3], string _habilidad2[3], string _habilidad3[3]) : Pokemon(_nombre, _daño, _vida){
    genero = _genero;
    
    for (int i = 0; i < 3; i++)
    {
        habilidad1[i] = _habilidad1[i];
    }
    for (int i = 0; i < 3; i++)
    {
        habilidad2[i] = _habilidad2[i];
    }
    for (int i = 0; i < 3; i++)
    {
        habilidad3[i] = _habilidad3[i];
    }
    

}

void Pokemons_Fuego::Info(){
    Pokemon::Info(); //Poliformismo
    cout<<"Sus habilidades son: \n 1: "<<habilidad1[0]<<" "<<habilidad1[2]<<"\n 2: "<<habilidad2[0]<<" "<<habilidad2[2]<<"\n 3: "<<habilidad3[0]<<" "<<habilidad3[2]<<endl;
}

void Pokemons_Fuego::UsarHabilidad(Pokemon& pokemon){
    int mana = 100;
    while (mana >= stoi(habilidad1[2]) || mana >= stoi(habilidad2[2]) || mana >= stoi(habilidad3[2]) )
    {
        int indice, daño = 0;

        cout<<"Selecciona una habilidad por su indice: \n";
        cout<<"mana de "<<nombre<<": "<<mana<<endl;

        //mostrar habilidades por segunda ocasión en el bucle
        if (mana < 100)
        {
            cout<<"Sus habilidades son: \n 1: "<<habilidad1[0]<<" "<<habilidad1[2]<<"\n 2: "<<habilidad2[0]<<" "<<habilidad2[2]<<"\n 3: "<<habilidad3[0]<<" "<<habilidad3[2]<<endl;
        }
        
        cin>>indice;

        switch (indice)
        {
        case 1:
            if (mana >= stoi(habilidad1[2]))
            {
                cout<<nombre<<" ha utilizado: "<<habilidad1[0]<<endl;
                daño = stoi(habilidad1[1]);
                mana -= stoi(habilidad1[2]);
                pokemon.vida -= daño;
                cout<<pokemon.nombre<<" ha perdido: "<<daño<<" puntos de vida"<<endl;
            }else{
                cout<<"no tienes suficiente mana, selecciona otra habilidad";
            }
            break;
        case 2:
            if (mana >= stoi(habilidad2[2]))
            {
                cout<<nombre<<" ha utilizado: "<<habilidad2[0]<<endl;
                daño = stoi(habilidad2[1]);
                mana -= stoi(habilidad2[2]);
                pokemon.vida -= daño;
                cout<<pokemon.nombre<<" ha perdido: "<<daño<<" puntos de vida"<<endl;
            }else{
                cout<<"no tienes suficiente mana, selecciona otra habilidad";
            }
            break;
        case 3:
            if (mana >= stoi(habilidad3[2]))
            {
                cout<<nombre<<" ha utilizado: "<<habilidad3[0]<<endl;
                daño = stoi(habilidad3[1]);
                mana -= stoi(habilidad3[2]);
                pokemon.vida -= daño;
                cout<<pokemon.nombre<<" ha perdido: "<<daño<<" puntos de vida"<<endl;
            }else{
                cout<<"no tienes suficiente mana, selecciona otra habilidad"<<endl;
            }
            break;
        
        default:
            cout<<"Introduce un indice valido \n";
            break;
        }

        Delay(500);
    }
}
void Pokemons_Fuego::UsarHabilidadAleatoria(Pokemon& pokemon){

    int mana = 100;
    while (mana >= stoi(habilidad1[2]) || mana >= stoi(habilidad2[2]) || mana >= stoi(habilidad3[2]) )
    {
        int indice, daño = 0;

        cout<<"mana de "<<nombre<<": "<<mana<<endl;
        if (mana < 100)
        {
            cout<<"Sus habilidades son: \n 1: "<<habilidad1[0]<<" "<<habilidad1[2]<<"\n 2: "<<habilidad2[0]<<" "<<habilidad2[2]<<"\n 3: "<<habilidad3[0]<<" "<<habilidad3[2]<<endl;
        }

        //crear un numero aleatorio
        random_device rd;  // Dispositivo de generación de números aleatorios
        mt19937 generator(rd());  // Generador Mersenne Twister de 32 bits
        uniform_int_distribution<int> distribution(1, 3);

        indice = distribution(generator);

        switch (indice)
        {
        case 1:
            if (mana >= stoi(habilidad1[2]))
            {
                cout<<nombre<<" ha utilizado: "<<habilidad1[0]<<endl;
                daño = stoi(habilidad1[1]);
                mana -= stoi(habilidad1[2]);
                pokemon.vida -= daño;
                cout<<pokemon.nombre<<" ha perdido: "<<daño<<" puntos de vida"<<endl;
            }
            break;
        case 2:
            if (mana >= stoi(habilidad2[2]))
            {
                cout<<nombre<<" ha utilizado: "<<habilidad2[0]<<endl;
                daño = stoi(habilidad2[1]);
                mana -= stoi(habilidad2[2]);
                pokemon.vida -= daño;
                cout<<pokemon.nombre<<" ha perdido: "<<daño<<" puntos de vida"<<endl;
            }
            break;
        case 3:
            if (mana >= stoi(habilidad3[2]))
            {
                cout<<nombre<<" ha utilizado: "<<habilidad3[0]<<endl;
                daño = stoi(habilidad3[1]);
                mana -= stoi(habilidad3[2]);
                pokemon.vida -= daño;
                cout<<pokemon.nombre<<" ha perdido: "<<daño<<" puntos de vida"<<endl;
            }
            break;
        
        default:
            cout<<"Introduce un indice valido \n";
            break;
        }

        Delay(500);
    }
}
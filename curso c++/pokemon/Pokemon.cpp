#include "header.h"

int main(){

    string habilidad1[3] = {"ataque rapido", "20", "30"};
    string habilidad2[3] = {"ataque poderoso", "50", "60"};
    string habilidad3[3] = {"bola de fuego", "60", "100"};

    Pokemons_Fuego pokemon1("Charmander", 50, 100, 'F', habilidad1, habilidad2, habilidad3);
    Pokemons_Fuego pokemon2("Charizard", 50, 100, 'F', habilidad1, habilidad2, habilidad3);

    // batalla

    cout<<"Batalla pokemon \n";
    cout<<"Pokemones: \n";
    pokemon1.Info();
    pokemon2.Info();

    while (pokemon1.vida > 0 || pokemon2.vida > 0)
    {
        cout<<"Es tu turno: \n";
        Delay(1000);
        pokemon1.Info();
        pokemon1.UsarHabilidad(pokemon2);
        if (pokemon2.vida <= 0)
        {
            cout<<pokemon1.nombre<<" Ha ganado";
            break;
        }
        
        Delay(1000);
        cout<<"Turno del enemigo: \n";
        Delay(1000);
        pokemon2.Info();
        pokemon2.UsarHabilidadAleatoria(pokemon1);
        if (pokemon1.vida <= 0)
        {
            cout<<pokemon2.nombre<<" Ha ganado";
            break;
        }
        Delay(1000);
    }
    

    return 0;
}
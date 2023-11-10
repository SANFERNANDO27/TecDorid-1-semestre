#include <iostream>

using namespace std;

// structure
struct tiger{

    // variables 
    string name;
    string gender;
    string sound = "roar";
    float size;
    float weight;

    void print_animal_sound(){
    cout<<sound<<endl;
}
};

void tigerBuilder(tiger& tiger, string _name, string _gender, float _size, float _weight){
    tiger.name = _name;
    tiger.gender = _gender;
    tiger.size = _size;
    tiger.weight = _weight;
}

int main(){

    tiger tiger1;
    tigerBuilder(tiger1, "tiger", "male", 1.8, 200);

    tiger1.print_animal_sound();

    return 0;
}
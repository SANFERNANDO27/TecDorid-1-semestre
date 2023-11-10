#include <iostream>
#include <cmath>
#define square(a) a*a

using namespace std;

int main(){
    float wheel1[2] = {2, 1};
    float wheel2[2] = {4, 1};
    float ICC[2] = {3.5, 2};

    float R = sqrt((square((ICC[0] - (wheel1[0] + wheel2[0]) / 2)) + square((ICC[1] - (wheel1[1] + wheel2[1]) / 2))));
    float L = 0.5;
    float w = 2;
    float rv = w * (R + L/2);
    cout<<"R1 is: "<<R<<endl;
    cout<<"rv is: "<<rv<<endl;

    return 0;
}
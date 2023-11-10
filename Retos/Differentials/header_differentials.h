#include <iostream>
#include <cmath>
#define square(a) a*a

using namespace std;

//!!!! All the points are define by an array, the first value [1] is x, and the second [2] y !!!!
class Car{
    public:
        float w;
        float ICC[2];
        float wheel1[2];
        float wheel2[2];
        float R;
        float L;
    public:
        Car(float, float[2], float[2], float[2]);
        void getVelocity();
        void getPositionAtTime(float, float, float, float, int);

};

Car::Car(float _w, float _ICC[2], float _wheel1[2], float _wheel2[2]){

    //define w
    w = _w;

    // non-absolute distance between the ICC and the wheels’ midpoint
    
    for (size_t i = 0; i < 2; i++)
    {
        ICC[i] = _ICC[i];
    }

    //define wheels poins
    for (size_t i = 0; i < 2; i++)
    {
        wheel1[i] = _wheel1[i];
    }
    for (size_t i = 0; i < 2; i++)
    {
        wheel2[i] = _wheel2[i];
    }

    //define R
    float midpointX = (wheel1[0] + wheel2[0]) / 2;
    float midpointY = (wheel1[1] + wheel2[1]) /2;

    // Distancia = √((x2 - x1)² + (y2 - y1)²)
    R = sqrt((square((ICC[0] - midpointX)) + square((ICC[1] - midpointY))));
    cout<<"R is: "<<R<<endl;
    
    //define track width
    L = sqrt((square((wheel2[0] - wheel1[0])) + square((wheel2[1] - wheel1[1]))));
    cout<<"L is: "<<L<<endl;
    
}

void Car::getVelocity(){
    float VL = w * (R + L/2);
    float VR = w * (R - L/2);
    cout<<"The left velocity is: "<<VL<<"\nThe right velocity is: "<<VR<<endl;

}

void Car::getPositionAtTime(float robotX, float robotY, float t, float timeStep, int O){
    float x = (cos((w*timeStep*t))*(robotX - ICC[0]) - sin((w*timeStep*t)) * (robotY - ICC[1]) + ICC[0]);
    float y = (sin((w*timeStep*t))*(robotX - ICC[0]) + cos((w*timeStep*t)) * (robotY - ICC[1]) + ICC[1]);
    float theta = O + w*timeStep*t;

    cout<<"The new robot position at time: "<<t<<" it going to be: ["<<x<<","<<y<<"] and their angular oriantation will be: "<<theta<<endl;

}
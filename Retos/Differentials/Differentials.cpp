#include "header_differentials.h"

int main(){

    float ICCx, ICCy, w1x, w1y, w2x, w2y,w;
    // ICC values
    cout<<"Please, define the ICC's x and y point"<<endl;
    cin>>ICCx>>ICCy;

    // wheels values
    cout<<"Please, define the Wheel 1's x and y point"<<endl;
    cin>>w1x>>w1y;

    //wheel 2
    cout<<"Please, define the Wheel 2's x and y point"<<endl;
    cin>>w2x>>w2y;

    // w value
    cout<<"Please, define the w value"<<endl;
    cin>>w;

    float ICC[2] = {ICCx, ICCy};
    float wheel1[2] = {w1x, w1y};
    float wheel2[2] = {w2x, w2y};

    //create a new car
    Car car(w, ICC, wheel1, wheel2);

    // !!!! final result !!!!
    car.getVelocity();

    // Extra task
    float robotX, robotY, t, timeStep, theta;
    cout<<"Now for the robot position at time t you need to provide this new variables: robot position x, robot position y, time t, time step and tetha (angle)"<<endl;
    cin>>robotX>>robotY>>t>>timeStep>>theta;

    car.getPositionAtTime(robotX,robotY,t,timeStep,theta);

    return 0;
}
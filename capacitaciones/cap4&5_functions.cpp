#include <iostream>
#include <cmath>

using namespace std;

// functions

void meow() {
    cout<<"meow"<<endl;
}

int square(int x){
    return x*x;
}

float exponetials(float value, int exponent) {
    float x = 1;
    for (int i = 0; i < exponent; i++)
    {
        x *= value;
    }
    
    return x;
}

double compoundInterest(float initialCapital, float interestRate, float period){
    interestRate = interestRate / 100;
    double finalCapital = initialCapital * exponetials((1 + interestRate), period);

    return finalCapital;
}

int main(){
    float IC, IR, PT;

    meow();
    cout<<square(4)<<endl;
    cout<<sqrt(16)<<endl;
    cout<<exponetials(3,3)<<endl;
    cout<<"Welcome to the compound interest calculator, enter the initial capital, interest rate and period of time"<<endl;
    cin>>IC;
    cin>>IR;
    cin>>PT;
    cout<<compoundInterest(IC,IR,PT)<<endl;
}
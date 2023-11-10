#include <iostream> //libreria para gestionar la entrada y salida de datos <>

using namespace std; // funciona para utilizar la versión actualizada de c (c++)

int main(){

    int num1, num2;
    char operacion;
    float resultado;

    cout<<"Ingrese el primer numero\n";
    cin>>num1;
    cout<<"Ingrese la operacion +-*/ \n";
    cin>>operacion;
    cout<<"Ingrese el segundo numero\n";
    cin>>num2;
    
    switch (operacion)
    {
    case '+':
        resultado = num1 + num2;
        break;

    case '-':
        resultado = num1 - num2;
        break;
    
    case '/':
        resultado = num1 / num2;
        break;
    
    case '*':
        resultado = num1 * num2;
        break;
    
    default:
        cout<<"Ingrese una operación valida\n";
        break;
    }

    cout<<"El resultado es: "<<resultado;

    return 0;
}
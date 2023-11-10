#include <iostream>

using namespace std;


int main(){

    int nc;
    int n[nc];
    cout<<"Number count?"<<endl;
    cin>>nc;
    cout<<"Numbers?"<<endl;
    for (int i = 0; i < nc; i++)
    {
        cin>>n[i];
    }
    
    for (int i = 0; i < nc; i++)
    {
        if (n[i] % 3 == 0 && n[i] % 5 == 0)
        {
            cout<<"FizzBuzz ";
        }else if(n[i] % 3 == 0){
            cout<<"fizz ";
        }else if(n[i] % 5 == 0){
            cout<<"buzz ";
        }else{
            cout<<n[i]<<" ";
        }
        
    }
    
    return 0;
}
#include <iostream>

using namespace std;

int main(){

    // loop for
    for (int i = 0; i < 5; i++)
    {

        string x = "Hello world";
        cout<<i<<endl;
        cout<<x<<endl;

    }
    // loop while
    string y = "";
    while (y != "continue")
    {
        cout<<"you are in a loop"<<endl;
        cin>>y;
    }
    cout<<"you are not in a loop any more"<<endl;  

    // loop do while
    string z = "";
    do
    {
        cout<<"you are in a loop that always run's once, do you want to finish it? y/n"<<endl;
        cin>>z;

    } while (z != "y");
    cout<<"you are not in a loop any more"<<endl;

    // arrays
    string animals[] = {"dog", "cat", "duck", "mouse"};
    cout<<animals[0]<<endl;

    // for each

    for (int i = 0; i < sizeof(animals) / sizeof(animals[0]); i++)
    {
        cout<<animals[i]<<endl;
        
    }
    

}
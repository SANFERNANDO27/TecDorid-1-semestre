#include <iostream>

using namespace std;

int fibonacci(int position){
    int x = 0;
    int z = 0;
    int y = 1;
    if (position == 0)
    {
        return 0;
    }
    for (int i = 1; i < position; i++)
        {
            z = y;
            y += x;
            x = z;
        }
     
    return y;
}

int main(){
    while (true)
    {
        int position;
        cout<<"Which position of the sequence do you want?"<<endl;
        cin>>position;
        cout<<"fib("<<position<<") = "<<fibonacci(position)<<endl;
    }
    
    return 0;
}
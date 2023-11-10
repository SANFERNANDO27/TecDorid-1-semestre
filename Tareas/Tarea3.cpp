#include <iostream>

using namespace std;


// create the estandar container function
string createContainer(int liters){
        string container = "[]";
        char space = ' ';
        container.insert(1, liters, space);
        return container;

    }

void printContainer(int containerAmount, string container[]){
        for (int i = 0; i < containerAmount; i++)
        {
            cout<<container[i]<<endl;
        }
} 

void addLiters(int liters, int indexContainer, string array[], int litersRatePerContainer[], int maxLiters){
    char liter = '#';
    indexContainer -= 1;
    if (liters >  maxLiters - litersRatePerContainer[indexContainer])
    {
        cout<<"the container is full or the quantity is very large"<<endl;
    }else{
        litersRatePerContainer[indexContainer] += liters;
        array[indexContainer].erase(1, litersRatePerContainer[indexContainer]);
        array[indexContainer].insert(1, litersRatePerContainer[indexContainer], liter);
    }
}
void removeLiters(int lessLiter, int indexContainer, string array[], int litersRatePerContainer[], int maxLiters){
    char space = ' ';
    indexContainer -= 1;
    if (lessLiter >  litersRatePerContainer[indexContainer])
    {
        cout<<"the container is empty or the quantity is very large"<<endl;
    }else{
        // errase all the liters
        array[indexContainer].erase(1, maxLiters);
        // remove the want liters
        litersRatePerContainer[indexContainer] -= lessLiter;
        // insertthe total liters
        array[indexContainer].insert(1, litersRatePerContainer[indexContainer], '#');
        // add spaces
        array[indexContainer].insert((litersRatePerContainer[indexContainer] + 1), (maxLiters - litersRatePerContainer[indexContainer]), space);

    }
}

void transferLiters(int litersAmount, int indexFatherContainer, int indexSonContainer, string array[], int litersRatePerContainer[], int maxLiters){
    char space = ' ';
    char liter = '#';
    indexFatherContainer -= 1;
    indexSonContainer -= 1;
    if (litersAmount >  litersRatePerContainer[indexFatherContainer])
    {
        cout<<"the father container is empty or the quantity is very large"<<endl;
    }else if (litersAmount >  maxLiters - litersRatePerContainer[indexSonContainer])
    {
        cout<<"the son container is full or the quantity is very large"<<endl;
    }
    else{
        // !!!! Errase the liters of the father !!!!

        // errase all the liters
        array[indexFatherContainer].erase(1, maxLiters);
        // remove the want liters
        litersRatePerContainer[indexFatherContainer] -= litersAmount;
        // insert the total liters
        array[indexFatherContainer].insert(1, litersRatePerContainer[indexFatherContainer], '#');
        // add spaces
        array[indexFatherContainer].insert((litersRatePerContainer[indexFatherContainer] + 1), (maxLiters - litersRatePerContainer[indexFatherContainer]), space);

        // !!!! Add the liters to the son !!!!

        litersRatePerContainer[indexSonContainer] += litersAmount;
        array[indexSonContainer].erase(1, litersRatePerContainer[indexSonContainer]);
        array[indexSonContainer].insert(1, litersRatePerContainer[indexSonContainer], liter);

    }
}

int main(){

        int containerAmount, liters;
        cout<<"Container Amount: "<<endl;
        cin>>containerAmount;
        cout<<"Max. Liters: "<<endl;
        cin>>liters;

        //create all the containers
        string userContainers[containerAmount];  
        int litersRatePerContainer[containerAmount];  
        for (int i = 0; i < containerAmount; i++)
        {
            // create one container
            userContainers[i] = createContainer(liters);
            litersRatePerContainer[i] = 0;
        }

        // Program Bucle
        while (true)
        {
            string instruction;
            cin>>instruction;

            // print container
            if (instruction == "print")
            {
                printContainer(containerAmount, userContainers);
            }else if (instruction == "add")
            {
                // get the number of new liters and the index of the container to give it the,
                int newLiters, containerIndex;
                string to;
                cin>>newLiters>>to>>containerIndex;
                addLiters(newLiters, containerIndex, userContainers, litersRatePerContainer, liters);
            }else if (instruction == "remove")
            {
                // get the number of new liters and the index of the container to give it the,
                int lessLiters, containerIndex;
                string to;
                cin>>lessLiters>>to>>containerIndex;
                removeLiters(lessLiters, containerIndex, userContainers, litersRatePerContainer, liters);
            }else if (instruction == "transfer")
            {
                // get the number of new liters and the index of the container to give it the,
                int litersAmount, indexFatherContainer, indexSonContainer;
                string to, from;
                cin>>litersAmount>>from>>indexFatherContainer>>to>>indexSonContainer;
                transferLiters(litersAmount, indexFatherContainer, indexSonContainer, userContainers, litersRatePerContainer, liters);
            }
            else{
                cout<<"Enter an existing command:\n 1: print\n 2: add (want liters) to (container index)\n 3: remove (want liters) to (container index)"<<endl;
                cout<<" 4: transfer (want liters) from (father container index) to (son container index)"<<endl;
            }
        }

    return 0;
}
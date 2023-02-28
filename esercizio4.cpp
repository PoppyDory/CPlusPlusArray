//Scrivi una funzione che prenda in input un array di interi e la sua lunghezza 
//e restituisca l'elemento più grande dell'array.
#include <iostream>
#include <array>

using namespace std;

int main()
{
    int array[4]= {4,2,3,6};
    int dimensione = sizeof(array) / sizeof(array[0]);
    int maggiore=0;
    
    for(int i=0; i<dimensione; i++)
    {
        if (array[i]<array[i+1])
        {
            maggiore=array[i+1];
        }

    }
    cout<< maggiore;
}
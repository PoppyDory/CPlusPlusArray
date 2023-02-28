//Scrivi una funzione che prenda in input un array di interi e la sua lunghezza 
//e restituisca la somma di tutti gli elementi dell'array

#include <iostream>
#include <array>

using namespace std;

int arraySomma (int array[], int dimensione)
{   
    int somma=0;
    for (int i=0; i<dimensione; i++)
    {
        somma+=array[i];
    }
    return somma;
}

int main()
{
    int array[4]= {1,3,5,1};
    int dimensione = sizeof(array) / sizeof(array[0]);
    
    cout<< "la somma e' "<< arraySomma(array,dimensione);
}
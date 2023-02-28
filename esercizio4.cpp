// Scrivi una funzione che prenda in input un array di interi e la sua lunghezza
// e restituisca l'elemento più grande dell'array.
#include <iostream>
#include <array>

using namespace std;

int arrayMaggiore(int array[], int dimensione)
{
    int maggiore = array[0];
    for (int i = 0; i < dimensione; i++)
    {
        if (array[i] > maggiore)
        {
            maggiore = array[i];
        }
    }
    return maggiore;
}

int main()
{
    int array[4] = {8, 2, 7, 6};
    int dimensione = sizeof(array) / sizeof(array[0]);

    cout << "Il numero piu' grande e': "<< arrayMaggiore(array,dimensione);
}
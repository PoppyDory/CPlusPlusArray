// Scrivi una funzione che prenda in input un array di interi e la sua lunghezza e
// restituisca true se l'array è ordinato in ordine crescente e false altrimenti.
#include <iostream>
#include <array>

using namespace std;

bool arrayOrdinato(int array[], int dimensione)
{
    bool ordinato=false;
    for (int i = 0; i < dimensione; i++)
    {
        if (array[i] > array[i + 1])
        {
            return false;
            break;
        }
        else 
        {
            return true;
        }
    }
    return ordinato;
}

int main()
{
    int array[4] = {1, 2, 3, 6};
    int dimensione = sizeof(array) / sizeof(array[0]);

    if (arrayOrdinato(array, dimensione)==0)
    {
        cout<< "l'array non e' ordinato ";
    }
    else
    {
        cout<< " l'array e' ordinato ";
    }
}

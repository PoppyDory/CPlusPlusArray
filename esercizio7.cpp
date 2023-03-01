// Scrivi una funzione che prenda in input un array di interi e la sua lunghezza
// e restituisca il numero di sequenze di interi crescenti all'interno dell'array.
// Ad esempio, se l'array di input è {1, 2, 3, 5, 4, 7},
// la funzione dovrebbe restituire 2 perché ci sono due sequenze crescenti: {1, 2, 3} e {4, 7}.

#include <iostream>
#include <array>

using namespace std;

int arraySequenze(int array[], int dimensione)
{
    int sequenza = 0;

    for (int i = 0; i < dimensione-1; i++)
    {
        if (array[i] < array[i + 1]) //&& i != dimensione - 1)
        {
            while (array[i] < array[i + 1])
            {
                i++;
            }
            sequenza++;
        }
    }
    return sequenza;
}

int main()
{
    int dimensione;
    cout << "Quanti elementi deve contenere l'array?" << endl;
    cin >> dimensione;
    int array[dimensione];
    cout << "inserisci numeri " << endl;
    for (int i = 0; i < dimensione; i++)
    {
        cin >> array[i];
    }

    cout << "Nell' array ci sono " << arraySequenze(array, dimensione) << " sequenze";
}
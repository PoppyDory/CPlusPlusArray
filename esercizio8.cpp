/*Scrivi una funzione che prenda in input un array di interi e la sua lunghezza
e restituisca l'indice dell'elemento che ha il valore massimo all'interno dell'array.
Se ci sono più elementi con lo stesso valore massimo,
la funzione dovrebbe restituire l'indice del primo di questi elementi
*/
#include <iostream>
#include <array>

using namespace std;
int arrayIndice(int array[], int dimensione)
{
    int indice = 0;
    int maggiore = array[0];
    for (int i = 1; i < dimensione; i++)
    {
        if (array[i] > maggiore)
        {
            maggiore = array[i];
            indice = i;
        }
    }
    return indice;
}

int main()
{
    cout << "Quanto lo vuoi lungo l'array?" << endl;
    int lungo;
    cin >> lungo;
    int array[lungo];
    cout << "inserisci numeri " << endl;
    for (int i = 0; i < lungo; i++)
    {
        cin >> array[i];
    }
    cout << "L'indice dell'elemento maggiore e': " << arrayIndice(array, lungo);
}
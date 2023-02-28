// Scrivi nel main un algoritmo che su un array,
// calcola e restituisce un nuovo array
// che contenga solo gli elementi dell'array di input che sono pari
#include <iostream>
#include <array>

using namespace std;

int main()
{
    int array[3] = {3, 2, 4};
    int dimensione = sizeof(array) / sizeof(array[0]);
    int arrayPari[2];
    int dimPari = sizeof(arrayPari) / sizeof(arrayPari[0]);

    int pari = 0;
    for (int i = 0; i < dimensione; i++)
    {
        for (int j = 0; j < dimPari; j++)
        {
            if (array[i] % 2 == 1)
            {

                pari = array[i] ;
            }
        }
    } 
   cout << arrayPari[pari] << endl;
}

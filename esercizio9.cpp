/*Scrivi una funzione che prenda in input due array di interi e le loro lunghezze
e restituisca il numero di elementi comuni ai due array.
Ad esempio, se gli array di input sono {1, 2, 3, 4} e {2, 4, 6, 8},
la funzione dovrebbe restituire 2 perché ci sono due elementi comuni: 2 e 4
*/
#include <iostream>
#include <array>

using namespace std;

int arrayContaUguali(int array1[], int array2[], int dimensione1, int dimensione2)
{
    int uguali = 0;

    for (int i = 0; i < dimensione1; i++)
    {
        for (int j = 0; j < dimensione2; j++)
        {
            if (array1[i] == array2[j])
            {
                uguali++;
            }
        }
    }
    return uguali;
}

int main()
{
    int array1[4] = {1, 2, 3, 4};
    int array2[4] = {2, 4, 6, 8};
    

    int dimensione1 = sizeof(array1) / sizeof(array1[0]);
    int dimensione2 = sizeof(array2) / sizeof(array2[0]);

    cout << arrayContaUguali(array1, array2, dimensione1, dimensione2);
}

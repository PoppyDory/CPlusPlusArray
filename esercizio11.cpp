/*Crea due array di due dimensioni diverse, riempili con numeri consecutivi.
Crea e poi stampa a schermo i due array concatenati
Array1 [0,1,2,3,4]
Array2 [0,1,2]
ArrayRisultato [0,1,2,3,4,0,1,2]
*/
#include <iostream>

using namespace std;

int* concatena(int array1[], int array2[], int dimensione1, int dimensione2 )
{
    int dimensione = dimensione1 + dimensione2;
    int arrayRisultato[dimensione];
    int k=0;    //indice scrittura di arrayRisultato
    for (int i = 0; i < dimensione1; i++)
    {
        arrayRisultato[k] = array1[i];
        k++;
    }
    for (int i = 0; i < dimensione2; i++)
    {
        arrayRisultato[k] = array2[i]; // k continuada dove è arrivato nbel primo ciclo
        k++;
    }

    for (int i = 0; i < dimensione; i++)
    {
        if (i<dimensione1)
        {
            arrayRisultato[i]=array1[i];
        }
        else 
        {
            arrayRisultato[i]=array2[i-dimensione1];
        }
        cout << arrayRisultato[i] << ", ";
    }
    return arrayRisultato;
}

int main()
{
    int array1[5] = {0, 1, 2, 3, 4};
    int array2[3] = {1, 4, 3};
    int dimensione1 = sizeof(array1) / sizeof(array1[0]);
    int dimensione2 = sizeof(array2) / sizeof(array2[0]);

    int *arrayConcatenato = concatena( array1, array2, dimensione1, dimensione2);

}
/*Crea due array di due dimensioni diverse, riempili con numeri consecutivi.
Crea e poi stampa a schermo i due array concatenati
Array1 [0,1,2,3,4]
Array2 [0,1,2]
ArrayRisultato [0,1,2,3,4,0,1,2]
*/
#include <iostream>
#include <array>

using namespace std;

int main()
{
    int array1[5] = {0,1,2,3,4};
    int array2[3] = {1,4,3};
    int dimensione1 = sizeof(array1) / sizeof(array1[0]);
    int dimensione2 = sizeof(array2) / sizeof(array2[0]);

    int dimensione = dimensione1+dimensione2;
    int arrayRisultato[dimensione];
    
    for(int i=0; i<dimensione1; i++)
    {
        arrayRisultato[i]=array1[i]; 
    }
        for(int i=0; i<dimensione2; i++)
    {
        arrayRisultato[i+dimensione1]=array2[i];  
    }

     for(int i=0; i<dimensione; i++)
     {
        cout<<arrayRisultato[i]<<" ";
     }
}
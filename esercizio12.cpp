#include <iostream>

using namespace std;

int *arrayContaUguali(int array1[], int array2[], int dimensione1, int dimensione2)
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

    int arrayComuni[uguali];
    int k = 0;
    for (int i = 0; i < dimensione1; i++)
    {
        for (int j = 0; j < dimensione2; j++)
        {
            if (array1[i] == array2[j])
            {
                arrayComuni[k] = array1[i];
                k++;
            }
        }
    } 
    
    cout << "i numeri in comune sono ";
    for (int i =0; i < uguali; i++)
    {
   cout << arrayComuni[i] << ", ";
    }

    return arrayComuni;
}

int main()
{
    int array1[4] = {1, 2, 3, 4};
    int array2[4] = {2, 4, 6, 8};
    int dimensione1 = sizeof(array1) / sizeof(array1[0]);
    int dimensione2 = sizeof(array2) / sizeof(array2[0]);

    int *arrayComuni = arrayContaUguali(array1, array2, dimensione1, dimensione2);

}
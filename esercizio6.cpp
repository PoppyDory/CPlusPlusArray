// Scrivi nel main un algoritmo che su un array,
// calcola e restituisce un nuovo array
// che contenga solo gli elementi dell'array di input che sono pari
#include <iostream>
#include <array>

using namespace std;

int main()
{
    cout << "Quanto lo vuoi lungo l'array?" << endl;
    int lungo;
    cin >> lungo;
    int array[lungo];
    cout << "inserisci gli elementi: " << endl;
    for (int i = 0; i < lungo; i++)
    {
        cin >> array[i];
    }

   

    int pari = 0;
    for (int i = 0; i < lungo; i++)// per sapere di quanto deve essere grande l'array dei pari
    {
        if (array[i] % 2 == 0)
        {

            pari++;
        }
    } 
    int arrayPari[pari];//pari è la lunghezza dell'arrayPari
    int indice=0;

    for (int i=0; i<lungo; i++)
    {
        if (array[i]%2==0)
        {
            arrayPari[indice]=array[i];
            indice++;
        }
    }
    cout<< " L'array con gli elementi pari contiene: ";
    for (int i =0; i<pari; i++)
    {
        cout<<arrayPari[i]<< ", ";
    }

}

/* Scrivi un programma che, dato un array di interi, calcoli la
somma degli elementi pari e degli elementi dispari in
due cicli separati.
Il programma deve poi stampare a schermo le somme ottenute.
Esempio:
Input: [3, 5, 2, 8, 9, 4]
Output: Somma degli elementi pari: 14
Somma degli elementi dispari: 17
*/
#include <iostream>
#include <array>

using namespace std;

int main()
{
    int numeri = 0;
    int arrayNumeri[6];
    int sommapari = 0;
    int sommadispari = 0;
    int dimensione = sizeof(arrayNumeri) / sizeof(arrayNumeri[0]);

    cout<<"inserisci numeri:  "<<endl;
    for (int i = 0; i < dimensione; i++)
    {
        cin >> arrayNumeri[numeri];
        if (arrayNumeri[numeri] % 2)
        {

            sommadispari += arrayNumeri[numeri];
        }
        else
        {

            sommapari += arrayNumeri[numeri];
        }
    }
    cout <<"la somma dei pari e': "<< sommapari << endl;
    cout <<"la somma dei dispari: "<< sommadispari << endl;
}
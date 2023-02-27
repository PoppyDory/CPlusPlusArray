/*Scrivere un programma in C++ che prende in input una
stringa e determina se essa è formata da caratteri univoci,
ovvero non ci sono caratteri ripetuti nella stringa.
Ad esempio, la stringa "casa" non è formata da caratteri
univoci poiché la lettera "a" compare due volte, mentre la
stringa "cane" è formata da caratteri univoci
*/
#include <iostream>
#include <array>
#include <string>

using namespace std;

int main()
{
    string parola = "";
    bool noUnivoca = false;
    // string arrayParole[1];

    // int grandezza= sizeof(arrayParole) / sizeof(arrayParole[0]);
    cout << "inserisci parola" << endl;

    // for (int i=0; i<grandezza; i++) //scorro l'array
    //{
    cin >> parola;

    for (int j = 0; j < parola.length(); j++) // scorrp la parola
    {
        for (int k = j + 1; k < parola.length(); k++) // confronto tutte le lettere tra di loro
        {
            if (parola[j] == parola[k])
            {
                noUnivoca = true;
            }
        }
    }
    if (noUnivoca)
    {
        cout << " la parola non e' univoca. " << endl;
        
    }
    else
    {
        cout << "La parola e' univoca" << endl;
    }
}
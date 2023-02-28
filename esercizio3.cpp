//Scrivi una funzione che prenda in input un array di interi e la sua lunghezza 
//e restituisca la somma di tutti gli elementi dell'array

#include <iostream>
#include <array>

using namespace std;

//int arraySomma (int array[], int dimensione)
//{
//
//}

int main()
{
    int array[4];
    int dimensione = sizeof(array) / sizeof(array[0]);
    int somma=0;
    int numeri=0;
    
    cout <<"inserisci numeri "<<endl;

    for (int i=0; i<dimensione; i++)
    {
        cin>>array[numeri];
        somma+=array[numeri];
    }
    cout<< "la somma e' "<< somma;
}
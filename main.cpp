#include <iostream>
#include <fstream>
//#include "suma.h"
#include "uno.h"
#include "dos.h"
#include "tres.h"
using namespace std;
using namespace heap;
//using namespace operaciones;
//+archivos
int main()
{  
  ofstream archivo;
  archivo.open("Heapsort.txt",ios::app);
    int A[100],n;
    cout<<"Ingresa la cantidad de elementos:";
    cin>>n;
    ingresar(A,n);
    archivo<<"ALGORITMO HEAPSORT\n";
    archivo<<"Elementos originales\n";
    imprimir(A,n);
    heapSort(A,n);
    archivo<<"Elementos ordenados\n";
    imprimir(A,n);    
    //cout<<suma(3,4);
    archivo.close();

    return 0;
}
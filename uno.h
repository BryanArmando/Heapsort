#include <iostream>
#include <fstream>
using namespace std;




void imprimir (int A[],int n)
{
  ofstream arch;
  arch.open("Heapsort.txt",ios::app);


    for(int i=1;i<=n;i++)
    {
        cout<<"["<<A[i]<<"]";
        arch<<"["<<A[i]<<"]";
    }
    arch<<endl;
    arch.close();
}
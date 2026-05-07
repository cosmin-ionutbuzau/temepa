#include <iostream>
#include "header.h"
using namespace std;
//codul face backtracking pentru a gasi toate submultimile unui set de numere care au suma egala cu o valoare data.
// s = suma actual, k = index elem, r =suma ramasa de explorat
void bkt(int s, int k, int r, int w[], int x[], int m, int n)
{
    if(k==n) return; 

    x[k]=1; // includem elementul k
    if(s+w[k]==m)
    {
        afisare(x,n); // am gasit o submult
    }
    // continuam daca mai e pos sa atingem suma
    if(s+w[k]+r >= m)
        bkt(s+w[k], k+1, r-w[k], w, x, m, n); 
    x[k]=0; 
    if(s+r-w[k] >= m)
        bkt(s, k+1, r-w[k], w, x, m, n); 
}

void afisare(int x[], int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<x[i]<<" ";
    }
    cout<<endl;
}

#include "header.h"
#include <list>
int getD(int v[], int n)
{
   int max = v[0];
   for(int i = 1; i < n; i++)
       if(v[i] > max)
           max = v[i];


   int d = 0;
   while(max > 0)
   {
       d++;
       max /= 10;
   }
   return d;
}




void radixsort(int v[], int n)
{
   list<int> pachete[10];
   int d = getD(v, n);
   int putere=1;
   for(int i = 0; i < d; i++)
   {
       // impachetare
       for(int j = 0; j < n; j++)
       {
           int cifra = (v[j] / putere) % 10;
           pachete[cifra].push_back(v[j]);
       }


       // despachetare
       int index = 0;
       for(int j = 0; j < 10; j++)
       {
           for(int numar : pachete[j])
           {
               v[index++] = numar;
           }
           pachete[j].clear();
       }
       putere=putere*10;
   }
}

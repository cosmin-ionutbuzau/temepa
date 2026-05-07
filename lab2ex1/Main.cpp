#include <iostream>
#include "header.h"
using namespace std;


int main()
{
   int v[] = {170, 45, 75, 90, 802, 24, 2, 66};
   int n =8;
   radixsort(v, n);
   for(int i = 0; i < n; i++)
       cout << v[i] << " ";


   cout << endl;


   return 0;
}

#include <iostream>
#include "header.h"
using namespace std;

int main()
{
    // w = vectorul de greutati, x = solutia curenta (0/1), n = nr elemente, m = suma tinta, r = suma totala ramasa
    int w[100], x[100], n, m, r = 0;

    cout << "n= "; cin >> n;
    cout << "m= "; cin >> m;

    for(int i = 0; i < n; i++)
    {
        cout << "w[" << i << "]= ";
        cin >> w[i];
        r += w[i];
        x[i] = 0;
    }

    cout << "\nSubmultimile cu suma " << m << ":\n";
    bkt(0, 0, r, w, x, m, n);

    return 0;
}

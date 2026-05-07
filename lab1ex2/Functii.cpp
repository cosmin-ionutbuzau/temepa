#include "header.h"
using namespace std;


void citire(int a[100][100], int n)
{
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            cin >> a[i][j];
}


void rotire(int a[100][100], int n)
{


    for(int i = 0; i < n; i++)
        for(int j = i + 1; j < n; j++)
            swap(a[i][j], a[j][i]);

    for(int i = 0; i < n / 2; i++)
        for(int j = 0; j < n; j++)
            swap(a[i][j], a[n - 1 - i][j]);
}


void afisare(int a[100][100], int n)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }
}

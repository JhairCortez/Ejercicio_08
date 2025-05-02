#include<iostream>
using namespace std;

void sumarMatrices(int a[10][10], int b[10][10], int r[10][10], int f, int c)
{
    int i = 0
    while(i < f)
    {
        int j = 0
        while(j < c)
        {
            r[i][j] = a[i][j] + b[i][j]
            j++
        }
        i++
    }
}

void mostrarMatriz(int m[10][10], int f, int c)
{
    int i = 0
    while(i < f)
    {
        int j = 0
        while(j < c)
        {
            cout << m[i][j] << " "
            j++
        }
        cout << endl
        i++
    }
}

int main()
{
    int f, c
    cout << "ingrese número de filas: "
    cin >> f
    cout << "ingrese número de columnas: "
    cin >> c

    int a[10][10], b[10][10], r[10][10]
    int i = 0
    while(i < f)
    {
        int j = 0
        while(j < c)
        {
            cout << "a[" << i << "][" << j << "]: "
            cin >> a[i][j]
            j++
        }
        i++
    }

    i = 0
    while(i < f)
    {
        int j = 0
        while(j < c)
        {
            cout << "b[" << i << "][" << j << "]: "
            cin >> b[i][j]
            j++
        }
        i++
    }

    sumarMatrices(a, b, r, f, c)
    cout << "matriz resultado:" << endl
    mostrarMatriz(r, f, c)
      }

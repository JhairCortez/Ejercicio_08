#include<iostream>
using namespace std;

void multiplicarMatrices(int a[10][10], int b[10][10], int r[10][10], int f1, int c1, int c2)
{
    int i = 0
    while(i < f1)
    {
        int j = 0
        while(j < c2)
        {
            r[i][j] = 0
            int k = 0
            while(k < c1)
            {
                r[i][j] += a[i][k] * b[k][j]
                k++
            }
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
    int f1, c1, f2, c2
    cout << "ingrese filas de la primera matriz: "
    cin >> f1
    cout << "ingrese columnas de la primera matriz: "
    cin >> c1
    cout << "ingrese filas de la segunda matriz: "
    cin >> f2
    cout << "ingrese columnas de la segunda matriz: "
    cin >> c2

    if(c1 != f2)
    {
        cout << "no se pueden multiplicar las matrices" << endl
        return 0
    }

    int a[10][10], b[10][10], r[10][10]

    int i = 0
    while(i < f1)
    {
        int j = 0
        while(j < c1)
        {
            cout << "a[" << i << "][" << j << "]: "
            cin >> a[i][j]
            j++
        }
        i++
    }

    i = 0
    while(i < f2)
    {
        int j = 0
        while(j < c2)
        {
            cout << "b[" << i << "][" << j << "]: "
            cin >> b[i][j]
            j++
        }
        i++
    }

    multiplicarMatrices(a, b, r, f1, c1, c2)
    cout << "matriz resultado:" << endl
    mostrarMatriz(r, f1, c2)
}

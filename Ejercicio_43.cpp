#include<iostream>
using namespace std;

int main()
{
    int f, c
    cout << "ingrese número de filas: "
    cin >> f
    cout << "ingrese número de columnas: "
    cin >> c

    int m[10][10]
    int i = 0
    while(i < f)
    {
        int j = 0
        while(j < c)
        {
            cout << "m[" << i << "][" << j << "]: "
            cin >> m[i][j]
            j++
        }
        i++
    }

    i = 0
    while(i < f)
    {
        int suma = 0
        int j = 0
        while(j < c)
        {
            suma += m[i][j]
            j++
        }
        cout << "suma de la fila " << i << ": " << suma << endl
        i++
    }
    }

#include<iostream>
using namespace std;

int main()
{
    int f, c
    cout << "ingrese número de filas: "
    cin >> f
    cout << "ingrese número de columnas: "
    cin >> c

    int a[10][10], b[10][10], suma[10][10]
    int i = 0

    cout << "ingrese la primera matriz:" << endl
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
    cout << "ingrese la segunda matriz:" << endl
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

    i = 0
    while(i < f)
    {
        int j = 0
        while(j < c)
        {
            suma[i][j] = a[i][j] + b[i][j]
            j++
        }
        i++
    }

    cout << "matriz suma:" << endl
    i = 0
    while(i < f)
    {
        int j = 0
        while(j < c)
        {
            cout << suma[i][j] << " "
            j++
        }
        cout << endl
        i++
    }
      }

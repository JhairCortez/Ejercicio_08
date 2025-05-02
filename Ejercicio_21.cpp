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
        int sumaFila = 0
        int j = 0
        while(j < c)
        {
            sumaFila += m[i][j]
            j++
        }
        cout << "suma fila " << i << ": " << sumaFila << endl
        i++
    }

    int j = 0
    while(j < c)
    {
        int sumaColumna = 0
        i = 0
        while(i < f)
        {
            sumaColumna += m[i][j]
            i++
        }
        cout << "suma columna " << j << ": " << sumaColumna << endl
        j++
    }
}

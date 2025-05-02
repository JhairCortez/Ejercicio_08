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

    int col1, col2
    cout << "ingrese la primera columna a intercambiar: "
    cin >> col1
    cout << "ingrese la segunda columna a intercambiar: "
    cin >> col2

    i = 0
    while(i < f)
    {
        int temp = m[i][col1]
        m[i][col1] = m[i][col2]
        m[i][col2] = temp
        i++
    }

    cout << "matriz resultante:" << endl
    i = 0
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

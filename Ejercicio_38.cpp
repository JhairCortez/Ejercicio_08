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

    int fila1, fila2
    cout << "ingrese la primera fila a intercambiar: "
    cin >> fila1
    cout << "ingrese la segunda fila a intercambiar: "
    cin >> fila2

    int j = 0
    while(j < c)
    {
        int temp = m[fila1][j]
        m[fila1][j] = m[fila2][j]
        m[fila2][j] = temp
        j++
    }

    cout << "matriz resultante:" << endl
    i = 0
    while(i < f)
    {
        j = 0
        while(j < c)
        {
            cout << m[i][j] << " "
            j++
        }
        cout << endl
        i++
    }
}

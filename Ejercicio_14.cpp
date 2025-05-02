#include<iostream>
using namespace std;

void mostrarTranspuesta(int m[10][10], int f, int c)
{
    int i = 0
    while(i < c)
    {
        int j = 0
        while(j < f)
        {
            cout << m[j][i] << " "
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

    cout << "matriz transpuesta:" << endl
    mostrarTranspuesta(m, f, c)
      }

#include<iostream>
using namespace std;

void intercambiarFilas(int m[10][10], int f, int c, int f1, int f2)
{
    int j = 0
    while(j < c)
    {
        int temp = m[f1][j]
        m[f1][j] = m[f2][j]
        m[f2][j] = temp
        j++
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

    int f1, f2
    cout << "ingrese primera fila a intercambiar: "
    cin >> f1
    cout << "ingrese segunda fila a intercambiar: "
    cin >> f2

    if(f1 < 0 || f1 >= f || f2 < 0 || f2 >= f)
    {
        cout << "filas inválidas" << endl
        return 0
    }

    intercambiarFilas(m, f, c, f1, f2)

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

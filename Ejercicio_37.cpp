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

    int menor = m[0][0]
    int filaMenor = 0
    int columnaMenor = 0

    i = 0
    while(i < f)
    {
        int j = 0
        while(j < c)
        {
            if(m[i][j] < menor)
            {
                menor = m[i][j]
                filaMenor = i
                columnaMenor = j
            }
            j++
        }
        i++
    }

    cout << "el menor elemento es: " << menor << endl
    cout << "posición: fila " << filaMenor << ", columna " << columnaMenor << endl
          }

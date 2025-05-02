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

    int mayor = m[0][0]
    int filaMayor = 0
    int columnaMayor = 0

    i = 0
    while(i < f)
    {
        int j = 0
        while(j < c)
        {
            if(m[i][j] > mayor)
            {
                mayor = m[i][j]
                filaMayor = i
                columnaMayor = j
            }
            j++
        }
        i++
    }

    cout << "el mayor elemento es: " << mayor << endl
    cout << "posición: fila " << filaMayor << ", columna " << columnaMayor << endl
          }

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

    int suma = 0
    int total = f * c
    i = 0
    while(i < f)
    {
        int j = 0
        while(j < c)
        {
            suma += m[i][j]
            j++
        }
        i++
    }

    float promedio = float(suma) / total
    cout << "el promedio de los elementos es: " << promedio << endl
}

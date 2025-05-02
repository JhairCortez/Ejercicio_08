#include<iostream>
using namespace std;

int main()
{
    int n
    cout << "ingrese el tamaño de la matriz cuadrada: "
    cin >> n

    int m[10][10]
    int i = 0
    while(i < n)
    {
        int j = 0
        while(j < n)
        {
            cout << "m[" << i << "][" << j << "]: "
            cin >> m[i][j]
            j++
        }
        i++
    }

    bool identidad = true
    i = 0
    while(i < n)
    {
        int j = 0
        while(j < n)
        {
            if(i == j && m[i][j] != 1)
                identidad = false
            if(i != j && m[i][j] != 0)
                identidad = false
            j++
        }
        i++
    }

    if(identidad)
        cout << "la matriz es identidad" << endl
    else
        cout << "la matriz no es identidad" << endl
          }

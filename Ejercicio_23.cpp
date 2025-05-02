#include<iostream>
using namespace std;

bool esIdentidad(int m[10][10], int n)
{
    int i = 0
    while(i < n)
    {
        int j = 0
        while(j < n)
        {
            if(i == j && m[i][j] != 1)
                return false
            if(i != j && m[i][j] != 0)
                return false
            j++
        }
        i++
    }
    return true
}

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

    if(esIdentidad(m, n))
        cout << "la matriz es identidad" << endl
    else
        cout << "la matriz no es identidad" << endl
      }

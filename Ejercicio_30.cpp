#include<iostream>
using namespace std;

bool esSimetrica(int m[10][10], int n)
{
    int i = 0
    while(i < n)
    {
        int j = 0
        while(j < n)
        {
            if(m[i][j] != m[j][i])
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

    if(esSimetrica(m, n))
        cout << "la matriz es simétrica" << endl
    else
        cout << "la matriz no es simétrica" << endl
      }

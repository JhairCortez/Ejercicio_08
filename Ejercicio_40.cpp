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

    bool simetrica = true
    i = 0
    while(i < n && simetrica)
    {
        int j = 0
        while(j < n)
        {
            if(m[i][j] != m[j][i])
            {
                simetrica = false
            }
            j++
        }
        i++
    }

    if(simetrica)
        cout << "la matriz es simétrica" << endl
    else
        cout << "la matriz no es simétrica" << endl
          }

#include<iostream>
using namespace std;

int main()
{
    int n = 7
    int m[7][7]
    int valor = 1
    int inicio = 0
    int fin = n - 1

    while(inicio <= fin)
    {
        int i = inicio
        while(i <= fin)
        {
            m[inicio][i] = valor
            valor++
            i++
        }

        i = inicio + 1
        while(i <= fin)
        {
            m[i][fin] = valor
            valor++
            i++
        }

        i = fin - 1
        while(i >= inicio)
        {
            m[fin][i] = valor
            valor++
            i--
        }

        i = fin - 1
        while(i > inicio)
        {
            m[i][inicio] = valor
            valor++
            i--
        }

        inicio++
        fin--
    }

    int f = 0
    while(f < n)
    {
        int c = 0
        while(c < n)
        {
            cout << m[f][c] << "\t"
            c++
        }
        cout << endl
        f++
    }
      }

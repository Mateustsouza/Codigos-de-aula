#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
using namespace std;

int main()
{
    string texto;
    int s, i = 0;
    int vet[50];
    char str[50];

    getline(cin, texto);

    s = texto.size(); // A STRING TEM "s" CARACTERES

    for (int j = 0; j <= s - 1; j++)
    {
        if (texto[j] == '*')
        {
            vet[i] = j;
            i++;
        }
    }
    int k = 0;
    int cont = 1;
    i = 0;


    for (int j = 0; j <= s - 1; j++)
    {
        if (j == vet[i]) // OPA! AÍ TEM UM ASTERISCO
        {
            if (cont % 2 == 1) // Primeiro asterico
            {
                str[k] = '<';
                str[k + 1] = 'b';
                str[k + 2] = '>';
                i++;
                k += 3;
            }
            if (cont % 2 == 0) // Segundo asterico
            {
                str[k] = '<';
                str[k + 1] = '/';
                str[k + 2] = 'b';
                str[k + 3] = '>';
                i++;
                k += 4;
            }
            cont++;
        }
        
        else
        {
            str[k] = texto[j];
            k++;
        }
    }

    for (int j = 0; j <= k - 1; j++)
    {
        cout << str[j];
    }
    return 0;
}
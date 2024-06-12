
#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
using namespace std;

int main()
{
    string texto;
    int s;
    int n = 0;
    int i = 0;
    int veti[50];
    int vetn[50];
    char str[50];

    getline(cin, texto);

    s = texto.length(); // A STRING TEM "s" CARACTERES

    for (int j = 0; j <= s - 1; j++)
    {
        if (texto[j] == '*')
        {
            vetn[n] = j;
            n++;
        }
        if (texto[j] == '_')
        {
            veti[i] = j;
            i++;
        }
    }
    int k = 0;
    int contn = 1;
    int conti = 1;
    i = 0;
    n = 0;

    for (int j = 0; j <= s - 1; j++)
    {
        if (j == vetn[n]) // OPA! AÍ TEM UM ASTERISCO
        {
            if (contn % 2 == 1) // Primeiro asterico
            {
                str[k] = '<';
                str[k + 1] = 'b';
                str[k + 2] = '>';
                n++;
                k += 3;
            }
            if (contn % 2 == 0) // Segundo asterico
            {
                str[k] = '<';
                str[k + 1] = '/';
                str[k + 2] = 'b';
                str[k + 3] = '>';
                n++;
                k += 4;
            }
            contn++;
        }
        else if (j == veti[i]) // OPA! AÍ TEM UM UNDERLINE
        {
            if (conti % 2 == 1) // Primeiro underline
            {
                str[k] = '<';
                str[k + 1] = 'i';
                str[k + 2] = '>';
                i++;
                k += 3;
            }
            if (conti % 2 == 0) // Segundo underline
            {
                str[k] = '<';
                str[k + 1] = '/';
                str[k + 2] = 'i';
                str[k + 3] = '>';
                i++;
                k += 4;
            }
            conti++;
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
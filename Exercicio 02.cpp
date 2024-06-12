#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
using namespace std;

int main()
{

    int N;
    cin >> N;

    char matriz[N][20]; // N RAs com 20 caracteres.

    for (int i = 0; i <= (N - 1); i++)
    {
        for (int j = 0; j <= (20 - 1); j++)
        {
            cin >> matriz[i][j];
        }
    }

    for (int i = 0; i <= (N - 1); i++)
    {
        for (int j = 0; j <= (20 - 1); j++)
        {
            cout << matriz[i][j];
        }
    }

    return 0;
}

//int registro_acadêmico(int N)
//{
//}
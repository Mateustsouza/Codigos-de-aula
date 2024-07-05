#include <iomanip>
#include <iostream>
#include <cmath>
#include <string>
#include <cctype>

#define N 1500

using namespace std;

struct ramal
{
    int nramal;   // NÚMERO DO RAMAL
    int cat;      // CATEGORIA
    string setor; // SETOR
    int edificio; // EDIFÍCIO
    int sala;     // NÚMERO DA SALA
    string nome1; // NOME DO RESPONÁVEL PELO RAMAL
    string nome2; // NOME DO RESPONSÁVEL PELO ATESTE DA CONTA TELEFÔNICA
};

string minusculo(string);
void critica_ramal(ramal[], int *, int); // A passagem será por REFERÊNCIA.
void critica_categoria(int *);
void critica_setor(string *);
void critica_edificio(int *);
void critica_sala(int *);

int main()
{

    ramal cadramal[N]; // cadramal é um vetor do tipo ramal.
    int n;

    cout << "==================================" << endl;
    cout << "VAMOS INICIAR O CADASTRO DE RAMAIS" << endl;
    cout << "==================================" << endl;
    cout << endl;

    cout << "Insira a quantidade de cadastros que serao inseridos: ";
    cin >> n;
    cout << endl;

    cout << endl;
    cout << "VAMOS COMECAR O CADASTRO" << endl;
    cout << endl;

    for (int i = 0; i < n; i++) // Laço de Cadastro
    {
        cout << "REGISTRO DOS DADOS DO CADASTRO " << i + 1 << ":" << endl;
        cout << endl;

        cout << "Digite o numero do Ramal: ";

        cin >> cadramal[i].nramal;
        critica_ramal(cadramal, &cadramal[i].nramal, i);
        cout << endl;

        cout << "Digite o numero da Categoria: ";

        cin >> cadramal[i].cat;
        critica_categoria(&cadramal[i].cat);
        cout << endl;

        cout << "Digite o Setor: ";

        cin >> cadramal[i].setor;
        critica_setor(&cadramal[i].setor);
        cout << endl;

        cout << "Digite o Codigo do Edificio: ";
        cin >> cadramal[i].edificio;
        critica_edificio(&cadramal[i].edificio);
        cout << endl;

        cout << "Digite o numero do Sala: ";
        cin >> cadramal[i].sala;
        critica_sala(&cadramal[i].sala);
        cout << endl;

        cout << "Digite o nome do Responsavel pelo Ramal: ";
        cin >> cadramal[i].nome1;
        cadramal[i].nome1 = minusculo(cadramal[i].nome1); // Os nomes serão armazenados no vetor com letras minúsculas.
        cout << endl;

        cout << "Digite o nome do Responsavel pelo ateste: ";
        cin >> cadramal[i].nome2;
        cadramal[i].nome2 = minusculo(cadramal[i].nome2); // Os nomes serão armazenados no vetor com letras minúsculas.
        cout << endl;
        cout << "=========================================" << endl;
        cout << endl;
    }

    cout << endl;
    cout << "Lista de Ramais Cadastrados: " << endl;
    cout << "=============================" << endl;
    cout << endl;

    for (int i = 0; i < n; i++)
    {
        cout << "Dados do cadastro " << i + 1 << ":" << endl;
        cout << endl;

        cout << "Ramal: ";
        cout << cadramal[i].nramal << endl;

        cout << "Categoria: ";
        cout << cadramal[i].cat << endl;

        cout << "Setor: ";
        cout << cadramal[i].setor << endl;

        cout << "Edificio: ";
        cout << cadramal[i].edificio << endl;

        cout << "Sala: ";
        cout << cadramal[i].sala << endl;

        cout << "Responsavel pelo Ramal: ";
        cout << cadramal[i].nome1 << endl;

        cout << "Responsavel pelo ateste: ";
        cout << cadramal[i].nome2 << endl;

        cout << endl;
    }

    return 0;
}

string minusculo(string nome)
{
    int tam;
    string str = "";
    tam = nome.size();
    str = nome;
    for (int j = 0; j < tam; j++)
    {
        str[j] = tolower(str[j]);
    }
    return str;
}

void critica_setor(string *setor)
{
    bool i;
    do
    {
        *setor = minusculo(*setor); // A string (o nome da pessoa) foi convertida para letras minusculas.

        if (*setor == "setel")
        {
            i = 1;
        }
        else if (*setor == "diben")
        {
            i = 1;
        }
        else if (*setor == "patrimonio")
        {
            i = 1;
        }
        else if (*setor == "protocolo")
        {
            i = 1;
        }
        else
        {
            i = 0;
        }
        if (i == 0)
        {
            cout << "Este setor nao se encontra em nossos dados. Digite novamente o nome do setor: ";
            cin >> *setor;
        }
    } while (!i);
    return;
}

/*
void critica_ramal2(int *r)
{
    if (*r < 1000 || *r > 2999)
    {
        do
        {
            cout << "Este numero de ramal esta fora do range do Ministerio do Meio Ambiente. Digite novamente o numero do ramal: ";
            cin >> *r;
        } while (*r < 1000 || *r > 2999);
    }
    return;
}
*/

void critica_ramal(ramal v[], int *r, int b)
{
    bool c = 0;
    do
    {
        if (*r < 1000 || *r > 2999)
        {
            do
            {
                cout << "Este numero de ramal nao pertence ao Ministerio do Meio Ambiente. Digite novamente o numero do ramal: ";
                cin >> *r;
            } while (*r < 1000 || *r > 2999);
            c = 0;
        }

        for (int j = 0; j < b; j++)
        {
            if (v[j].nramal == *r) // OPA! ESTE NÚMERO DE RAMAL JÁ ESTÁ CADASTRADO!
            {
                cout << "Este numero de ramal ja foi cadastrado. Insira novamente o numero do ramal: ";
                cin >> *r;
                c = 1;
                break;
            }
        }
    } while (c);
    return;
}

void critica_categoria(int *c)
{
    if (*c < 0 || *c > 6)
    {
        do
        {
            cout << "Esta categoria nao esta presente no nosso Sistema de telefonia. Digite novamente a categoria: ";
            cin >> *c;
        } while (*c < 0 || *c > 6);
        return;
    }
}

void critica_edificio(int *e)
{
    switch (*e)
    {
    case 500:
        break;
    case 505:
        break;
    default:
        do
        {
            cout << "Este codigo nao se refere a nenhum de nosos edificios. Digite novamente o codigo do edificio: ";
            cin >> *e;

        } while ((*e != 500) && (*e != 505));
        break;
    }
    return;
}

void critica_sala(int *x)
{
    string str;
    str = to_string(*x);
    if (str.size() != 3)
    {
        do
        {
            cout << "O numero da sala e composto por 3 digitos. Digite novamente o numero da sala: ";
            cin >> *x;
            str = to_string(*x);
        } while (str.size() != 3);
    }
    return;
}
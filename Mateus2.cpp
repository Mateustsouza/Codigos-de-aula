/*
Meu primeiro programa em c++
Autor: Mateus
Data: 26/03/2024
*/

#include <iostream>
#include <iomanip>
using namespace std;    

// in�cio da fun��o principal
int main(){
	// calcular a for�a de um objeto
	// f = m*a;
	
	float peso, m;
	
	const float GRAVIDADE = 9.8;
	
   cout << "Informe sua massa" << endl;
   
    cin >> m;

	peso =  m * GRAVIDADE;	
	
	
	cout << "O seu peso e: " << setprecision(3) << fixed << peso << "newtons" << endl; // imprime o texto na tela
	
	return 0;
}





// % - resto da divis�o. EX p = % 10/3

/*
Aula sobre vetores
Data: 10/05/2024
Professor: Wesin Alves Ribeiro


fORMA DE SE DECLARAR O VETOR:

tipo nome[tamanho];
O �ndice do primeiro elemento � sempre o zero. Ou seja, para um vetor de N elementos, o �ndice vai de 0 a N-1. 

N�O SOU OBRIGADO A USAR TODAS AS POSI��ES DE MEM�RIA DO MEU ARRAY.


*/


#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main () {
	
	// float notas[5] = {0,0,0,0,0};
	
	float notas[100];
	float mediaNotas =0, desvioPadrao;
	int n;
	
	
	cin >> n; // Quantidade de notas a serem inseridas
	
	int i;
	for(i=0;i<=n-1;i++){
		cin >> notas[i];
		mediaNotas += notas[i] ;
	}
	

	cout << mediaNotas;
	
	
}




















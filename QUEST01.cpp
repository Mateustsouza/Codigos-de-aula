#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main () {
	
	
	float vetor[10];
	int n;
	
	cout << "Insira um valor inteiro entre 1 e 50" << endl;
	cin >> n;
	vetor[0] = n;
	cout << endl;
	
	for(int i=0;i<=8;i++){
		vetor[(i+1)] = 2*vetor[i];
		cout << "N[" << i << "] = " << vetor[i] << endl; 
		
		if(i==8){
		
		cout << "N[" << i << "] = " << vetor[i+1] << endl;
		
		    
		}
	}
	

	return 0;
	
	
}


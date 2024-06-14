#include <iostream>
using namespace std;

void troca(int &x, int &y){   // ESTOU MEXENDO FISICAMENTE ONDE ESTÁ O "a" E O "b".
	int temp;
	temp = x;
	x=y;
	y=temp;
}



int main(){
	int a=5;
	int b =10;
	cout << "Os valores antes da troca sao " << a <<"\t" << b << endl;
	troca(a,b);
	cout << "Os valores apos a troca sao " << a <<"\t" << b << endl;
	
	return 0;
}

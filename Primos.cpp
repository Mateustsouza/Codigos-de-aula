/*
COMPUTA��O PARA ENGENHARIA - TURMA 02 - 1/2024

LISTA 2

Autor: Mateus Torres de Souza
Data: 29/03/2024
*/


#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

// In�cio da fun��o principal

int main(){

//7

int n;
int resto2,resto3,resto5,resto7,resto11,resto13,resto17;

cout << "Digite um numero natural" << endl;
cin >> n;

if(n>=2){
    
    resto2 = n % 2;
    if(resto2 == 0){
        if(n!=2){
            cout << "O numero nao e primo" << endl; 
         }
         else{
            cout << "O numero 2 e primo" << endl; // O n�mero � o pr�prio 2.
         }
    
        }
    else {            // S� entra nessas chaves o n�mero cujo resto da divis�o por 2 n�o for zero.
        resto3 = n % 3;
        if(resto3 == 0){
            if (n!=3){
                cout << "O numero nao e primo" << endl;
                    }
             else{
             cout << "O numero 3 e primo" << endl; // o n�mero � o pr�prio 3.    
                }
            }   
        else{
            resto5 = n % 5;
            if (resto5 == 0){
                if(n!=5){
                cout << "O numero nao e primo" << endl;
                        }
                else {
                cout << "O numero 5 e primo" << endl;
                    }
                }  
            else {
                resto7 = n % 7;
                if(resto7 == 0){
                    if(n!=7){
                         cout << "O numero nao e primo" << endl;
                            }
                    else {
                        cout << "O numero 7 e primo" << endl; // O n�mero � o pr�prio 7.
                         }
    
                    }
                else{
                    resto11 = n % 11;
                    if(resto11 == 0){
                        if(n!=11){
                        cout << "O numero nao e primo" << endl;
                                 }
                        else {
                         cout << "O numero 11 e primo" << endl; //O n�mero � o pr�prio 11.  
                            }
                        }
                    else {
                        resto13 = n % 13;
                        if (resto13 == 0){
                            if (n!=13){
                                cout << "O numero nao e primo" << endl;
                                      }
                            else{
                                cout << "O numero 13 e primo" << endl;  //O n�mero � o pr�prio 13.  
                                 }
                            }   
                        else{
                            resto17 = n % 17;
                            if(resto17==0){
                                if(n!=17){
                                    cout << "O numero nao e primo" << endl;
                                         }
                                else {
                                    cout << "O numero 17 e primo" << endl;
                                    }
                                }
                            }
                        }
                }

            }
     

        }

     
    }
    


}

if(n==1){
    cout << "O numero nao e primo" << endl;
}


//7

return 0;

}

#include <string>
using namespace std;


class Arvore {
	
	string cientifico;
	string popular;
	
	public:                                // AO SE INSTACIAR UM OBJETO DESSA CLASSE, O CONSTRUTOR DESSA CLASSE � AUTOMATICAMENTE CHAMADO.
		Arvore (string c, string p){
			cientifico = c;               // ISSO SERVE PARA INICIALIZAR OS ATRIBUTOS COMO VARI�VEIS.
			popular = p;
		}
	
string meu_nome (int x){      // Fun��o membro da classe.
    string str = "";
	
	if (x==0){
		return cientifico;
	}

    if (x==1){
		return popular;
	}

	return str;


    
}


};




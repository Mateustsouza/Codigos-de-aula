#include <string>
using namespace std;


class Arvore {
	
	string cientifico;
	string popular;
	
	public:                                // AO SE INSTACIAR UM OBJETO DESSA CLASSE, O CONSTRUTOR DESSA CLASSE É AUTOMATICAMENTE CHAMADO.
		Arvore (string c, string p){
			cientifico = c;               // ISSO SERVE PARA INICIALIZAR OS ATRIBUTOS COMO VARIÁVEIS.
			popular = p;
		}
	
string meu_nome (int x){      // Função membro da classe.
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




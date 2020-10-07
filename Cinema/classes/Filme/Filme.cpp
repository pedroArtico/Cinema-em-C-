#include "Filme.h"
#include <string.h>
Filme::Filme()
{
		nome="";
		duracao=0;
		ini_exibicao=0;
		fim_exibicao=0;
}


	void Filme::setNome(string nome){
		this->nome=nome;
	}

	string Filme::getNome(){
		return nome;
	}

	void Filme::setDuracao(int duracao){
		this->duracao=duracao;
	}
	int Filme::getDuracao(){
		return duracao;
	}
	void Filme::setIni_exibicao(Dataa date){
		
		this->ini_exibicao=ini_exibicao;
	}

	int Filme::getIni_exibicao(){
		return ini_exibicao;
	}
	void Filme::setFim_exibicao(Dataa date){
		this->fim_exibicao=fim_exibicao;
	}
	int Filme::getFim_exibicao(){
		return fim_exibicao;
	}

	void Filme:: cadastrar(){
		int d=0,m=0,a=0,d1=0,m1=0,a1=0;
		char barra,barra1;
		////////////falta o "armazenamento" //////////
		
		cout<<"Digite o nome do filme:"<<endl;
			cin>>nome;
			setNome(nome);
			cout<<getNome()<<endl;
			
			do{
				cout<<"Digite a duracao do filme:"<<endl;
				cin>>duracao;
			}while(duracao<20 || duracao>240);
			setDuracao(duracao);
			cout<<getDuracao() <<" minutos"<<endl;
			
			do{	
				cout<<"Digite a data inicio da exibicao no formato dd/mm/aaaa"<<endl;
				cin>>d >>barra >>m >>barra1 >>a;
				cout<<"Digite a data fim da exibicao no formato dd/mm/aaaa"<<endl;
				cin>>d1 >>barra >>m1 >>barra1 >>a1;
					if(d>31 || d1>31 || a1<a|| (a==a1 && m1<m)|| (m==m1 && d1<d)){
						cout<<"Data invalida!"<<endl;}
			}while(d>31 || d<1 || d1>31|| d1<1 || a1<a || (a==a1 && m1<m) || (m==m1 && d1<d));
			
			date.setDiaSemana(d);
			date.setMes(m);
			date.setAno(a);
			cout<<date.getDiaSemana() <<"/"<<date.getMes() <<"/" <<date.getAno() <<endl;
			
			date.setDiaSemana(d1);
			date.setMes(m1);
			date.setAno(a1);
			cout<<date.getDiaSemana() <<"/"<<date.getMes() <<"/" <<date.getAno() <<endl;
		
				
	}
 ////precisa do armazenamento dos dados//////
/*void Filme::remover(){
	
}

void Filme::atualizar(){
	
}
*/


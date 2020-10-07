#ifndef FILME_H
#define FILME_H
#include "../Data/Dataa.h"
class Filme
{
	public:
		Filme();
		void setNome(string nome);
		string getNome();
		void setDuracao(int duracao);
		int getDuracao();
		void setIni_exibicao(Dataa date);
		int getIni_exibicao();
		void setFim_exibicao(Dataa date);
		int getFim_exibicao();
		void cadastrar();
		//void remover()
		//void alterar()

	private:
		string nome;
		int duracao;
		int ini_exibicao;
		int fim_exibicao;
		Dataa date;
};

#endif

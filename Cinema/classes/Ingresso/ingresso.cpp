#include <iostream>

using namespace std;

	class Ingresso {
		char formaPgto;
		float valor;
		int tipo;
		float dinheiro;
		float preco;
		float troco;

		public:
		void inicializa(float x);
		void formapgto(float p);
		int tipos(int t);
		int valores(float z);
		void poltrona();
		void funcionarios(char f);
		void resumo(float p, float x, float t);
	};
	
		


	void Ingresso::inicializa(float x) {

		cout << "\t1. Segunta - Quinta" << endl;
		cout << "\t2. Sexta - Domingo" << endl;
		cout << endl;
		cout << "\tDia da semana: ";
        cin >> x;

		if (x == 1) {
            preco = 10;
		}
		if (x == 2) {
            preco = 15;
		}

        cout << endl;
	}

	void Ingresso::formapgto(float p) {

		cout << endl;
		cout << "\t1. Dinheiro" << endl;
		cout << "\t2. Cartao" << endl;
		cout << endl;
		cout << "\tForma de pagamento: ";
		cin >> p;
		cout << endl;
            if (p == 1) {
                cout << "\tDinheiro" << endl;
				cout << endl;
				cout << "\tValor Recebido: ";
				cin >> dinheiro;
				if(dinheiro < preco) {
                    cout << "\tValor insuficiente" << endl;
				}

				else {
				troco = dinheiro - preco;
				cout << "\tTroco: " << troco;
                cout << endl;
				}
            }
			if (p == 2) {
                cout << "\tCartao" << endl;
                cout << endl;
                cout << "\tValor Recebido: " << preco;
                cout << endl;
		}

		cout << endl;

	}

	int Ingresso::tipos(int t) {


		cout << "\t1. Inteira" << endl;
		cout << "\t2. Meia entrada" << endl;
		cout << endl;
		cout << "\tTipo do ingresso: ";
		cin >> t;
            if (t == 1)
				preco = preco;

			if (t == 2)
				preco = preco/2;

        cout << endl;
	}

	int Ingresso::valores(float z) {

		cout << "\tPreco total: "	<< preco << endl;
	}

	void Ingresso::poltrona() {
		cout << "\tPoltrona escolhida: " << endl;
		cout << endl;
	}

	void Ingresso::funcionarios(char f) {

		cout << "\tVendedor: " << endl;
	}

	void Ingresso::resumo(float p, float x, float t) {
        if (p == 1)
            cout << "\tForma de pagamento: Dinheiro" << endl;
        else
            cout << "\tForma de pagamento: Cartao" << endl;
        if (t == 1) {
            cout << "\tTipo do ingresso: Inteira" << endl;
            if (x == 1)
            cout << "\tPreco: 10 Reais" << endl;
        else
            cout << "\tPreco: 15 Reais" << endl;
        }
        else {
            cout << "\tTipo do ingresso: Meia-entrada" << endl;
            if (x == 1)
            cout << "\Preco: t5 Reais" << endl;
        else
            cout << "\tPreco: 7,50 Reais" << endl;
        }

	}

	int main(int argc, char** argv) {

		Ingresso umIngresso;
		Ingresso outroIngresso;

		umIngresso.poltrona();
		umIngresso.inicializa(1);
		umIngresso.tipos(1);
        umIngresso.valores(0);
		umIngresso.formapgto(1);
		system("cls");
		umIngresso.funcionarios(0);
		umIngresso.resumo(0,0,0);
		umIngresso.poltrona();


	return 0;
}

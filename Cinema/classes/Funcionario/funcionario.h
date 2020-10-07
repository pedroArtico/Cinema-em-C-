#include<iostream>
#include<string>

using namespace std;
      class Funcionario {
      private:
      string nome, sobrenome;
      string login, senha;
      int cargo;
      public:
      Funcionario() {
      nome="";
      sobrenome="";
      login="";
      senha="";
      }

	  string getNome(){
      	return nome;
      }

	  void setNome(string n){
      	nome=n;
      }

	  string getSobrenome(){
      	return sobrenome;
      }

	  void setSobrenome(string n){
      	sobrenome=n;
      }

	  string getLogin(){
      	return login;
	  }

	  void setLogin(string n) {
	  	login=n;
	  }

	  string getSenha(){
      	return senha;
      }

	  void setSenha(string n){
      	senha=n;
      }

      int getCargo() {
      	return cargo;
	  }

	  void setCargo(int x) {
	  	cargo=x;
	  }
    };


      Funcionario e1;
      string gets();
      void print();

      int main() {

      	int cargo;

      cout <<"Digite o nome: " << endl;
      e1.setNome(gets());
      cout << endl;

	  cout <<"Digite o sobrenome: " << endl;
      e1.setSobrenome(gets());
      cout << endl;

	  cout <<"Digite o login do usuario: " << endl;
      e1.setLogin(gets());
      cout << endl;

	  cout << "Digite a senha do usuario: " << endl;
      e1.setSenha(gets());
      cout << endl;

      cout << "1.Funcionario\n2.Gerente\nDigite o cargo do usuario: " << endl;
      cin >> cargo;
	  e1.setCargo(cargo);
	  cout << endl;
      	if(cargo == 1) {
      		cout << "Funcionario";
		  }
		  else
		  	cout << "Gerente";

   	  print();
   	}
      string gets(){
      string n;
      cin>>n;
      return n;
      }

      void print() {
      system("cls");
      cout <<"Nome do usuario: "<< e1.getNome();
      cout <<"\nSobrenome do usuario: "<< e1.getSobrenome();
      cout <<"\nLogin do usuario: "<< e1.getLogin();
      cout <<"\nSenha do usuario: "<< e1.getSenha();
      if(e1.getCargo() == 1) cout << "\nCargo do usuario: Funcionario"; else cout << "\nCargo do usuario: Gerente";


      }



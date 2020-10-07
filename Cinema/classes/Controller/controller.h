#ifndef CONTROLLER_CPP
#define CONTROLLER_CPP
#include "../Data/Dataa.h"
#include "../Filme/Filme.h"
#include "../Funcionario/"
#include "../Poltrona"
#include "../Funcionario/funcionario.h"
#include "../Ingresso/ingresso.h"


const int maxFilme = 100;
const int maxFunc = 100;
const int maxIngresso = 100;

using namespace std;

class ControllerCinema
{
private:
    Filme filmes[maxFilme];
    bool isMovieValid[maxFilme];

    Funcionario funcionarios[maxFunc];
    bool isFuncValid[maxFunc];

    Ingresso ingressos[maxIngresso];
    bool isIngressValid[maxIngresso];

    int numFilmes;
    int numFunc;
    int numIngr;

public:

    ControllerCinema(){
        this->numFilmes = 0;
        this->numFunc = 0;
        this->numIngr = 0;
    }


    bool cadastraFilme(Filme flm){
        for(int i = 0; i < numFilmes; i++){
            if(!isMovieValid[i]) {
                filmes[i] = flm;
                return true;
            }

            if(numFilmes + 1 < maxFilme){
                filmes[numFilmes] = flm;
                return true;
            }

            return false;
        }
    }

    int procuraFilme(string nome){
        for(int i = 0; i <= numFilmes; i++){
            if(nome == filmes[i].getNome()) {
                return i;
            }
        }
        return -1;
    }

    bool deletaFilme(Filme flm){
        for(int i = 0; i <= numFilmes; i++) {
            if(filmes[i].getNome() == flm.getNome()){
                isMovieValid[i] = false;
                return true;
            }
        }
        return false;
    }

    bool deletaFilme(int pos){
        if(pos <= numFilmes){
            isMovieValid[pos] = false;
        }
        return false;
    }


    bool editaFilme(Filme edited, int pos){
        if(pos <= numFilmes){
            filmes[pos] = edited;
        }
        return false;
    }


    bool getFilmeByPos(int pos, Filme *rsp){
        if(pos <= numFilmes){
            if(isMovieValid[pos]){
                *(rsp) = filmes[pos];
                return true;
            }
        }
        return false;
    }

////////////////////////////////////////////////////////

    bool cadastraFuncionario(Funcionario func){
        for(int i = 0; i < numFunc; i++){
            if(!isFuncValid[i]) {
                funcionarios[i] = func;
                return true;
            }

            if(numFunc + 1 < maxFunc){
                funcionarios[numFunc] = func;
                return true;
            }

            return false;
        }
    }

    int procuraFuncionario(string nome){
        for(int i = 0; i <= numFunc; i++){
            if(nome == funcionarios[i].getNome()) {
                return i;
            }
        }
        return -1;
    }

    bool deletaFuncionario(Funcionario func){
        for(int i = 0; i <= numFunc; i++) {
            if(funcionarios[i].getNome() == func.getNome()){
                isFuncValid[i] = false;
                return true;
            }
        }
        return false;
    }

    bool deletaFuncionario(int pos){
        if(pos <= numFunc){
            isFuncValid[pos] = false;
        }
        return false;
    }


    bool editaFuncionario(Funcionario edited, int pos){
        if(pos <= numFunc){
            funcionarios[pos] = edited;
        }
        return false;
    }


    bool getFuncionarioByPos(int pos, Funcionario *rsp){
        if(pos <= numFunc){
            if(isFuncValid[pos]){
                *(rsp) = funcionarios[pos];
                return true;
            }
        }
        return false;
    }

    //////////////////////////////


    bool cadastraIngresso(Ingresso ingr){
        for(int i = 0; i < numIngr; i++){
            if(!isIngressValid[i]) {
                ingressos[i] = ingr;
                return true;
            }

            if(numIngr + 1 < maxIngresso){
                ingressos[numIngr] = ingr;
                return true;
            }

            return false;
        }
    }


    /*bool deletaIngresso(Ingresso ingr){
        for(int i = 0; i <= numIngr; i++) {
            if(ingressos[i]. == ingr.){
                isIngressValid[i] = false;
                return true;
            }
        }
        return false;
    }*/

    bool deletaIngresso(int pos){
        if(pos <= numIngr){
            isIngressValid[pos] = false;
        }
        return false;
    }


    bool editaIngresso(Ingresso edited, int pos){
        if(pos <= numIngr){
            ingressos[pos] = edited;
        }
        return false;
    }


    bool getIngressoByPos(int pos, Ingresso *rsp){
        if(pos <= numIngr){
            if(isIngressValid[pos]){
                *(rsp) = ingressos[pos];
                return true;
            }
        }
        return false;
    }






};
#endif

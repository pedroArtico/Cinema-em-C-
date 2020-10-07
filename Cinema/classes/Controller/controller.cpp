#ifndef CONTROLLER_CPP
#define CONTROLLER_CPP
#include "../Data/Dataa.h"
#include "../Filme/Filme.h"
#include <list>


class ControllerCinema
{
     public:
          //Filme
          void addFilme(Filme fm){
               this.filmes->insert(fm);
          }
          Filme getFilme(int pos){
               return this.filmes[pos];
          }
          void setFilme(int pos, Filme fm){
               this.filmes[pos] = fm;
          }
          void removeFilme(Filme fm){
               this.filmes.remove(fm);
          }

          /*Ingresso vender(Sessao sess, Poltrona pol){

          }
*/

          list<Filme> getFilmes();
         /* list<Sessao> getSessoes();
          list<Sala> getSalas();
          list<Poltrona> getPoltronas();
          list<ingresso> getIngressos();*/



     private:
          list<Filme> filmes;
         /* list<Sessao> sessoes;
          list<Sala> salas;
          list<Poltrona> poltronas;
          list<Ingresso> ingressos;*/



};





#endif

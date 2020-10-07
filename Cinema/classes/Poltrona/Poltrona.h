#ifndef POLTRONA_H
#define POLTRONA_H

#include <stdbool.h>
#include "Coordenada.h"

class Poltrona
{
public:
    Poltrona();
    ~Poltrona();
    int getNumero();
    void setNumero(int numero);
    bool getEstado();
    void alterarEstado(bool estado);
    Coordenada getCoord();
    //  void setCoord(Coordenada coord);
    void cadastrar();
    void remover();
    void alterar(bool estado);

protected:

private:
    int numero;
    bool estado;    //0 = livre     1 = ocupado
    Coordenada coord;
};

#endif // POLTRONA_H
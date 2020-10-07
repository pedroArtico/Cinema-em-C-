#ifndef SALA_H
#define SALA_H
#include "../../../CinemaPooC/include/bancoCinema.h"


class Sala
{
    public:
        Sala();
        virtual ~Sala();
        int getId();
        char* getTipo();
        int getNumPoltronas();
        void setId(int i);
        void setTipo(char* t);
        void setNumPoltronas(int np);
        int cadastrar();
        int alterar();
        int remover();
    protected:
    private:
        int id;
        char *tipo;
        int numPoltronas;
        void setQueryInsert(char query[]);
        void setQueryUpdate(char query[]);
        void setQueryDelete(char query[]);
};

#endif // SALA_H

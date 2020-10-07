#ifndef SESSAO_H
#define SESSAO_H
#include "../../../CinemaPooC/include/Sala.h"

class Sessao
{
    public:
        Sessao();
        virtual ~Sessao();
        float getPrecoBase();
        int getIdSala();
        int getIdFilme();
        char* getData();
        int getIdPoltrona();
        void setPrecoBase(int pb);
        void setIdSala(int s);
        void setIdFilme(int f);
        void setData(char d[]);
        void setIdPoltrona(int p);

    protected:

    private:
        float precoBase;
        int idSala;
        int idFilme;
        char* data;
        int idPoltrona;
};

#endif // SESSAO_H

#include "Sessao.h"

Sessao::Sessao()
{
    //ctor
}

Sessao::~Sessao()
{
    //dtor
}
float Sessao::getPrecoBase()
{
    return precoBase;
}
int Sessao::getIdSala()
{
    return idSala;
}
int Sessao::getIdFilme()
{
    return idFilme;
}
char* Sessao::getData()
{
    return data;
}
int Sessao::getIdPoltrona()
{
    return idPoltrona;
}
void Sessao::setPrecoBase(int pb)
{
    precoBase=pb;
}
void Sessao::setIdSala(int s)
{
    idSala=s;
}
void Sessao::setIdFilme(int f)
{
    idFilme=f;
}
void Sessao::setData(char d[])
{
    data=d;
}
void Sessao::setIdPoltrona(int p)
{
    idPoltrona=p;
}

#include "Sala.h"
#include <stdio.h>
#include <string.h>



Sala::Sala()
{
    //ctor
}
Sala::~Sala()
{
    //dtor
}
int Sala::getId()
{
    return id;
}
char* Sala::getTipo()
{
    return tipo;
}
int Sala::getNumPoltronas()
{
    return numPoltronas;
}
void Sala::setId(int i)
{
        id=i;
}
void Sala::setTipo(char* t)
{
    tipo=t;
}
void Sala::setNumPoltronas(int np)
{
    numPoltronas=np;
}
void Sala::setQueryInsert(char query[])
{
    //char *query;
    char* queryBegin="INSERT INTO SALA VALUES (";
    char* queryEnd=");";
    char arg1[25];
    char arg2[25];
    char arg3[25];

    sprintf(arg1, "%d", id);
    sprintf(arg2, "'%s'", tipo);
    sprintf(arg3, "%d", numPoltronas);

    strcpy(query,queryBegin);
    strcat(query,arg1);
    strcat(query,",");
    strcat(query,arg2);
    strcat(query,",");
    strcat(query,arg3);
    strcat(query,queryEnd);

    //printf("%s",query);
    //return query;
}
void Sala::setQueryUpdate(char query[])
{
    //char *query;
    char* queryBegin="UPDATE SALA SET";
    char* queryEnd=";";
    char arg1[25];
    char arg2[25];
    char arg3[25];

    sprintf(arg2, " TIPO ='%s'", tipo);
    sprintf(arg3, " NUMPOLTRONAS = %d", numPoltronas);
     sprintf(arg1, " WHERE ID_SALA = %d", id);

    strcpy(query,queryBegin);
    strcat(query,arg2);
    strcat(query,",");
    strcat(query,arg3);
    strcat(query,arg1);
    strcat(query,queryEnd);

    //printf("%s",query);
    //return query;
}
void Sala::setQueryDelete(char query[])
{
    //char *query;
    char* queryBegin="DELETE FROM SALA WHERE ID_SALA =";
    char* queryEnd=";";
    char arg1[25];
     sprintf(arg1, " %d", id);

    strcpy(query,queryBegin);
    strcat(query,arg1);
    strcat(query,queryEnd);

    //printf("%s",query);
    //return query;
}
int Sala::cadastrar()
{
    bancoCinema bc =bancoCinema();
    char c[200];
    setQueryInsert(c);
    return bc.execQuery(c);
}
int Sala::alterar()
{
    bancoCinema bc =bancoCinema();
    char c[200];
    setQueryUpdate(c);
    return bc.execQuery(c);
}
int Sala::remover()
{
    bancoCinema bc =bancoCinema();
    char c[200];
    setQueryDelete(c);
    return bc.execQuery(c);
}






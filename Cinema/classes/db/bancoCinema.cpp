#include "bancoCinema.h"
#include <stdio.h>
#include <string.h>

static int callback(void *NotUsed, int argc, char **argv, char **azColName){
}
bancoCinema::bancoCinema()
{
    //ctor
}

bancoCinema::~bancoCinema()
{
    //dtor
}
int bancoCinema::open()
{
    rc = sqlite3_open("db.db", &db);
    if( rc ){
        return(0);
    }else{
        return(1);
    }
}
int bancoCinema::execQuery(char query[])
{
    int resp=1;
    if(open())
    {
        sql =query;
        //printf("%s",sql);
       /* Execute SQL statement */
       rc = sqlite3_exec(db,sql, callback, 0, &zErrMsg);
       if( rc != SQLITE_OK ){
          sqlite3_free(zErrMsg);
          resp=0;
       }
    }
    else
    {
       resp=0;
    }

    sqlite3_close(db);
    return(resp);
}


#ifndef BANCOCINEMA_H
#define BANCOCINEMA_H
#include "../../../CinemaPooC/sqlite3/sqlite3.h"

class bancoCinema
{
    public:
        bancoCinema();
        virtual ~bancoCinema();
        int execQuery(char query[]);

    protected:

    private:
        sqlite3 *db;
        char *zErrMsg = 0;
        int rc;
        char *sql;
        int open();


};

#endif // BANCOCINEMA_H

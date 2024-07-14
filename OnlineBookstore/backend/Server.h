#ifndef SERVER_H
#define SERVER_H

#include <pistache/endpoint.h>
#include "Database.h"

class Server {
public:
    Server(Pistache::Address addr, Database& db);
    void init(size_t threads = 2);
    void start();

private:
    void setupRoutes();
    Pistache::Rest::Router router;
    Database& database;
};

#endif

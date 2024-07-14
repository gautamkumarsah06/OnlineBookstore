#include "Server.h"

Server::Server(Pistache::Address addr, Database& db)
    : httpEndpoint(std::make_shared<Pistache::Http::Endpoint>(addr)), database(db) {}

void Server::init(size_t threads) {
    auto opts = Pistache::Http::Endpoint::options().threads(static_cast<int>(threads));
    httpEndpoint->init(opts);
    setupRoutes();
}

void Server::start() {
    httpEndpoint->setHandler(router.handler());
    httpEndpoint->serve();
}

void Server::setupRoutes() {
    using namespace Pistache::Rest;

    Routes::Get(router, "/books", Routes::bind(&Server::getBooks, this));
    // Implement other routes
}

#ifndef DATABASE_H
#define DATABASE_H

#include <sqlite3.h>
#include <string>
#include <vector>
#include "Book.h"

class Database {
public:
    Database(const std::string& dbPath);
    ~Database();
    bool addBook(const Book& book);
    std::vector<Book> getAllBooks();
    // Additional CRUD operations

private:
    sqlite3* db;
};

#endif

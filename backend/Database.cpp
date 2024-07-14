#include "Database.h"
#include <iostream>

Database::Database(const std::string& dbPath) {
    if (sqlite3_open(dbPath.c_str(), &db)) {
        std::cerr << "Can't open database: " << sqlite3_errmsg(db) << std::endl;
        db = nullptr;
    }
}

Database::~Database() {
    if (db) {
        sqlite3_close(db);
    }
}

bool Database::addBook(const Book& book) {
    // Implement add book functionality
}

std::vector<Book> Database::getAllBooks() {
    // Implement get all books functionality
}

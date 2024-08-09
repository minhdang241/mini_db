//
// Created by DANG BA MINH on 09/08/2024.
//
#include "include/minidb.h"
#include <iostream>

namespace MiniDB {
    Database::Database(const std::string&) {
        std::cout << "Database created" << std::endl;
    }

    auto Database::getDirectory() -> std::string {
        return "directory";
    }

    auto createEmptyDB(const std::string& db_name) -> std::string {
        return db_name;
    }
}
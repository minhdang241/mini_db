//
// Created by DANG BA MINH on 09/08/2024.
//

#ifndef MINI_DB_MINIDB_H
#define MINI_DB_MINIDB_H

#include <string>

namespace MiniDB {
    class Database {
    public:
        explicit Database(const std::string&);
        static auto getDirectory() -> std::string;
    };

    auto createEmptyDB(const std::string& db_name) -> std::string;
}

#endif //MINI_DB_MINIDB_H

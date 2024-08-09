//
// Created by DANG BA MINH on 09/08/2024.
//
#include <filesystem>
#include "catch_amalgamated.hpp"
#include "minidb.h"

TEST_CASE("Create a new empty database", "[createEmptyDB]" ) {
    SECTION("Create a new empty database with default settings") {
        std::string db_name  = "testdb";

        MiniDB::Database db(MiniDB::createEmptyDB(db_name));
        // If there is an error while creating the database, the program will throw an exception
        // Check if the database directory is created
        REQUIRE(std::filesystem::is_directory(db.getDirectory()));

        // Check if the folder is empty
        REQUIRE(std::filesystem::is_empty(db.getDirectory()));
    }
}



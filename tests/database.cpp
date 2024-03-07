#include <iostream>
#include <string>

#include "sqlite3/sqlite3.h"

int main()
{
	char dbFolder[] = "db/DB.db";

	sqlite3* db;
	int rc;
	rc = sqlite3_open(dbFolder, &db);

	if (rc != SQLITE_OK)
		std::cout << "Error opening the file!" << std::endl;
	else
		std::cout << "Sucessful!" << std::endl;

	return 0;
}
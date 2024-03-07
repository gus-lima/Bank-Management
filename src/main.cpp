#include <format>
#include <iostream>
#include <string>
#include <fstream>

#include "sqlite3/sqlite3.h"

struct X
{
	enum dbOperation
	{
		checkDatabase,
		openAccount,
		accountDetails,
		withdrawMoney
	};
};
X x;
X* p = &x;


int checkDatabase(int operation)
{

	switch (operation)
	{
		case 0:
		{
			std::cout << "Check Database Operation initialized!";
			char dbFolder[] = "db/DB.db";
			sqlite3* db;
			int rc;
			rc = sqlite3_open(dbFolder, &db);

			if (rc != SQLITE_OK)
			{
				std::cout << "Error opening the file!" << std::endl;
				return 1;
			}

			else
			{
				//std::cout << "Sucessful!" << std::endl;
				return 0;
			}

			break;
		}

		default:
		{
			break;
		}
	}
	
}

void openAccount()
{

	// 07/03 00:56 TODO: Add while loop validation before inputing data to database

	std::string usernameInput;
	std::string passwordInput;

	std::cout << "\nUsername: ";
	std::cin >> usernameInput;

	//TODO: Use windows.h to handle password input
	std::cout << "\nPassword: ";
	std::cin >> passwordInput;


	////ios::in		Open for input operations.
	////ios::out		Open for output operations.
	////ios::binary	Open in binary mode.
	////ios::ate		Set the initial position at the end of the file.
	////				If this flag is not set, the initial position is the beginning of the file.
	////ios::app		All output operations are performed at the end of the file, appending the content to the current content of the file.
	////ios::trunc	If the file is opened for output operations and it already existed, its previous content is deleted and replaced by the new one.
	////Source: https://cplusplus.com/doc/tutorial/files/

	//database.open(databasePath, ios::out);

}

void accountDetails()
{

}

void withdrawMoney()
{

}


int main(int argc, char *argv[])
{
	//TODO: Check system to clear console
	
	checkDatabase(X::checkDatabase);

	char userSelection;

	std::cout << "Banking System:\nWhat operation you'd like to do?\n";
	
	while(true)
	{
		std::cout << "[O]pen Account\n[A]ccount Details\n[W]ithdraw\n[E]xit\n> ";
		std::cin >> userSelection;
	
		userSelection = std::tolower(userSelection);

		switch (userSelection)
		{
			// Open Account
			case 'o':
				
				openAccount();

				break;

			// Acount Details 
			case 'a':
				
				break;

			// Withdraw money
			case 'w':
				
				break;

			// Exit program
			case 'e':
				
				break;

			default:
				break;
		}

		break;
	}

	return 0;
}
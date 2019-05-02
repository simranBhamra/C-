//Simran Bhamra
#include "invmenu.h"
#include "bookdata.h"
#include <iostream>

using namespace std;

//20 books
int const SIZE = 20; 

void invMenu()
{
	int choice = 0;
//menu for the user
	while (choice != 5)
	{
		cout << "Serendipity Booksellers\n";
		cout << "   Inventory Database\n\n";

		cout << "1. Look Up a Book\n";
		cout << "2. Add a Book\n";
		cout << "3. Edit a Book's Record\n";
		cout << "4. Delete a Book\n";
		cout << "5. Return to the Main Menu\n\n";

		cout << "Enter Your Choice: ";
		cin >> choice;


		//validate input
		while (choice < 1 || choice > 5)
		{
			cout << "\nPlease enter a number in the range 1 - 5\n";
			cout << "Enter your choice: ";
			cin >> choice;
		}

		switch (choice)
		{
		case 1:
			lookUpBook();
			break;
		case 2:
			addBook();
			break;
		case 3:
			editBook();
			break;
		case 4:
			deleteBook();
			break;
		case 5:
			cout << "\nYou selected item 5";
			break;
		}

		cout << endl;
	}//end while choice !=5
}

void lookUpBook()
{
	cout << "\nYou selected Look Up Book.\n";
}

void addBook()
{
	cout << "\nYou selected add book.\n"; 
}

void editBook()
{
	cout << "\nYou selected Edit Book.\n";
}

void deleteBook()
{
	cout << "\nYou selected Delete Book.\n";
}



int findBook( ) {
	
	cout << "\nYou selected find book.\n"; 
}

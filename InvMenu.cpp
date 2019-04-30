//Simran Bhamra
#include "invmenu.h"
#include "bookdata.h"
#include <iostream>

using namespace std;

int const SIZE = 20; 

void invMenu()
{
	int choice = 0;

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
	char title[SIZE];
	char isbn[SIZE];
	char publisher[SIZE];
	char author[SIZE];
	char date[SIZE];
	int  quantity;
	double wholesale;
	double retail;
	int x;

	for (x= 0;  x< 20; x++)
	{
		//find the first book whose element is 0
		if (isEmpty(x))
		{
			cin.ignore();
			cout << "Enter Title: ";
			cin.getline(title, SIZE);
			setBookTitle(title, x);

			cout << "Enter ISBN :";
			cin.getline(isbn, STR_SIZE);
			setISBN(isbn, row);

			cout << "Enter Author :";
			cin.getline(author, STR_SIZE);
			setAuthor(author, row);

			cout << "Enter Publisher :";
			cin.getline(publisher, STR_SIZE);
			setPub(publisher, row);

			cout << "Enter Date Added to Inventory :";
			cin.getline(date, STR_SIZE);
			setDateAdded(date, row);

			cout << "Enter Quantity Added :";
			cin >> quantity;
			setQty(quantity, row);

			cout << "Enter Wholesale Price :";
			cin >> wholesale;
			setWholesale(wholesale, row);

			cout << "Enter Retail Price:";
			cin >> retail;
			setRetail(retail, row);

			cout << "\n\nRecord was entered.";
			break;
		} //end if	
		cout << "No more books may be added\n";
	} //end for loop
}

void editBook()
{
	cout << "\nYou selected Edit Book.\n";
}

void deleteBook()
{
	cout << "\nYou selected Delete Book.\n";
}


//start of find book function, not complete 
int findBook( ) {
	string search; 
	cout << "Enter the ISBN number you would like to search" << endl; 
	cin >> search; 

}
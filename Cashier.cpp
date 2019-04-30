//Simran Bhamra
#include "cashier.h"
#include "bookdata.h"
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

void cashier()
{
	const double SALES_TAX = 0.06; 

	string date;
	string isbn;
	string title;
	int quantity;
	double price;
	double subtotal;
	double tax;
	double total;
	char again;

	do
	{
		cout << "Serendipity Booksellers\n";
		cout << "  Cashier Module\n\n";

		cin.ignore();

		cout << "Enter Date: ";
		getline(cin, date);

		cout << "Quantity of the Book: ";
		cin >> quantity;

		cin.ignore(); //ignore the newline characted when enter is pressed

		cout << "ISBN: ";
		getline(cin, isbn);

		cout << "Title: ";
		getline(cin, title);

		cout << "Price: ";
		cin >> price;

		//calcualtions
		subtotal = quantity * price;
		tax = subtotal * SALES_TAX;
		total = subtotal + tax;

		cout << "Date: " << date << " \n\n";

		cout << "Qty\tISBN\t\tTitle\t\t\t\tPrice\t\tTotal\n";
		cout << "____________________________________________________________________________________";
		cout << "\n\n\n";

		//inline information
		cout << quantity << "\t"; //display quantity
		cout << left << setw(14) << isbn << "\t"; //display ISBN
		cout << left << setw(26) << title << "\t$ "; //displays title
		cout << fixed << showpoint << right << setprecision(2); //set up number formatting
		cout << setw(6) << price << "\t$ "; //display price
		cout << setw(6) << subtotal << "\n\n\n"; //display subtotal in line

		//calculated totals
		cout << "\t\tSubtotal\t\t\t\t\t\t$ ";
		cout << setw(6) << subtotal << "\n";
		cout << "\t\tTax\t\t\t\t\t\t\t$ ";
		cout << setw(6) << tax << "\n";
		cout << "\t\tTotal\t\t\t\t\t\t\t$ ";
		cout << setw(6) << total << "\n\n";

		cout << "\n\nThank you for shopping at Serendipity!\n";

		cout << "Process another transaction (Y/N) ";
		cin >> again;
		cin.ignore();
		cout << endl;
	} while (again == 'Y' || again == 'y');
}
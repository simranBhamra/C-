//Simran Bhamra
#include "bookdata.h"
#include "reports.h"
#include <iostream>

using namespace std;


//reports function presents the menu then enters a switch case to call the correct functions
void reports()
{
	int choice = 0;
//menu
	while (choice != 7)
	{

		cout << "Serendipity Booksellers\n";
		cout << "\tReports\n\n";

		cout << "1. Inventory Listing\n";
		cout << "2. Inventory Wholesale Value\n";
		cout << "3. Inventory Retail Value\n";
		cout << "4. Listing by Quantity\n";
		cout << "5. Listing by Cost\n";
		cout << "6. Listing by Age\n";
		cout << "7. Return to the Main Menu\n\n";

		cout << "Enter Your Choice: ";
		cin >> choice;

		//validate input
		while (choice < 1 || choice > 7)
		{
			cout << "\nPlease enter a number in the range 1 - 7\n";
			cout << "Enter your choice: ";
			cin >> choice;
		}
		
		//switch case for choices
			switch (choice)
			{
			case 1:
				repListing();
				break;
			case 2:
				repWholesale();
				break;
			case 3:
				repRetail();
				break;
			case 4:
				repQty();
				break;
			case 5:
				repCost();
				break;
			case 6:
				repAge();
				break;
			case 7:
				cout << "\nYou selected item 7";
				break;
			}

		cout << endl;

	}//end while choice !=7
}

void repListing()
{
	cout << "\nYou selected Inventory Listing.\n";
}

void repWholesale()
{
	cout << "\nYou selected Inventory Wholesale Value.\n";
}

//function will allow the user to find the retail values for the books in the inventory 
void repRetail()
{
	cout << "\nYou selected Inventory Retail Value.\n";
}

//function will present the quanity of each type of book in the inventory 
void repQty()
{
	cout << "\nYou selected Inventory Listing by Quantity.\n";
}

//function will show the inventory by cost 
void repCost()
{
	cout << "\nYou selected Inventory Listing by Cost.\n";
}

//function will allow the user to view the age of the books in the inventory 
void repAge()
{
	cout << "\nYou selected Inventory Listing by Age.\n";
}

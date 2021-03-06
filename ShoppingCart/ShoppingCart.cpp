// Jonathan Vertiz
// ITSE 1307
// Shopping Cart
// ShoppingCart.cpp : User puts in up to 5 items and enters their price, if it is at or exceeds 200 it recieves free shipping.

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	//Take in all the values we need to get started
	int intAmount = 0;
	int intMax = 6;
	double dblPrice = 0.0;
	double dblPriceChange = 0.0;

	//Display information to the user and prompt to enter in the amount of items
	cout << "*NOTE* TRANSACTIONS OF $200 OR MORE IN VALUE RECEIVE FREE SHIPPING" << endl
		<< "TRANSACTIONS THAT FALL UNDER WILL BE CHARGED $10 PER ITEM" << endl;
	cout << "Please enter the amount of items(up to 5 can be added at a time): ";
	cin >> intAmount;

	//Switch statement that allows for the input of the amount of items the user chooses
	switch (intAmount)
	{
		case 1:
			cout << "enter price of item: ";
			cin >> dblPrice;
			break;
		case 2:
			cout << "enter price of item: ";
			cin >> dblPrice;
			cout << "enter price of item: ";
			cin >> dblPriceChange;
			dblPrice = dblPrice + dblPriceChange;
			break;
		case 3:
			cout << "enter price of item: ";
			cin >> dblPriceChange;
			cout << "enter price of item: ";
			cin >> dblPrice;
			dblPriceChange = dblPrice + dblPriceChange;
			cout << "enter price of item: ";
			cin >> dblPrice;
			dblPrice = dblPrice + dblPriceChange;
			break;
		case 4:
			cout << "enter price of item: ";
			cin >> dblPrice;
			cout << "enter price of item: ";
			cin >> dblPriceChange;
			dblPrice = dblPrice + dblPriceChange;
			cout << "enter price of item: ";
			cin >> dblPriceChange;
			dblPriceChange = dblPrice + dblPriceChange;
			cout << "enter price of item: ";
			cin >> dblPrice;
			dblPrice = dblPrice + dblPriceChange;
			break;
		case 5:
			cout << "enter price of item: ";
			cin >> dblPriceChange;
			cout << "enter price of item: ";
			cin >> dblPrice;
			dblPriceChange = dblPrice + dblPriceChange;
			cout << "enter price of item: ";
			cin >> dblPrice;
			dblPrice = dblPrice + dblPriceChange;
			cout << "enter price of item: ";
			cin >> dblPriceChange;
			dblPriceChange = dblPrice + dblPriceChange;
			cout << "enter price of item: ";
			cin >> dblPrice;
			dblPrice = dblPrice + dblPriceChange;
			break;
		default:
			cout << "Too many items..." << endl;
	}

	//If statement that tells if the transaction is at or beyound 200
	if (dblPrice >= 200.00)
	{
		cout << "Checkout Price: $" << dblPrice << endl
			<< "Thank you." << endl;
	}
	else if (dblPrice < 200.00)
	{
		dblPrice = dblPrice + (10.00 * intAmount);
		cout << "Checkout Price: $" << dblPrice << endl
			<< "Thank you." << endl;
	}
    return 0;
}

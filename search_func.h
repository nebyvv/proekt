#pragma once
using namespace std;
#include "compare.h"
#include "ShowFunc.h"
void searchMarka(const Car* cars, int length, const char* marka) {
	system("cls");

	cout << "Cars by brand - " << marka << "\n" << endl;
	bool found = false;

	for (int i = 0; i < length; i++) {
		if (compareString(cars[i].marka, marka) == 0) {
			showCar(cars, length);
			found = true;
		}
	}
	if (!found) {
		cout << "There is no such car!" << endl;
	}
}

void searchColor(const Car* cars, int length, const char* color) {
	system("cls");

	cout << "Cars by brand - " << color << ":\n" << endl;
	bool found = false;
	for (int i = 0; i < length; i++) {
		if (compareString(cars[i].color, color) == 0) {
			showCar(cars, length);
			found = true;
		}
	}
	if (!found) {
		cout << "There is no such car!" << endl;
	}
}

void searchRegistrationNumber(const Car* cars, int length, const char* registration_mark) {
	system("cls");

	cout << "Car by registration number - " << registration_mark << ":\n" << endl;
	bool tmp = false;
	for (int i = 0; i < length; i++) {
		if (strcmp(cars[i].registration_mark, registration_mark) == 0) {
			showCar(cars, length);
			tmp = true;
		}
	}
	if (!tmp) {
		cout << "There is no car with this registration number!" << endl;
	}
}

void searchYearofIssue(const Car* cars, int length, int year_of_issue) {
	system("cls");

	cout << "Cars by year of issue - " << year_of_issue << ":\n" << endl;
	bool tmp = false;
	for (int i = 0; i < length; i++) {
		if (cars[i].year_of_issue == year_of_issue) {
			showCar(cars, length);
			tmp = true;
			cout << endl;
		}
	}
	if (!tmp) {
		cout << "There is no car with this year of manufacture!" << endl;
	}
}

void searchContractByClientName(Contract* contracts, const char* clientName, const char* clientSurname, const Klient* clients, int& length) {
	system("cls");

	cout << "Contracts for client (" << clientName << "," << clientSurname << "):" << endl;
	bool tmp = false;
	for (int i = 0; i < length; i++) {
		if (compareString(clients[i].name, clientName) == 0 &&
			compareString(clients[i].surname, clientSurname) == 0) {
			cout << "Contract " << i + 1 << ":\n\n";
			cout << "Client name: " << contracts[i].client_name << "\n";
			cout << "Client surname: " << contracts[i].client_surname << "\n";
			cout << "Registration number: " << contracts[i].con_registration_mark << "\n";
			cout << "Rental date: " << contracts[i].rental_date << "\n";
			cout << "Price for (1) day: " << contracts[i].price_oneDay << "$" << "\n";
			cout << "How many days: " << contracts[i].rent_date << "day" << "\n";
			cout << "Total amount: " << contracts[i].debt << "$" << "\n";

			tmp = true;
		}
	}
	if (!tmp) {
		cout << "This clint doesn't have a contract!" << endl;

	}
}
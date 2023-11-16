#pragma once
using namespace std;
#include "compare.h"
Car* addCar(Car* car, int& length) {
	system("cls");

	Car newCar;
	cout << "Enter the make of the car: ";
	cin >> newCar.marka;
	cout << "Enter your car model: ";
	cin >> newCar.model;
	cout << "Enter car color: ";
	cin >> newCar.color;
	cout << "Enter the year of manufacture of the car: ";
	cin >> newCar.year_of_issue;
	cout << "Enter car numebr: ";
	cin >> newCar.registration_mark;

	if (length == 0) {
		car = new Car[1];
		car[0] = newCar;
	}
	else {
		Car* newCars = new Car[length + 1];
		for (int i = 0; i < length; i++) {
			newCars[i] = car[i];
		}
		newCars[length] = newCar;
		delete[] car;
		car = newCars;
	}

	length++;
	cout << "Car added" << endl;

	return car;
}

Klient* addClient(Klient* client, int& length) {
	system("cls");

	Klient* clients = new Klient[length + 1];

	Klient newClient;
	cout << "Enter the name: ";
	cin >> newClient.name;
	cout << "Enter the surname: ";
	cin >> newClient.surname;
	cout << "Enter the middle name: ";
	cin >> newClient.middle_name;

	for (int i = 0; i < length; i++) {
		clients[i] = client[i];
	}


	clients[length] = newClient;
	delete[] client;
	length++;
	cout << "Client upped" << endl;

	return clients;
}

Contract* addContract(Contract* contract, int& length, const char* clientName, const char* clientSurname, const char* regNumber, char* rentalDate, double pricePerDay, int days, double debt, Car* cars, int& lengthCars, Klient* client, int& length_Client) {
	system("cls");

	bool checkNumber = false;

	for (int i = 0; i < lengthCars; i++) {
		if (strcmp(cars[i].registration_mark, regNumber) == 0)
		{
			checkNumber = true;
			break;
		}
	}
	if (!checkNumber) {
		cout << "There is no such registration number!" << endl;
		return contract;
	}

	bool checkClient = false;
	for (int i = 0; i < length_Client; i++) {
		if (compareString(client[i].name, clientName) == 0 &&
			compareString(client[i].surname, clientSurname) == 0) {
			checkClient = true;
			break;
		}
	}

	if (!checkClient) {
		cout << "There is no such client!" << endl;
		return contract;
	}

	Contract* contracts = new Contract[length];

	Contract newContract;
	strcpy_s(newContract.client_name, clientName);
	strcpy_s(newContract.client_surname, clientSurname);
	strcpy_s(newContract.con_registration_mark, regNumber);
	strcpy_s(newContract.rental_date, rentalDate);
	newContract.price_oneDay = pricePerDay;
	newContract.rent_date = days;
	newContract.debt = pricePerDay * days;

	for (int i = 0; i < length; i++) {
		contracts[i] = contract[i];
	}

	contract[length] = newContract;
	//delete[] contract;
	length++;
	cout << "Contract added" << endl;
	return contracts;

}

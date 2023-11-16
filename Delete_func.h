#pragma once
using namespace std;
#include "compare.h"

Car* removeCar(Car* cars, int& length, const char* registration_mark) {
	system("cls");

	for (int i = 0; i < length; i++)
	{
		if (strcmp(cars[i].registration_mark, registration_mark) == 0) {
			for (int j = i; j < length - 1; j++)
			{
				cars[j] = cars[j + 1];
			}
			length--;
			cout << "Car removed\n" << endl;
			return cars;
		}
	}
	cout << "No such car found!\n" << endl;
	return cars;
}

Klient* removeClient(Klient* clients, int& length, Contract* contracts, int& length_cont, char* name, char* surname) {
	system("cls");

	for (int i = 0; i < length; i++) {
		if (compareString(clients[i].name, name) == 0 && compareString(clients[i].surname, surname) == 0) {
			for (int j = i; j < length - 1; j++)
			{
				clients[j] = clients[j + 1];
			}
			length--;

			for (int j = 0; j < length_cont; j++) {
				if (compareString(contracts[j].client_name, name) ||
					compareString(contracts[j].client_surname, surname) == 0) {
					for (int d = j; d < length_cont - 1; d++)
					{
						contracts[d] = contracts[d + 1];
					}
					length_cont--;
				}
			}
			cout << "Ñlient removed\n" << endl;
			return clients;
		}
	}
	cout << "No such client found!\n" << endl;
	return clients;
}
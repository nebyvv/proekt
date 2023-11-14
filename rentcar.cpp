#include <iostream>
#include <string.h>
#include <conio.h>
#include <iomanip>
#include <Windows.h>
#include <cstring>
#include <fstream>
#include "struct.h"
#include "Add_Func.h"
#include "search_func.h"
#include "Delete_func.h"
#include "ShowFunc.h"
#include "compare.h"
#include "file.h"

using namespace std;


void showMenu();

int compareString(const char* chr1, const char* chr2);

Car* addCar(Car* car, int& length);

Car* removeCar(Car* cars, int& length, const char* registration_mark);

Klient* removeClient(Klient* clients, int& length, Contract* contracts, int& length_cont, char* name, char* surname);

Klient* addClient(Klient* client, int& length);

Contract* addContract(Contract* contract, int& length, const char* clientName, const char* clientSurname, const char* regNumber, char* rentalDate, double pricePerDay, int days, double debt, Car* cars, int& lengthCars, Klient* client, int& length_Client);

void showCar(const Car* cars, int length);

void showClient(const Klient* clients, int length);

void searchMarka(const Car* cars, int length, const char* marka);

void searchColor(const Car* cars, int length, const char* color);

void searchRegistrationNumber(const Car* cars, int length, const char* registration_mark);

void searchYearofIssue(const Car* cars, int length, int year_of_issue);

void searchContractByClientName(Contract* contracts, const char* clientName, const char* clientSurname, const Klient* clients, int& length);

void showAllContracts(const Contract* contracts, int length);

void animateLoading();

void welcomeScreen();


void File();

int main() {
	system("cls");

	File();

	welcomeScreen();


	int length = 1, choice{};
	int length_client = 1;
	int length_cont = 0;

	Car* menu = new Car[length];
	Klient* menu_clients = new Klient[length_client];
	Contract* contracts = new Contract[length_cont];

	menu[0] = { "Bmw", "F30", "White", 2016, "90-UG-555"};
	menu_clients[0] = { "Ruslan", "Nabiyev", "Rasul" };
	cout << "\n";
	while (true)
	{
		showMenu();
		
		cin >> choice;


		switch (choice)
		{
		case 1: {
			char marka[30];
			cout << "Enter the brand search: ";
			cin >> marka;
			searchMarka(menu, length, marka);
			system("pause");
			break;
		}
		case 2: {
			char color[30];
			cout << "Enter the color search: ";
			cin >> color;
			searchColor(menu, length, color);
			system("pause");

			break;
		}
		case 3: {
			char regis_number[30];
			cout << "Enter the registration number search: ";
			cin >> regis_number;
			searchRegistrationNumber(menu, length, regis_number);
			system("pause");

			break;
		}
		case 4: {
			int year;
			cout << "Enter the year of issue search: ";
			cin >> year;
			searchYearofIssue(menu, length, year);
			system("pause");

			break;
		}
		case 5: {
			char client_name[20];
			char client_surname[20];
			cout << "Enter the client name: ";
			cin >> client_name;
			cout << "Enter the client name: ";
			cin >> client_surname;
			animateLoading();
			searchContractByClientName(contracts, client_name, client_surname, menu_clients, length_cont);
			system("pause");

			break;
		}
		case 6: {
			menu = addCar(menu, length);
			system("pause");
			break;
			
		}
		case 7: {
			menu_clients = addClient(menu_clients, length_client);
			system("pause");

			break;
			
		}
		case 8: {
			char clientName[20];
			char clientSurname[20];
			char regNumber[30];
			char rentalDate[20];
			double pricePerDay;
			int  daysRent;
			cout << "Enter client name: ";
			cin >> clientName;
			cout << "Enter client surname: ";
			cin >> clientSurname;
			cout << "Enter car registration number: ";
			cin >> regNumber;
			cout << "Enter rental date: ";
			cin >> rentalDate;
			cout << "Enter price per day: ";
			cin >> pricePerDay;
			cout << "Enter how many days in advance you want to rent: ";
			cin >> daysRent;
			addContract(contracts, length_cont, clientName, clientSurname, regNumber, rentalDate, pricePerDay, daysRent, daysRent, menu, length, menu_clients, length_client);
			system("pause");
			break;
		}
		case 9: {
			

			animateLoading();
			showCar(menu, length);
			system("pause");

			if (length == 0) {
				cout << "There are no cars at the moment!\n" << endl;
			}
			break;
		}
		case 10: {
			
			animateLoading();
			showClient(menu_clients, length_client);
			system("pause");

			if (length_client == 0) {
				cout << "There are no cars at the moment!\n" << endl;
			}
			break;
		}
		case 11: {
		
			animateLoading();
			showAllContracts(contracts, length_cont);
			system("pause");

			if (length_client == 0) {
				cout << "There are no cars at the moment!\n" << endl;
			}
			break;
		}
		case 12: {
			char registartion_mark[30];
			cout << "Enter the car registratrion num remove: ";
			cin >> registartion_mark;
			menu = removeCar(menu, length, registartion_mark);
			system("pause");
			break;
		}
		case 13: {
			char name[20];
			char surname[20];
			cout << "Enter the name remove: ";
			cin >> name;
			cout << "Enter the surname remove: ";
			cin >> surname;

			menu_clients = removeClient(menu_clients, length_client, contracts, length_cont, name, surname);
			system("pause");
			break;
			
		}
		case 14: {
			char clientName[20];
			char clientSurname[20];

			cout << "Enter the client name: ";
			cin >> clientName;

			cout << "Enter the client surname: ";
			cin >> clientSurname;

			bool tmp = false;
			for (int i = 0; i < length_cont; i++) {
				if (compareString(contracts[i].client_name, clientName) == 0 &&
					compareString(contracts[i].client_surname, clientSurname) == 0) {

					for (int j = i; j < length - 1; j++)
					{
						contracts[j] = contracts[j + 1];
					}
					length_cont--;
					cout << "Contract removed!" << endl;
					tmp = true;
					break;
				}
			}
			if (!tmp) {
				cout << "This clint doesn't have a contract!" << endl;

			}
			system("pause");
			break;
		}
		case 15: 
			cout << "Exiting the program." << endl;
			delete[] menu;
			delete[] menu_clients;
			delete[] contracts;
			return 0;
		default:
			cout << "There is no such option!" << endl;
		}

	}

	
}




//#include <iostream>
//#include <string.h>
//#include <conio.h>
//#include <iomanip>
//#include <Windows.h>
//#include <cstring>
//
//using namespace std;
//
//struct Car
//{
//	char marka[30];
//	char model[30];
//	char color[30];
//	int year_of_issue;
//	char registration_mark[30];
//};
//
//struct Klient
//{
//	char name[20];
//	char surname[20];
//	char middle_name[20];
//};
//
//struct Contract
//{
//	char client_name[20];
//	char client_surname[20];
//	char con_registration_mark[30];
//	char rental_date[20];
//	double price_oneDay;
//	int rent_date;
//	double debt;
//};
//
//void showMenu();
//
//int compareString(const char* chr1, const char* chr2);
//
//Car* addCar(Car* car, int& length);
//
//Car* removeCar(Car* cars, int& length, const char* registration_mark);
//
//Klient* removeClient(Klient* clients, int& length, Contract* contracts, int& length_cont, char* name, char* surname);
//
//Klient* addClient(Klient* client, int& length);
//
//Contract* addContract(Contract* contract, int& length, const char* clientName, const char* clientSurname, const char* regNumber, char* rentalDate, double pricePerDay, int days, double debt, Car* cars, int& lengthCars, Klient* client, int& length_Client);
//
//void showCar(const Car* cars, int length);
//
//void showClient(const Klient* clients, int length);
//
//void searchMarka(const Car* cars, int length, const char* marka);
//
//void searchColor(const Car* cars, int length, const char* color);
//
//void searchRegistrationNumber(const Car* cars, int length, const char* registration_mark);
//
//void searchYearofIssue(const Car* cars, int length, int year_of_issue);
//
//void searchContractByClientName(Contract* contracts, const char* clientName, const char* clientSurname, const Klient* clients, int& length);
//
//void showAllContracts(const Contract* contracts, int length);
//
//void animateLoading();
//
//void welcomeScreen();
//
//int main() {
//	system("cls");
//
//	welcomeScreen();
//	/*HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
//
//	SetConsoleTextAttribute(handle, FOREGROUND_RED);
//
//	cout << "\t\t.______       _______ .__   __. .___________.     ______      ___      .______      " << endl;
//	cout << "\t\t|   _  \\     |   ____||  \\ |  | |           |    /      |    /   \\     |   _  \\     " << endl;
//	cout << "\t\t|  |_)  |    |  |__   |   \\|  | `---|  |----`   |  ,----'   /  ^  \\    |  |_)  |    " << endl;
//	cout << "\t\t|      /     |   __|  |  . `  |     |  |        |  |       /  /_\\  \\   |      /     " << endl;
//	cout << "\t\t|  |\\  \\----.|  |____ |  |\\   |     |  |        |  `----. /  _____  \\  |  |\\  \\----." << endl;
//	cout << "\t\t| _| `._____||_______||__| \\__|     |__|         \\______|/__/     \\__\\ | _| `._____|" << endl;
//	cout << "________________________________________________________________________________________________________________________" << endl;*/
//
//
//	int length = 1, choice{};
//	int length_client = 1;
//	int length_cont = 0;
//
//	Car* menu = new Car[length];
//	Klient* menu_clients = new Klient[length_client];
//	Contract* contracts = new Contract[length_cont];
//
//	menu[0] = { "Bmw", "F30", "White", 2016, "90-UG-555" };
//	menu_clients[0] = { "Ruslan", "Nabiyev", "Rasul" };
//	cout << "\n";
//	while (true)
//	{
//		showMenu();
//
//		cin >> choice;
//		//cout << "________________________________________________________________________________________________________________________" << endl;
//
//
//		switch (choice)
//		{
//		case 1: {
//			char marka[30];
//			cout << "Enter the brand search: ";
//			cin >> marka;
//			searchMarka(menu, length, marka);
//			system("pause");
//			break;
//		}
//		case 2: {
//			char color[30];
//			cout << "Enter the color search: ";
//			cin >> color;
//			searchColor(menu, length, color);
//			system("pause");
//
//			break;
//		}
//		case 3: {
//			char regis_number[30];
//			cout << "Enter the registration number search: ";
//			cin >> regis_number;
//			searchRegistrationNumber(menu, length, regis_number);
//			system("pause");
//
//			break;
//		}
//		case 4: {
//			int year;
//			cout << "Enter the year of issue search: ";
//			cin >> year;
//			searchYearofIssue(menu, length, year);
//			system("pause");
//
//			break;
//		}
//		case 5: {
//			char client_name[20];
//			char client_surname[20];
//			cout << "Enter the client name: ";
//			cin >> client_name;
//			cout << "Enter the client name: ";
//			cin >> client_surname;
//			animateLoading();
//			searchContractByClientName(contracts, client_name, client_surname, menu_clients, length_cont);
//			system("pause");
//
//			break;
//		}
//		case 6: {
//			menu = addCar(menu, length);
//			system("pause");
//			break;
//
//		}
//		case 7: {
//			menu_clients = addClient(menu_clients, length_client);
//			system("pause");
//
//			break;
//
//		}
//		case 8: {
//			char clientName[20];
//			char clientSurname[20];
//			char regNumber[30];
//			char rentalDate[20];
//			double pricePerDay;
//			int  daysRent;
//			cout << "Enter client name: ";
//			cin >> clientName;
//			cout << "Enter client surname: ";
//			cin >> clientSurname;
//			cout << "Enter car registration number: ";
//			cin >> regNumber;
//			cout << "Enter rental date: ";
//			cin >> rentalDate;
//			cout << "Enter price per day: ";
//			cin >> pricePerDay;
//			cout << "Enter how many days in advance you want to rent: ";
//			cin >> daysRent;
//			addContract(contracts, length_cont, clientName, clientSurname, regNumber, rentalDate, pricePerDay, daysRent, daysRent, menu, length, menu_clients, length_client);
//			system("pause");
//			break;
//		}
//		case 9: {
//			/*for (int i = 0; i < length; i++)
//			{
//				cout << "Car " << i + 1 << endl;
//				showCar(menu[i]);
//				cout << endl;
//			}*/
//
//			animateLoading();
//			showCar(menu, length);
//			system("pause");
//
//			if (length == 0) {
//				cout << "There are no cars at the moment!\n" << endl;
//			}
//			break;
//		}
//		case 10: {
//			/*for (int i = 0; i < length_client; i++)
//			{
//				cout << "Client " << i + 1 << endl;
//				showClient(menu_clients[i]);
//				cout << endl;
//			}*/
//			animateLoading();
//			showClient(menu_clients, length_client);
//			system("pause");
//
//			if (length_client == 0) {
//				cout << "There are no cars at the moment!\n" << endl;
//			}
//			break;
//		}
//		case 11: {
//			/*for (int i = 0; i < length_cont; i++)
//			{
//				cout << "Contract " << i + 1 << endl;
//				showAllContracts(contracts[i]);
//			}
//			if (length_cont == 0) {
//				cout << "There are no cars at the moment!\n" << endl;
//			}*/
//			animateLoading();
//			showAllContracts(contracts, length_cont);
//			system("pause");
//
//			if (length_client == 0) {
//				cout << "There are no cars at the moment!\n" << endl;
//			}
//			break;
//		}
//		case 12: {
//			char registartion_mark[30];
//			cout << "Enter the car registratrion num remove: ";
//			cin >> registartion_mark;
//			menu = removeCar(menu, length, registartion_mark);
//			system("pause");
//			break;
//		}
//		case 13: {
//			char name[20];
//			char surname[20];
//			cout << "Enter the name remove: ";
//			cin >> name;
//			cout << "Enter the surname remove: ";
//			cin >> surname;
//
//			menu_clients = removeClient(menu_clients, length_client, contracts, length_cont, name, surname);
//			system("pause");
//			break;
//
//		}
//		case 14: {
//			char clientName[20];
//			char clientSurname[20];
//
//			cout << "Enter the client name: ";
//			cin >> clientName;
//
//			cout << "Enter the client surname: ";
//			cin >> clientSurname;
//
//			bool tmp = false;
//			for (int i = 0; i < length_cont; i++) {
//				if (compareString(contracts[i].client_name, clientName) == 0 &&
//					compareString(contracts[i].client_surname, clientSurname) == 0) {
//
//					for (int j = i; j < length - 1; j++)
//					{
//						contracts[j] = contracts[j + 1];
//					}
//					length_cont--;
//					cout << "Contract removed!" << endl;
//					tmp = true;
//					break;
//				}
//			}
//			if (!tmp) {
//				cout << "This clint doesn't have a contract!" << endl;
//
//			}
//			system("pause");
//			break;
//		}
//		case 15:
//			cout << "Exiting the program." << endl;
//			delete[] menu;
//			delete[] menu_clients;
//			delete[] contracts;
//			return 0;
//		default:
//			cout << "There is no such option!" << endl;
//		}
//
//	}
//
//
//}
//
//void welcomeScreen() {
//	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
//	SetConsoleTextAttribute(handle, FOREGROUND_RED);
//
//	cout << "\t\t.______       _______ .__   __. .___________.     ______      ___      .______      " << endl;
//	cout << "\t\t|   _  \\     |   ____||  \\ |  | |           |    /      |    /   \\     |   _  \\     " << endl;
//	cout << "\t\t|  |_)  |    |  |__   |   \\|  | `---|  |----`   |  ,----'   /  ^  \\    |  |_)  |    " << endl;
//	cout << "\t\t|      /     |   __|  |  . `  |     |  |        |  |       /  /_\\  \\   |      /     " << endl;
//	cout << "\t\t|  |\\  \\----.|  |____ |  |\\   |     |  |        |  `----. /  _____  \\  |  |\\  \\----." << endl;
//	cout << "\t\t| _| `._____||_______||__| \\__|     |__|         \\______|/__/     \\__\\ | _| `._____|" << endl;
//	cout << "________________________________________________________________________________________________________________________" << endl;
//
//	SetConsoleTextAttribute(handle, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
//	SetConsoleTextAttribute(handle, FOREGROUND_RED);
//	cout << "Press any key to enter the main menu..." << endl;
//	_getch();
//}
//void showMenu() {
//	cout << "Choice a search operation: \n" << endl;
//	cout << "1 - Search by brand\t\t\t||\t 6 - Add car\t\t\t||\t11 - Show all contracts" << endl;
//	cout << "2 - Search by color\t\t\t||\t 7 - Add client\t\t\t||\t12 - To remove car" << endl;
//	cout << "3 - Search by registration number\t||\t 8 - Add contract\t\t||\t13 - To remove client" << endl;
//	cout << "4 - Search by year of issue\t\t||\t 9 - Show car info\t\t||\t14 - To remove contract" << endl;
//	cout << "5 - Search contract by client name\t||\t10 - Show client info\t\t||\t15 - Exit\n" << endl;
//	cout << "\nEnter choice: " << endl;
//}
//
//int compareString(const char* chr1, const char* chr2) {
//	while (*chr1 != '\0' && *chr2 != '\0')
//	{
//		char str1 = *chr1;
//		char str2 = *chr2;
//
//		if (str1 >= 'A' && str1 <= 'Z') {
//			str1 += 32;
//		}
//		if (str2 >= 'A' && str2 <= 'Z') {
//			str2 += 32;
//		}
//		if (str1 < str2) {
//			return -1;
//		}
//		else if (str1 > str2) {
//			return 1;
//		}
//		chr1++;
//		chr2++;
//	}
//	if (*chr1 == '\0' && *chr2 == '\0') {
//		return 0;
//	}
//	else if (*chr1 == '\0') {
//		return -1;
//	}
//	else {
//		return 1;
//	}
//}
//
//Car* addCar(Car* car, int& length) {
//	system("cls");
//
//	Car newCar;
//	cout << "Enter the make of the car: ";
//	cin >> newCar.marka;
//	cout << "Enter your car model: ";
//	cin >> newCar.model;
//	cout << "Enter car color: ";
//	cin >> newCar.color;
//	cout << "Enter the year of manufacture of the car: ";
//	cin >> newCar.year_of_issue;
//	cout << "Enter car numebr: ";
//	cin >> newCar.registration_mark;
//
//	if (length == 0) {
//		car = new Car[1];
//		car[0] = newCar;
//	}
//	else {
//		Car* newCars = new Car[length + 1];
//		for (int i = 0; i < length; i++) {
//			newCars[i] = car[i];
//		}
//		newCars[length] = newCar;
//		delete[] car;
//		car = newCars;
//	}
//
//	length++;
//	cout << "Car added" << endl;
//
//	return car;
//}
//
//Car* removeCar(Car* cars, int& length, const char* registration_mark) {
//	system("cls");
//
//	for (int i = 0; i < length; i++)
//	{
//		if (strcmp(cars[i].registration_mark, registration_mark) == 0) {
//			for (int j = i; j < length - 1; j++)
//			{
//				cars[j] = cars[j + 1];
//			}
//			length--;
//			cout << "Car removed\n" << endl;
//			return cars;
//		}
//	}
//	cout << "No such car found!\n" << endl;
//	return cars;
//}
//
//Klient* removeClient(Klient* clients, int& length, Contract* contracts, int& length_cont, char* name, char* surname) {
//	system("cls");
//
//	for (int i = 0; i < length; i++) {
//		if (compareString(clients[i].name, name) == 0 && compareString(clients[i].surname, surname) == 0) {
//			for (int j = i; j < length - 1; j++)
//			{
//				clients[j] = clients[j + 1];
//			}
//			length--;
//
//			for (int j = 0; j < length_cont; j++) {
//				if (compareString(contracts[j].client_name, name) ||
//					compareString(contracts[j].client_surname, surname) == 0) {
//					for (int d = j; d < length_cont - 1; d++)
//					{
//						contracts[d] = contracts[d + 1];
//					}
//					length_cont--;
//				}
//			}
//			cout << "Ñlient removed\n" << endl;
//			return clients;
//		}
//	}
//	cout << "No such client found!\n" << endl;
//	return clients;
//}
//
//Klient* addClient(Klient* client, int& length) {
//	system("cls");
//
//	Klient* clients = new Klient[length + 1];
//
//	Klient newClient;
//	cout << "Enter the name: ";
//	cin >> newClient.name;
//	cout << "Enter the surname: ";
//	cin >> newClient.surname;
//	cout << "Enter the middle name: ";
//	cin >> newClient.middle_name;
//
//	for (int i = 0; i < length; i++) {
//		clients[i] = client[i];
//	}
//
//
//	clients[length] = newClient;
//	delete[] client;
//	length++;
//	cout << "Client upped" << endl;
//
//	return clients;
//}
//
//Contract* addContract(Contract* contract, int& length, const char* clientName, const char* clientSurname, const char* regNumber, char* rentalDate, double pricePerDay, int days, double debt, Car* cars, int& lengthCars, Klient* client, int& length_Client) {
//	system("cls");
//
//	bool checkNumber = false;
//
//	for (int i = 0; i < lengthCars; i++) {
//		if (strcmp(cars[i].registration_mark, regNumber) == 0)
//		{
//			checkNumber = true;
//			break;
//		}
//	}
//	if (!checkNumber) {
//		cout << "There is no such registration number!" << endl;
//		return contract;
//	}
//
//	bool checkClient = false;
//	for (int i = 0; i < length_Client; i++) {
//		if (compareString(client[i].name, clientName) == 0 &&
//			compareString(client[i].surname, clientSurname) == 0) {
//			checkClient = true;
//			break;
//		}
//	}
//
//	if (!checkClient) {
//		cout << "There is no such client!" << endl;
//		return contract;
//	}
//
//	Contract* contracts = new Contract[length];
//
//	Contract newContract;
//	strcpy_s(newContract.client_name, clientName);
//	strcpy_s(newContract.client_surname, clientSurname);
//	strcpy_s(newContract.con_registration_mark, regNumber);
//	strcpy_s(newContract.rental_date, rentalDate);
//	newContract.price_oneDay = pricePerDay;
//	newContract.rent_date = days;
//	newContract.debt = pricePerDay * days;
//
//	for (int i = 0; i < length; i++) {
//		contracts[i] = contract[i];
//	}
//
//	contract[length] = newContract;
//	length++;
//	cout << "Contract added" << endl;
//	return contracts;
//
//	//Contract newContract;
//	//strcpy_s(newContract.client_name, clientName);
//	//strcpy_s(newContract.client_surname, clientSurname);
//	//strcpy_s(newContract.con_registration_mark, regNumber);
//	//strcpy_s(newContract.rental_date, rentalDate);
//	//newContract.price_oneDay = pricePerDay;
//	////debt *= pricePerDay;
//	//newContract.debt = debt;
//
//	//*for (int i = 0; i < length; i++) {
//	//	contracts[i] = contract[i];
//	//}
//
//	//contracts[length] = newContract;
//	//delete[] contract;
//	//contract = contracts;
//	//length++;*/
//
//	//if (length == 0) {
//	//	contract = new Contract[1];
//	//	contract[0] = newContract;
//	//}
//	//else {
//	//	Contract* newContracts = new Contract[length + 1];
//	//	for (int i = 0; i < length; i++) {
//	//		newContracts[i] = contract[i];
//	//	}
//	//	newContracts[length] = newContract;
//	//	delete[] contract;
//	//	contract = newContracts;
//	//}
//
//	//length++;
//	//cout << "\nContract added\n" << endl;
//	//cout << length;
//	////showContract(newContract);
//	//return contract;
//}
//
//void showCar(const Car* cars, int length) {
//	system("cls");
//
//	//system("cls");
//	/*cout << "Marka: " << cars.marka << endl;
//	cout << "Model: " << cars.model << endl;
//	cout << "Color: " << cars.color << endl;
//	cout << "Year of issue: " << cars.year_of_issue << endl;
//	cout << "Registration number: " << cars.registration_mark << endl;
//	cout << endl;*/
//	cout << "------------------------------------------------------------------------------------------------------------------------\n";
//	cout << setw(23) << left << "|      Marka" << setw(23) << "|       Model" << setw(23) << "|       Color" << setw(23) << "|   Year of issue" << setw(23) << "|    Reg number" << "|\n";
//	cout << "------------------------------------------------------------------------------------------------------------------------\n";
//	//}
//
//	for (int i = 0; i < length; i++)
//	{
//		cout << "| " << setw(21) << left << cars[i].marka
//			<< "| " << setw(21) << left << cars[i].model
//			<< "| " << setw(21) << left << cars[i].color
//			<< "| " << setw(21) << left << cars[i].year_of_issue
//			<< "| " << setw(21) << left << cars[i].registration_mark
//			<< "|\n";
//		cout << "------------------------------------------------------------------------------------------------------------------------\n";
//	}
//}
//
//void showClient(const Klient* clients, int length) {
//	system("cls");
//
//	cout << "-------------------------------------------------------------\n";
//	cout << setw(20) << left << "|    Client name" << setw(20) << "|   Client surname" << setw(20) << "|    Middle name" << "|\n";
//	cout << "-------------------------------------------------------------\n";
//
//	for (int i = 0; i < length; i++)
//	{
//		cout << "| " << setw(18) << left << clients[i].name
//			<< "| " << setw(18) << left << clients[i].surname
//			<< "| " << setw(18) << left << clients[i].middle_name
//			<< "|\n";
//		cout << "-------------------------------------------------------------\n";
//
//	}
//}
//
//void searchMarka(const Car* cars, int length, const char* marka) {
//	system("cls");
//
//	cout << "Cars by brand - " << marka << "\n" << endl;
//	bool found = false;
//
//	for (int i = 0; i < length; i++) {
//		if (compareString(cars[i].marka, marka) == 0) {
//			showCar(cars, length);
//			found = true;
//		}
//	}
//	if (!found) {
//		cout << "There is no such car!" << endl;
//	}
//}
//
//void searchColor(const Car* cars, int length, const char* color) {
//	system("cls");
//
//	cout << "Cars by brand - " << color << ":\n" << endl;
//	bool found = false;
//	for (int i = 0; i < length; i++) {
//		if (compareString(cars[i].color, color) == 0) {
//			showCar(cars, length);
//			found = true;
//		}
//	}
//	if (!found) {
//		cout << "There is no such car!" << endl;
//	}
//}
//
//void searchRegistrationNumber(const Car* cars, int length, const char* registration_mark) {
//	system("cls");
//
//	cout << "Car by registration number - " << registration_mark << ":\n" << endl;
//	bool tmp = false;
//	for (int i = 0; i < length; i++) {
//		if (strcmp(cars[i].registration_mark, registration_mark) == 0) {
//			showCar(cars, length);
//			tmp = true;
//		}
//	}
//	if (!tmp) {
//		cout << "There is no car with this registration number!" << endl;
//	}
//}
//
//void searchYearofIssue(const Car* cars, int length, int year_of_issue) {
//	system("cls");
//
//	cout << "Cars by year of issue - " << year_of_issue << ":\n" << endl;
//	bool tmp = false;
//	for (int i = 0; i < length; i++) {
//		if (cars[i].year_of_issue == year_of_issue) {
//			showCar(cars, length);
//			tmp = true;
//			cout << endl;
//		}
//	}
//	if (!tmp) {
//		cout << "There is no car with this year of manufacture!" << endl;
//	}
//}
//
//void searchContractByClientName(Contract* contracts, const char* clientName, const char* clientSurname, const Klient* clients, int& length) {
//	system("cls");
//
//	cout << "Contracts for client (" << clientName << "," << clientSurname << "):" << endl;
//	bool tmp = false;
//	for (int i = 0; i < length; i++) {
//		if (compareString(clients[i].name, clientName) == 0 &&
//			compareString(clients[i].surname, clientSurname) == 0) {
//			cout << "Contract " << i + 1 << ":\n\n";
//			cout << "Client name: " << contracts[i].client_name << "\n";
//			cout << "Client surname: " << contracts[i].client_surname << "\n";
//			cout << "Registration number: " << contracts[i].con_registration_mark << "\n";
//			cout << "Rental date: " << contracts[i].rental_date << "\n";
//			cout << "Price for (1) day: " << contracts[i].price_oneDay << "$" << "\n";
//			cout << "How many days: " << contracts[i].rent_date << "day" << "\n";
//			cout << "Total amount: " << contracts[i].debt << "$" << "\n";
//
//			tmp = true;
//		}
//	}
//	if (!tmp) {
//		cout << "This clint doesn't have a contract!" << endl;
//
//	}
//}
//
//void showAllContracts(const Contract* contracts, int length) {
//	system("cls");
//
//	//for (int i = 0; i < length; i++)
//	//{
//		/*cout << "Client name: " << contracts.client_name << "\n";
//		cout << "Client surname: " << contracts.client_surname << "\n";
//		cout << "Registration number: " << contracts.con_registration_mark << "\n";
//		cout << "Rental date: " << contracts.rental_date << "\n";
//		cout << "Price for (1) day: " << contracts.price_oneDay << "$" << "\n";
//		cout << "How many days: " << contracts.rent_date << "day" << "\n";
//		cout << "Total amount: " << contracts.debt << "$" << "\n";*/
//		//}
//	cout << "------------------------------------------------------------------------------------------------------------------------\n";
//	cout << setw(17) << left << "| Client name"
//		<< setw(17) << "| Client surname"
//		<< setw(17) << "| Reg number"
//		<< setw(17) << "| Rental date"
//		<< setw(17) << "|Price for 1 day"
//		<< setw(17) << "| How many day "
//		<< setw(17) << "| Total amount"
//		<< "|\n";
//	cout << "------------------------------------------------------------------------------------------------------------------------\n";
//
//	for (int i = 0; i < length; i++)
//	{
//		cout << "| " << setw(15) << left << contracts[i].client_name
//			<< "| " << setw(15) << left << contracts[i].client_surname
//			<< "| " << setw(15) << left << contracts[i].con_registration_mark
//			<< "| " << setw(15) << left << contracts[i].rental_date
//			<< "| " << setw(15) << left << contracts[i].price_oneDay
//			<< "| " << setw(15) << left << contracts[i].rent_date
//			<< "| " << setw(15) << left << contracts[i].debt
//			<< "|\n";
//		cout << "------------------------------------------------------------------------------------------------------------------------\n";
//	}
//}
//
//void animateLoading() {
//	for (int i = 0; i < 1; ++i) {
//		cout << "\nloading...";
//		Sleep(1000);
//	}
//}
//

#pragma once
void showMenu() {
	cout << "Choice a search operation: \n" << endl;
	cout << "1 - Search by brand\t\t\t||\t 6 - Add car\t\t\t||\t11 - Show all contracts" << endl;
	cout << "2 - Search by color\t\t\t||\t 7 - Add client\t\t\t||\t12 - To remove car" << endl;
	cout << "3 - Search by registration number\t||\t 8 - Add contract\t\t||\t13 - To remove client" << endl;
	cout << "4 - Search by year of issue\t\t||\t 9 - Show car info\t\t||\t14 - To remove contract" << endl;
	cout << "5 - Search contract by client name\t||\t10 - Show client info\t\t||\t15 - Exit\n" << endl;
	cout << "\nEnter choice: " << endl;
}

void showCar(const Car* cars, int length) {
	system("cls");

	cout << "------------------------------------------------------------------------------------------------------------------------\n";
	cout << setw(23) << left << "|      Marka" << setw(23) << "|       Model" << setw(23) << "|       Color" << setw(23) << "|   Year of issue" << setw(23) << "|    Reg number" << "|\n";
	cout << "------------------------------------------------------------------------------------------------------------------------\n";

	for (int i = 0; i < length; i++)
	{
		cout << "| " << setw(21) << left << cars[i].marka
			<< "| " << setw(21) << left << cars[i].model
			<< "| " << setw(21) << left << cars[i].color
			<< "| " << setw(21) << left << cars[i].year_of_issue
			<< "| " << setw(21) << left << cars[i].registration_mark
			<< "|\n";
		cout << "------------------------------------------------------------------------------------------------------------------------\n";
	}
}

void showClient(const Klient* clients, int length) {
	system("cls");

	cout << "-------------------------------------------------------------\n";
	cout << setw(20) << left << "|    Client name" << setw(20) << "|   Client surname" << setw(20) << "|    Middle name" << "|\n";
	cout << "-------------------------------------------------------------\n";

	for (int i = 0; i < length; i++)
	{
		cout << "| " << setw(18) << left << clients[i].name
			<< "| " << setw(18) << left << clients[i].surname
			<< "| " << setw(18) << left << clients[i].middle_name
			<< "|\n";
		cout << "-------------------------------------------------------------\n";

	}
}

void showAllContracts(const Contract* contracts, int length) {
	system("cls");

	cout << "------------------------------------------------------------------------------------------------------------------------\n";
	cout << setw(17) << left << "| Client name"
		<< setw(17) << "| Client surname"
		<< setw(17) << "| Reg number"
		<< setw(17) << "| Rental date"
		<< setw(17) << "|Price for 1 day"
		<< setw(17) << "| How many day "
		<< setw(17) << "| Total amount"
		<< "|\n";
	cout << "------------------------------------------------------------------------------------------------------------------------\n";

	for (int i = 0; i < length; i++)
	{
		cout << "| " << setw(15) << left << contracts[i].client_name
			<< "| " << setw(15) << left << contracts[i].client_surname
			<< "| " << setw(15) << left << contracts[i].con_registration_mark
			<< "| " << setw(15) << left << contracts[i].rental_date
			<< "| " << setw(15) << left << contracts[i].price_oneDay
			<< "| " << setw(15) << left << contracts[i].rent_date
			<< "| " << setw(15) << left << contracts[i].debt
			<< "|\n";
		cout << "------------------------------------------------------------------------------------------------------------------------\n";
	}
}

void welcomeScreen() {
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(handle, FOREGROUND_RED);

	cout << "\t\t.______       _______ .__   __. .___________.     ______      ___      .______      " << endl;
	cout << "\t\t|   _  \\     |   ____||  \\ |  | |           |    /      |    /   \\     |   _  \\     " << endl;
	cout << "\t\t|  |_)  |    |  |__   |   \\|  | `---|  |----`   |  ,----'   /  ^  \\    |  |_)  |    " << endl;
	cout << "\t\t|      /     |   __|  |  . `  |     |  |        |  |       /  /_\\  \\   |      /     " << endl;
	cout << "\t\t|  |\\  \\----.|  |____ |  |\\   |     |  |        |  `----. /  _____  \\  |  |\\  \\----." << endl;
	cout << "\t\t| _| `._____||_______||__| \\__|     |__|         \\______|/__/     \\__\\ | _| `._____|" << endl;
	cout << "________________________________________________________________________________________________________________________" << endl;

	SetConsoleTextAttribute(handle, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
	SetConsoleTextAttribute(handle, FOREGROUND_RED);
	cout << "Press any key to enter the main menu..." << endl;
	_getch();
}

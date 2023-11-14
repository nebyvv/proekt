#pragma once
struct Car
{
	char marka[30];
	char model[30];
	char color[30];
	int year_of_issue;
	char registration_mark[30];
};

struct Klient
{
	char name[20];
	char surname[20];
	char middle_name[20];
};

struct Contract
{
	char client_name[20];
	char client_surname[20];
	char con_registration_mark[30];
	char rental_date[20];
	double price_oneDay;
	int rent_date;
	double debt;
};

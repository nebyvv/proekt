//#include <iostream>
//#include <string.h>
//#include <conio.h>
//#include <iomanip>
//#include <Windows.h>
//#include <cstring>
//
//using namespace std;
//
//struct store {
//	char title[20];
//	char director[20];
//	char genre[20];
//	double popularity_rating;
//	double price;
//};
//
//store* addFilms(store* film, int& length);
//
//int compareString(const char* chr1, const char* chr2);
//
//void showFilms(const store* films, int length);
//
//void search_by_movie_title(const store* films, int length, const char* titles);
//
//void search_by_movie_genre(const store* films, int length, const char* genres);
//
//void search_by_movie_director(const store* films, int length, const char* directors);
//
//void search_popular_inGenre(const store* films, int length, const char* genre);
//
//int main() {
//	system("cls");
//
//	cout << "\t\t\t _    __    _        __                               __                      " << endl;
//	cout << "\t\t\t| |  / /   (_)  ____/ /  ___   ____           _____  / /_  ____    _____  ___ " << endl;
//	cout << "\t\t\t| | / /   / /  / __  /  / _ \\ / __ \\         / ___/ / __/ / __ \\  / ___/ / _ \\" << endl;
//	cout << "\t\t\t| |/ /   / /  / /_/ /  /  __// /_/ /        (__  ) / /_  / /_/ / / /    /  __/" << endl;
//	cout << "\t\t\t|___/   /_/   \\__,_/   \\___/ \\____/        /____/  \\__/  \\____/ /_/     \\___/ " << endl;
//	cout << "------------------------------------------------------------------------------------------------------------------------" << endl;
//
//	int length = 2, choice{};
//
//	store* menu = new store[length];
//
//	menu[0] = { "I am Legend", "Francis Lawrence", "Horror", 7.1, 100 };
//	menu[1] = { "Avengers", "Joe Russo", "Horror", 9.1, 180 };
//	cout << "\n";
//	while (true)
//	{
//		cout << "Choice a search operation: \n" << endl;
//		cout << "1) Add a movie" << endl;
//		cout << "2) Search by movie title" << endl;
//		cout << "3) Search by movie director" << endl;
//		cout << "4) Search by movie genre" << endl;
//		cout << "5) Search for the most popular film in the genre" << endl;
//		cout << "6) Show all films" << endl;
//		cin >> choice;
//
//		switch (choice){
//		case 1: {
//			menu = addFilms(menu, length);
//			system("pause");
//			break;
//		}
//		case 2: {
//			char title[20];
//			cout << "Enter movie titles: ";
//			cin >> title;
//			search_by_movie_title(menu, length, title);
//			system("pause");
//			break;
//		}
//		case 3: {
//			char director[20];
//			cout << "Enter the director of the film: ";
//			cin >> director;
//			search_by_movie_director(menu, length, director);
//			system("pause");
//			break;
//		}
//		case 4: {
//			char genre[20];
//			cout << "Enter the movie genre : ";
//			cin >> genre;
//			search_by_movie_genre(menu, length, genre);
//			system("pause");
//			break;
//		}
//		case 5: {
//			char genre[20];
//			cout << "Enter the movie genre: ";
//			cin >> genre;
//			search_popular_inGenre(menu, length, genre);
//			system("pause");
//			break;
//		}
//		case 6: {
//			showFilms(menu, length);
//			system("pause");
//			break;
//		}
//		default:
//			break;
//		}
//	}
//}
//
//store* addFilms(store* film, int& length) {
//	system("cls");
//
//	store newFilm;
//	cout << "Enter movie titles: ";
//	cin >> newFilm.title;
//	cout << "Enter the director of the film: ";
//	cin >> newFilm.director;
//	cout << "Enter the movie genre: ";
//	cin >> newFilm.genre;
//	cout << "Enter the movie's popularity rating: ";
//	cin >> newFilm.popularity_rating;
//	cout << "Enter price of the film: ";
//	cin >> newFilm.price;
//
//	if (length == 0) {
//		film = new store[1];
//		film[0] = newFilm;
//	}
//	else {
//		store* newFilms = new store[length + 1];
//		for (int i = 0; i < length; i++)
//		{
//			newFilms[i] = film[i];
//		}
//		newFilms[length] = newFilm;
//		delete[] film;
//		film = newFilms;
//	}
//	length++;
//	cout << "Film added" << endl;
//	return film;
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
//void showFilms(const store* films, int length) {
//	system("cls");
//	cout << "------------------------------------------------------------------------------------------------------------------------\n";
//	cout << setw(20) << left << "| Title" << setw(20) << "| Director" << setw(20) << "| Genre" << setw(20) << "| Popularity" << setw(20) << "| Price" << "|\n";
//	cout << "------------------------------------------------------------------------------------------------------------------------\n";
//
//
//	for (int i = 0; i < length; i++)
//	{
//		cout << "| " << setw(18) << left << films[i].title
//			<< "| " << setw(18) << left << films[i].director
//			<< "| " << setw(18) << left << films[i].genre
//			<< "| " << setw(18) << left << films[i].popularity_rating
//			<< "| " << setw(18) << left << films[i].price
//			<< "|\n";
//	}
//	cout << "------------------------------------------------------------------------------------------------------------------------\n";
//}
//
//void search_by_movie_title(const store* films, int length, const char* titles) {
//	system("cls");
//
//	bool tmp = false;
//	cout << "------------------------------------------------------------------------------------------------------------------------\n";
//	cout << setw(20) << left << "| Title" << setw(20) << "| Director" << setw(20) << "| Genre" << setw(20) << "| Popularity" << setw(20) << "| Price" << "|\n";
//	cout << "------------------------------------------------------------------------------------------------------------------------\n";
//
//	for (int i = 0; i < length; i++) {
//		if (compareString(films[i].title, titles) == 0) {
//			cout << "| " << setw(18) << left << films[i].title
//				<< "| " << setw(18) << left << films[i].director
//				<< "| " << setw(18) << left << films[i].genre
//				<< "| " << setw(18) << left << films[i].popularity_rating
//				<< "| " << setw(18) << left << films[i].price
//				<< "|\n";
//			tmp = true;
//		}
//	}
//	cout << "------------------------------------------------------------------------------------------------------------------------\n";
//
//	if (!tmp) {
//		cout << "There is no such film!" << endl;
//	}
//}
//
//void search_by_movie_genre(const store* films, int length, const char* genres) {
//	system("cls");
//
//	bool tmp = false;
//	cout << "------------------------------------------------------------------------------------------------------------------------\n";
//	cout << setw(20) << left << "| Title" << setw(20) << "| Director" << setw(20) << "| Genre" << setw(20) << "| Popularity" << setw(20) << "| Price" << "|\n";
//	cout << "------------------------------------------------------------------------------------------------------------------------\n";
//
//	for (int i = 0; i < length; i++) {
//		if (compareString(films[i].genre, genres) == 0) {
//			cout << "| " << setw(18) << left << films[i].title
//				<< "| " << setw(18) << left << films[i].director
//				<< "| " << setw(18) << left << films[i].genre
//				<< "| " << setw(18) << left << films[i].popularity_rating
//				<< "| " << setw(18) << left << films[i].price
//				<< "|\n";
//			tmp = true;
//		}
//	}
//	cout << "------------------------------------------------------------------------------------------------------------------------\n";
//
//	if (!tmp) {
//		cout << "There is no film with this genre!" << endl;
//	}
//}
//
//void search_by_movie_director(const store* films, int length, const char* directors) {
//	system("cls");
//
//	bool tmp = false;
//	cout << "------------------------------------------------------------------------------------------------------------------------\n";
//	cout << setw(20) << left << "| Title" << setw(20) << "| Director" << setw(20) << "| Genre" << setw(20) << "| Popularity" << setw(20) << "| Price" << "|\n";
//	cout << "------------------------------------------------------------------------------------------------------------------------\n";
//
//
//	for (int i = 0; i < length; i++) {
//		if (compareString(films[i].director, directors) == 0) {
//			cout << "| " << setw(18) << left << films[i].title
//				<< "| " << setw(18) << left << films[i].director
//				<< "| " << setw(18) << left << films[i].genre
//				<< "| " << setw(18) << left << films[i].popularity_rating
//				<< "| " << setw(18) << left << films[i].price
//				<< "|\n";
//			tmp = true;
//		}
//	}
//	cout << "------------------------------------------------------------------------------------------------------------------------\n";
//
//	if (!tmp) {
//		cout << "There is no film with this director!" << endl;
//	}
//}
//
//void search_popular_inGenre(const store* films, int length, const char* genre) {
//	system("cls");
//
//	int popIndex = -1;
//	bool tmp = false;
//
//	for (int i = 0; i < length; i++) {
//		if (compareString(films[i].genre, genre) == 0) {
//			if (popIndex == -1 || films[i].popularity_rating > films[popIndex].popularity_rating) {
//				popIndex = i;
//				tmp = true;
//			}
//		}
//	}
//	if (tmp) {
//		cout << "------------------------------------------------------------------------------------------------------------------------\n";
//		cout << setw(20) << left << "| Title" << setw(20) << "| Director" << setw(20) << "| Genre" << setw(20) << "| Popularity" << setw(20) << "| Price" << "|\n";
//		cout << "------------------------------------------------------------------------------------------------------------------------\n";
//		cout << "| " << setw(18) << left << films[popIndex].title
//			<< "| " << setw(18) << left << films[popIndex].director
//			<< "| " << setw(18) << left << films[popIndex].genre
//			<< "| " << setw(18) << left << films[popIndex].popularity_rating
//			<< "| " << setw(18) << left << films[popIndex].price
//			<< "|\n";
//		cout << "------------------------------------------------------------------------------------------------------------------------\n";
//	}
//	else {
//		cout << "There are not films int the genre!" << endl;
//	}
//}

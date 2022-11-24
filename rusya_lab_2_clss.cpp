#include <iostream>
#include <conio.h>
#include "Apple.h"
#include "Grape.h"
#include "Banana.h"
#include "Mango.h"
#include "Basket.h"
using namespace std;

int main() {
	int choice, change_choice, list_choice = 0;
	string color;
	int calories, amount;

	Apple* apples[5] = { 0, 0, 0, 0, 0 };
	Grape* grapes[5] = { 0, 0, 0, 0, 0 };
	Banana* bananas[5] = { 0, 0, 0, 0, 0 };
	Mango* mangos[5] = { 0, 0, 0, 0, 0 };

	apples[0] = new Apple();
	grapes[0] = new Grape();
	bananas[0] = new Banana();
	mangos[0] = new Mango();

	Basket* basket = new Basket(apples[0], grapes[0], bananas[0], mangos[0]);

	cout << "\nPress any key to continue...";
	_getch();
	system("cls");

	while (true) {
		cout << "Menu:\n\t1 to show Basket's info.\n\t2 to change part of basket.\n\t3 to exit.\nYour answer: ";
		cin >> choice;
		system("cls");

		if (choice == 1) {
			basket->Info_Basket();
			cout << "\nPress any key to continue...";
			_getch();
			system("cls");
		}

		else if (choice == 2) {
			cout << "Select part to change:\n\t1 Apple\n\t2 Grape\n\t3 Banana\n\t4 Mango\n\t5 to menu\nYour answer: ";
			cin >> change_choice;
			system("cls");

			if (change_choice == 1) {
				cout << "Choose Apple in list:\n";
				for (int i = 0; i < 5; i++) {
					if (apples[i] != 0)
						cout << i + 1 << " " << apples[i]->get_color() << "\n";
					else cout << i + 1 << " create new...\n";

				}
				cout << "\n6 Remove added parts.\n";

				cout << "Your answer: ";
				cin >> list_choice;

				if (list_choice == 6) {
					for (int i = 1; i < 5; i++) {
						if (apples[i] == 0) continue;
						apples[i]->~Apple();
						apples[i] = 0;
					}
					basket->set_Apple(apples[0]);
					cout << "\n\nPress any key to continue...";
					_getch();
					system("cls");
					continue;
				}

				if (apples[list_choice - 1] == 0) {
					printf("\nCreate new:\n");

					cout << "Enter Apple's color: "; cin >> color;
					cout << "Enter Apple's calories: "; cin >> calories;
					cout << "Enter amount of apples: "; cin >> amount;

					apples[list_choice - 1] = new Apple(color, calories, amount);
					basket->set_Apple(apples[list_choice - 1]);
					cout << "\nPress any key to continue...";
					_getch();
					system("cls");
					continue;
				}
				cout << endl;
				basket->set_Apple(apples[list_choice - 1]);
				cout << "\nPress any key to continue...";
				_getch();
				system("cls");
			}

			else if (change_choice == 2) {
				cout << "Choose Grape in list:\n";
				for (int i = 0; i < 5; i++) {
					if (grapes[i] != 0)
						cout << i + 1 << " " << grapes[i]->get_color() << "\n";
					else cout << i + 1 << " create new...\n";

				}
				cout << "\n6 Remove added parts.\n";

				cout << "Your answer: ";
				cin >> list_choice;

				if (list_choice == 6) {
					for (int i = 1; i < 5; i++) {
						if (grapes[i] == 0) continue;
						grapes[i]->~Grape();
						grapes[i] = 0;
					}
					basket->set_Grape(grapes[0]);
					std::cout << "\n\nPress any key to continue...";
					_getch();
					system("cls");
					continue;
				}

				if (grapes[list_choice - 1] == 0) {
					printf("\nCreate new:\n");

					cout << "Enter Grape's color: "; cin >> color;
					cout << "Enter Grape's calories: "; cin >> calories;
					cout << "Enter amount of grape: "; cin >> amount;

					grapes[list_choice - 1] = new Grape(color, calories, amount);
					basket->set_Grape(grapes[list_choice - 1]);
					cout << "\nPress any key to continue...";
					_getch();
					system("cls");
					continue;
				}
				cout << endl;
				basket->set_Grape(grapes[list_choice - 1]);
				cout << "\nPress any key to continue...";
				_getch();
				system("cls");
			}

			else if (change_choice == 3) {
				cout << "Choose Banana in list:\n";
				for (int i = 0; i < 5; i++) {
					if (bananas[i] != 0)
						cout << i + 1 << " " << bananas[i]->get_color() << "\n";
					else cout << i + 1 << " create new...\n";

				}
				cout << "\n6 Remove added parts.\n";

				cout << "Your answer: ";
				cin >> list_choice;

				if (list_choice == 6) {
					for (int i = 1; i < 5; i++) {
						if (bananas[i] == 0) continue;
						bananas[i]->~Banana();
						bananas[i] = 0;
					}
					basket->set_Banana(bananas[0]);
					cout << "\n\nPress any key to continue...";
					_getch();
					system("cls");
					continue;
				}

				if (bananas[list_choice - 1] == 0) {
					printf("\nCreate new:\n");

					cout << "Enter Banana's color: "; cin >> color;
					cout << "Enter Banana's calories: "; cin >> calories;
					cout << "Enter amount of bananas: "; cin >> amount;

					bananas[list_choice - 1] = new Banana(color, calories, amount);
					basket->set_Banana(bananas[list_choice - 1]);
					cout << "\nPress any key to continue...";
					_getch();
					system("cls");
					continue;
				}
				cout << endl;
				basket->set_Banana(bananas[list_choice - 1]);
				cout << "\nPress any key to continue...";
				_getch();
				system("cls");
			}

			else if (change_choice == 4) {
				cout << "Choose Mango in list:\n";
				for (int i = 0; i < 5; i++) {
					if (mangos[i] != 0)
						cout << i + 1 << " " << mangos[i]->get_color() << "\n";
					else cout << i + 1 << " create new...\n";

				}
				cout << "\n6 Remove added parts.\n";

				cout << "Your answer: ";
				cin >> list_choice;

				if (list_choice == 6) {
					for (int i = 1; i < 5; i++) {
						if (mangos[i] == 0) continue;
						mangos[i]->~Mango();
						mangos[i] = 0;
					}
					basket->set_Mango(mangos[0]);
					cout << "\n\nPress any key to continue...";
					_getch();
					system("cls");
					continue;
				}

				if (mangos[list_choice - 1] == 0) {
					printf("\nCreate new:\n");

					cout << "Enter Mango's color: "; cin >> color;
					cout << "Enter Mango's calories: "; cin >> calories;
					cout << "Enter amount of mangos: "; cin >> amount;

					mangos[list_choice - 1] = new Mango(color, calories, amount);
					basket->set_Mango(mangos[list_choice - 1]);
					std::cout << "\nPress any key to continue...";
					_getch();
					system("cls");
					continue;
				}
				std::cout << endl;
				basket->set_Mango(mangos[list_choice - 1]);
				std::cout << "\nPress any key to continue...";
				_getch();
				system("cls");
			}

		}

		else if (choice == 3) break;
	}
}
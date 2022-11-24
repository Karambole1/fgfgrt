#include "Basket.h"
#include <string>
#include <iostream>
using namespace std;

Basket::Basket() {
	this->apple = new Apple();
	this->grape = new Grape();
	this->banana = new Banana();
	this->mango = new Mango();
	cout << "\nBasket was created with default params!\n";
}
Basket::Basket(Apple* apple, Grape* grape, Banana* banana, Mango* mango) {
	this->apple = apple;
	this->grape = grape;
	this->banana = banana;
	this->mango = mango;
	cout << "\nBasket was created\n";
}
Basket::~Basket() {
	apple->~Apple();
	grape->~Grape();
	banana->~Banana();
	mango->~Mango();

	cout << "\nBasket was removed";
}

void Basket::set_Apple(Apple* apple) {
	cout << "\nCurrent Apple was changed to\n\n";
	apple->Apple_INFO();
	this->apple = apple;
}

void Basket::set_Grape(Grape* grape) {
	cout << "\nCurrent Grape was changed to\n\n";
	grape->Grape_INFO();
	this->grape = grape;
}

void Basket::set_Banana(Banana* banana) {
	cout << "\nCurrent Banana was changed to\n\n";
	banana->Banana_INFO();
	this->banana = banana;
}

void Basket::set_Mango(Mango* mango) {
	cout << "\nCurrent Mango was changed to\n\n";
	mango->Mango_INFO();
	this->mango = mango;
}

void Basket::Info_Basket() {
	cout << "Baskets's info:\n\n";
	cout << "Apple(s):\n";
	apple->Apple_INFO();
	cout << "\nGrape(s):\n";
	grape->Grape_INFO();
	cout << "\nBanana(s):\n";
	banana->Banana_INFO();
	cout << "\nMango(s):\n";
	mango->Mango_INFO();
}
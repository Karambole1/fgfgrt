#include "Banana.h"
#include <string>
#include <iostream>
using namespace std;

Banana::Banana() {
	color = "default color";
	calories = 12;
	amount = 10;
	cout << "Banana was created with default params!\n";
}

Banana::Banana(string color) {
	this->color = color;
	calories = 12;
	amount = 10;
	cout << "Banana was created\n";
}
Banana::Banana(string color, int calories, int amount) {
	this->color = color;
	this->calories = calories;
	this->amount = amount;
	cout << "\nNew Banana was created";
}
Banana::~Banana() {
	cout << "Banana with color" << color << " was removed";
}

void Banana::Banana_INFO() {
	cout << "\tcolor: " << color << "\n\tcalories: " << calories << "\n\tamount: " << amount << "\n";
}

void Banana::set_color(string color) {
	this->color = color;
}
string Banana::get_color() {
	return color;
}

void Banana::set_calories(int calories) {
	this->calories = calories;
}
int Banana::get_calories() {
	return calories;
}

void Banana::set_amount(int amount) {
	this->amount = amount;
}
int Banana::get_amount() {
	return amount;
}
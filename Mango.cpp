#include "Mango.h"
#include <string>
#include <iostream>
using namespace std;

Mango::Mango() {
	color = "default color";
	calories = 12;
	amount = 10;
	cout << "Mango was created with default params!\n";
}

Mango::Mango(string color) {
	this->color = color;
	calories = 12;
	amount = 10;
	cout << "Mango was created\n";
}
Mango::Mango(string color, int calories, int amount) {
	this->color = color;
	this->calories = calories;
	this->amount = amount;
	cout << "\nNew Mango was created";
}
Mango::~Mango() {
	cout << "Mango with color" << color << " was removed";
}

void Mango::Mango_INFO() {
	cout << "\tcolor: " << color << "\n\tcalories: " << calories << "\n\tamount: " << amount << "\n";
}

void Mango::set_color(string color) {
	this->color = color;
}
string Mango::get_color() {
	return color;
}

void Mango::set_calories(int calories) {
	this->calories = calories;
}
int Mango::get_calories() {
	return calories;
}

void Mango::set_amount(int amount) {
	this->amount = amount;
}
int Mango::get_amount() {
	return amount;
}
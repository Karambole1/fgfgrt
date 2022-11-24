#include "Grape.h"
#include <string>
#include <iostream>
using namespace std;

Grape::Grape() {
	color = "default color";
	calories = 12;
	amount = 10;
	cout << "Grape was created with default params!\n";
}

Grape::Grape(string color) {
	this->color = color;
	calories = 12;
	amount = 10;
	cout << "Grape was created\n";
}
Grape::Grape(string color, int calories, int amount) {
	this->color = color;
	this->calories = calories;
	this->amount = amount;
	cout << "\nNew Grape was created";
}
Grape::~Grape() {
	cout << "Grape with color" << color << " was removed";
}

void Grape::Grape_INFO() {
	cout << "\tcolor: " << color << "\n\tcalories: " << calories << "\n\tamount: " << amount << "\n";
}

void Grape::set_color(string color) {
	this->color = color;
}
string Grape::get_color() {
	return color;
}

void Grape::set_calories(int calories) {
	this->calories = calories;
}
int Grape::get_calories() {
	return calories;
}

void Grape::set_amount(int amount) {
	this->amount = amount;
}
int Grape::get_amount() {
	return amount;
}
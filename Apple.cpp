#include "Apple.h"
#include <string>
#include <iostream>
using namespace std;

Apple::Apple() {
	color = "default color";
	calories = 12;
	amount = 10;
	cout << "Apple was created with default params!\n";
}

Apple::Apple(string color) {
	this->color = color;
	calories = 12;
	amount = 10;
	cout << "Apple was created\n";
}
Apple::Apple(string color, int calories, int amount) {
	this->color = color;
	this->calories = calories;
	this->amount = amount;
	cout << "\nNew Apple was created";
}
Apple::~Apple() {
	cout << "Apple with color" << color << " was removed";
}

void Apple::Apple_INFO() {
	cout << "\tcolor: " << color << "\n\tcalories: " << calories << "\n\tamount: " << amount << "\n";
}

void Apple::set_color(string color) {
	this->color = color;
}
string Apple::get_color() {
	return color;
}

void Apple::set_calories(int calories) {
	this->calories = calories;
}
int Apple::get_calories() {
	return calories;
}

void Apple::set_amount(int amount) {
	this->amount = amount;
}
int Apple::get_amount() {
	return amount;
}
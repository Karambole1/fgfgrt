#pragma once
#include <string>
using namespace std;

class Apple
{
private:
	string color;		// Название
	int calories;		// Ёмкость
	int amount;			// Милиамп. часы

public:
	Apple();
	Apple(string color);
	Apple(string color, int calories, int amount);
	~Apple();

	void Apple_INFO();

	void set_color(string color);
	string get_color();

	void set_calories(int calories);
	int get_calories();

	void set_amount(int amount);
	int get_amount();
};
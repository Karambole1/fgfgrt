#pragma once
#include <string>
using namespace std;

class Mango
{
private:
	string color;		// Название
	int calories;		// Ёмкость
	int amount;			// Милиамп. часы

public:
	Mango();
	Mango(string color);
	Mango(string color, int calories, int amount);
	~Mango();

	void Mango_INFO();

	void set_color(string color);
	string get_color();

	void set_calories(int calories);
	int get_calories();

	void set_amount(int amount);
	int get_amount();
};
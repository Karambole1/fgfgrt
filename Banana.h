#pragma once
#include <string>
using namespace std;

class Banana
{
private:
	string color;		// Название
	int calories;		// Ёмкость
	int amount;			// Милиамп. часы

public:
	Banana();
	Banana(string color);
	Banana(string color, int calories, int amount);
	~Banana();

	void Banana_INFO();

	void set_color(string color);
	string get_color();

	void set_calories(int calories);
	int get_calories();

	void set_amount(int amount);
	int get_amount();
};
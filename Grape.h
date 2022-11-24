#pragma once
#include <string>
using namespace std;

class Grape
{
private:
	string color;		// Название
	int calories;		// Ёмкость
	int amount;			// Милиамп. часы

public:
	Grape();
	Grape(string color);
	Grape(string color, int calories, int amount);
	~Grape();

	void Grape_INFO();

	void set_color(string color);
	string get_color();

	void set_calories(int calories);
	int get_calories();

	void set_amount(int amount);
	int get_amount();
};
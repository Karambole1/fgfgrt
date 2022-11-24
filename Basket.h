#pragma once
#include "Apple.h"
#include "Grape.h"
#include "Banana.h"
#include "Mango.h"

class Basket {
	;
private:
	Apple* apple;
	Grape* grape;
	Banana* banana;
	Mango* mango;

public:
	Basket();
	Basket(Apple* apple, Grape* grape, Banana* banana, Mango* mango);
	~Basket();

	void set_Apple(Apple* evaporator);
	void set_Grape(Grape* battery);
	void set_Banana(Banana* cotton_wool);
	void set_Mango(Mango* goo);

	void Info_Basket();
};
#include <iostream>

struct type_apples {
	char color[15];		// Цвет
	int calories;		// Калории
	int amount;		    // Кол-во
};
struct type_grapes {
	char color[15];	// Цвет
	int calories;	// Калории
	int amount;		// Кол-во
};
struct type_bananas {
	char color[15];	// Цвет
	int calories;	// Калории
	int amount;		// Кол-во
};
struct type_mangos {
	char color[15];	// Цвет
	int calories;	// Калории
	int amount;		// Кол-во
};
struct type_basket {
	type_apples apple;
	type_grapes grape;
	type_bananas banana;
	type_mangos mango;
};

void InfoDevice(type_basket basket, int m) {
	if (m == 0) {
		printf("Basket consists of:\n");
		printf("\tApple, color: %s\n", basket.apple.color);
		printf("\tGrape, color: %s\n", basket.grape.color);
		printf("\tBanana, color: %s\n", basket.banana.color);
		printf("\tMango, color: %s\n\n", basket.mango.color);
	}
	else if (m == 1) {
		printf("Info about basket:\n");
		printf("\tApple: %s, calories: %d kcal/100g, amount: %d fruit(s)\n", basket.apple.color, basket.apple.calories, basket.apple.amount);
		printf("\tGrape: %s, calories: %d kcal/100g, amount: %d fruit(s)\n", basket.grape.color, basket.grape.calories, basket.grape.amount);
		printf("\tBanana: %s, calories: %d kcal/100g, amount: %d fruit(s)\n", basket.banana.color, basket.banana.calories, basket.banana.amount);
		printf("\tMango: %s, calories: %d kcal/100g, amount: %d fruit(s)\n", basket.mango.color, basket.mango.amount, basket.mango.calories);
	}
}

type_basket CreateBasket(type_apples apple, type_grapes grape, type_bananas banana, type_mangos mango) {
	type_basket newBasket;
	newBasket.apple = apple;
	newBasket.grape = grape;
	newBasket.banana = banana;
	newBasket.mango = mango;
	return newBasket;
};

type_apples CreateApple() {
	printf("Create new apple:\n");
	type_apples newApple;

	printf("\tInput color: ");
	while (gets_s(newApple.color, 15) == 0) {
		printf("\tSorry, try again.\n");
	}
	printf("\tInput calories: ");
	while (scanf_s("%d", &newApple.calories) == 0) {
		printf("\tSorry, try again.\n");
	}
	printf("\tInput amount: ");
	while (scanf_s("%d", &newApple.amount) == 0) {
		printf("\tSorry, try again.\n");
	}
	while (getchar() != '\n');

	printf("Apple was created.\n\n");
	return newApple;
}

type_grapes CreateGrape() {
	printf("Create new grape:\n");
	type_grapes newGrape;

	printf("\tInput color: ");
	while (gets_s(newGrape.color, 20) == 0) {
		printf("\tSorry, try again.\n");
	}

	printf("\tInput calories: ");
	while (scanf_s("%d", &newGrape.calories) == 0) {
		printf("\tSorry, try again.\n");
	}

	printf("\tInput amount: ");
	while (scanf_s("%d", &newGrape.amount) == 0) {
		printf("\tSorry, try again.\n");
	}
	while (getchar() != '\n');

	printf("Grape was created.\n\n");
	return newGrape;
}

type_bananas CreateBanana() {
	printf("Create new banana:\n");
	type_bananas newBanana;

	printf("\tInput color: ");
	while (gets_s(newBanana.color, 20) == 0) {
		printf("\tSorry, try again.\n");
	}

	printf("\tInput calories: ");
	while (scanf_s("%d", &newBanana.calories) == 0) {
		printf("\tSorry, try again.\n");
	}

	printf("\tInput amount: ");
	while (scanf_s("%d", &newBanana.amount) == 0) {
		printf("\tSorry, try again.\n");
	}
	while (getchar() != '\n');

	printf("Banana was created.\n\n");
	return newBanana;
}

type_mangos CreateMango() {
	printf("Create new mango:\n");
	type_mangos newMango;

	printf("\tInput color: ");
	while (gets_s(newMango.color, 15) == 0) {
		printf("\tSorry, try again.\n");
	}
	printf("\tInput calories: ");
	while (scanf_s("%d", &newMango.calories) == 0) {
		printf("\tSorry, try again.\n");
	}
	printf("\tInput amount: ");
	while (scanf_s("%d", &newMango.amount) == 0) {
		printf("\tSorry, try again.\n");
	}
	while (getchar() != '\n');

	printf("Mango was created.\n\n");
	return newMango;
}

void ChangeApple(type_basket* basket, type_apples newApple) {
	printf("Apple with params: %s, %d kcal, %d fruit(s)\nWas changed to %s, %d kcal, %d fruit(s)\n\n", 
		basket->apple.color, basket->apple.calories, basket->apple.amount,
		newApple.color, newApple.calories, newApple.amount);
	basket->apple = newApple;
}

void ChangeGrape(type_basket* basket, type_grapes newGrape) {
	printf("Grape with params: %s, %d kcal, %d fruit(s)\nWas changed to %s, %d kcal, %d fruit(s)\n\n",
		basket->grape.color, basket->grape.calories, basket->grape.amount,
		newGrape.color, newGrape.calories, newGrape.amount);
	basket->grape = newGrape;
}

void ChangeBanana(type_basket* basket, type_bananas newBanana) {
	printf("Banana with params: %s, %d kcal, %d fruit(s)\nWas changed to %s, %d kcal, %d fruit(s)\n\n",
		basket->banana.color, basket->banana.calories, basket->banana.amount,
		newBanana.color, newBanana.calories, newBanana.amount);
	basket->banana = newBanana;
}

void ChangeMango(type_basket* basket, type_mangos newMango) {
	printf("Mango with params: %s, %d kcal, %d fruit(s)\nWas changed to %s, %d kcal, %d fruit(s)\n\n",
		basket->mango.color, basket->mango.calories, basket->mango.amount,
		newMango.color, newMango.calories, newMango.amount);
	basket->mango = newMango;
}

int main() {
	type_apples apple1 = CreateApple();
	type_grapes grape1 = CreateGrape();
	type_bananas banana1 = CreateBanana();
	type_mangos mango1 = CreateMango();
	type_basket Basket1 = CreateBasket(apple1, grape1, banana1, mango1);
	InfoDevice(Basket1, 0);
	InfoDevice(Basket1, 1);
	printf("\n\nChange apple...\n\n");
	type_apples apple2 = CreateApple();
	ChangeApple(&Basket1, apple2);
	InfoDevice(Basket1, 1);
}
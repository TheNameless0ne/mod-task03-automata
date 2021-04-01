#pragma once
#include <string>

using namespace std;

enum STATES {
	OFF,
	WAIT,
	ACCEPT,
	CHECK,
	COOK
};

class Automata {
	unsigned int cash = 0;
	string menu[3] = {"Чай", "Кофе", "Какао"};
	unsigned int prices[3] = {120, 105, 110};
	STATES state = OFF;
	bool is_coocking = false;

	void check(unsigned int ch);
	void cancel();
	void cook();
	void finish();

public:
	void on();
	void off();
	void coin(unsigned int money);
	const string* etMenu();
	const STATES getState();
	void choice(unsigned int ch);
};
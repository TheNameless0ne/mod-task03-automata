#include "Automata.h"

void Automata::check(unsigned int ch) {
	if (cash >= prices[ch]) {
		cash -= prices[ch];
		cook();
	}
	else {
		cancel();
	}
}

void Automata::on() {
	cash = 0;
	state = WAIT;
}

void Automata::off() {
	state = OFF;
}

void Automata::coin(unsigned int money) {
	cash += money;
	state = ACCEPT;
}

const string* Automata::etMenu()
{
	return menu;
}

const STATES Automata::getState()
{
	return state;
}

void Automata::choice(unsigned int ch) {
	if (ch-1 < 3) {
		state = CHECK;
		check(ch);
	}
}

void Automata::cancel() {
	cash = 0;
	state = WAIT;
}

void Automata::cook() {
	state = COOK;
	is_coocking = true;
	finish();
}

void Automata::finish() {
	is_coocking = false;
	state = WAIT;
}

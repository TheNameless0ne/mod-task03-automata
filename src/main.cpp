#include <iostream>
#include "Automata.h"
#include <string>

using namespace std;

int main() {
	Automata A = Automata();
	A.on();
	A.coin(100);
	A.choice(1);
	A.coin(200);
	A.choice(1);
	A.coin(30);
	A.choice(3);
	A.off();
	return 0;
}


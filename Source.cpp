#include <iostream>
#include "pers.h"
#include <conio.h>
#define _CRT_SECURE_NO_WARNINGS
using namespace std;
int main() {
	Knight artur("Artur\0", 1000, 100, 50, 10);
	Knight fred("Fred\0", 1000, 110, 40, 15);
	print(artur);
	print(fred);
	while (true) {
		attack(artur, fred);
		if (isDead(fred)) break;
		attack(fred, artur);
		if (isDead(artur)) break;
		print(artur);
		print(fred);
		cout << "Press any key to continue\n";
		_getch();
		_getch();
	}
	if (isDead(artur)) cout << "Fred wins\n";
	if (isDead(fred)) cout << "Artur wins\n";
}
#include <cstdlib>
#include "pers.h"
#include <ctime>
#include <iostream>
#include <random>

int getDamage(const Knight& k1) {
	//srand(time(0)+a);
	std::random_device rd;
	std::mt19937 gen(rd());
	std::uniform_int_distribution<int> uid(0, 50);
	int rnd = uid(gen) - 25;
	std::cout << rnd<<std::endl;
	float random_add = rnd/100.0;
	float damage = k1.damage * (1 + random_add);
	return int(damage);
}
void attack(Knight& k1, Knight& k2) {
	k2.hp = k2.hp - getDamage(k1);
}
bool isDead(const Knight& k1) {
	return k1.hp <= 0;
}
void print(const Knight& k1) {
	std::cout << k1.name << " has " << k1.hp << " hp\n";
}
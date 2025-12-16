#include "Monster.h"
#include "Player.h"
#include <iostream>
#include <windows.h>
Monster::Monster(std::string name) {
	this->name = name;
	HP = 100;
	power = 30;
	defence = 10;
	speed = 10;
}

std::string Monster::getName() {
	return name;
}
int Monster::getHP() {
	return HP;
}
int Monster::getPower() {
	return power;
}
int Monster::getDefence() {
	return defence;
}
int Monster::getSpeed() {
	return speed;
}

void Monster::setName(std::string name) {
	this->name = name;
}
void Monster::setHP(int HP) {
	this->HP = HP;
}
void Monster::setPower(int power) {
	this->power = power;
}
void Monster::setDefence(int defence) {
	this->defence = defence;
}
void Monster::setSpeed(int speed) {
	this->speed = speed;
}

bool Monster::attack(Player* player) {
	int damage = getPower() - player->getDefence();
	if (damage <= 0) {
		damage = 1;
	}
	std::cout << name << " 이 " << player->getNickname() << " 에게 피해를 " << damage << " 만큼 주었습니다!" << std::endl;

	player->setHP(player->getHP() - damage);
	Sleep(250);
	if (player->getHP() > 0) {
		std::cout << "현재 체력은 : " << player->getHP() << " 만큼 남았습니다!" << std::endl;
	}
	else
	{
		std::cout << "플레이어 " << player->getNickname() << " 은 " << name << " 에게 패배하였습니다!" << std::endl;
		return true;
	}
	return false;
}

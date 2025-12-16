#pragma once
#include "Player.h"

class Warrior : public Player {
public:
	Warrior(std::string Nickname);
	bool attack() override;
	bool attack(Monster* monster) override;
};
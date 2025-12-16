#pragma once
#include "Player.h"

class Warrior : public Player {
public:
	Warrior(std::string Nickname);
	bool attack(Monster* monster) override;
};
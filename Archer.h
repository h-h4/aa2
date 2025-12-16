#pragma once
#include "Player.h"

class Archer : public Player {
public:
	Archer(std::string Nickname);
	bool attack() override;
	bool attack(Monster* monster) override;
};


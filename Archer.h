#pragma once
#include "Player.h"

class Archer : public Player {
public:
	Archer(std::string Nickname);
	bool attack(Monster* monster) override;
};


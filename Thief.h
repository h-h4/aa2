#pragma once
#include "Player.h"

class Thief : public Player {
public:
	Thief(std::string Nickname);
	bool attack(Monster* monster) override;
};
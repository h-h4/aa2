#pragma once
#include "Player.h"

class Magician : public Player {
public:
	Magician(std::string Nickname);
	bool attack(Monster* monster) override;
};
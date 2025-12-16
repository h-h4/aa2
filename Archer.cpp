#include "Archer.h"
#include "monster.h"
#include <iostream>

Archer::Archer(std::string Nickname) : Player(Nickname) {
	Job_name = "궁수";
	std::cout << "* 궁수로 전직을 선택하셨습니다!" << std::endl;
	HP = 50;
	MP = 30;
	Power = 30;
	Defence = 10;
	Accuracy = 75;
	Speed = 30;
}

bool Archer::attack() {
	std::cout << "* 활을 여러번 쏘았습니다." << std::endl;
	return false;
}

bool Archer::attack(Monster* monster) {
	int damage = getPower() - monster->getDefence();
	damage = damage / 3;
	if (damage <= 0) {
		damage = 1;
	}
	for (int i = 1; i <= 3; ++i) {
		if (monster->getHP() <= 0) {
			break;
		}
		std::cout << "몬스터" << monster->getName() << "에게 피해를 " << damage << " 만큼 주었습니다!" << std::endl;
		monster->setHP(monster->getHP() - damage);

		if (monster->getHP() <= 0) {
			std::cout << "몬스터 " << monster->getName() << "(을)를 물리쳤다!" << std::endl;
			return true;
		}
		else
		{
			std::cout << "몬스터의 체력이 : " << monster->getHP() << " 만큼 남았습니다!" << std::endl;
		}
	}
	return false;
}

	// 플레이어의 공격력-몬스터의 방어력을 계산하여 데미지로 정의합니다.
		// 계산된 데미지가 0 이하일 경우, 데미지를 1로 정의합니다.

		// 공격 문장을 출력합니다.
		// - 전사, 마법사: 계산된 데미지로 1회 공격
		// - 궁수: 계산된 데미지/3으로 3회 공격 (소수점 생략)
		// - 도적: 계산된 데미지/5으로 5회 공격 (소수점 생략)
		// - 궁수와 도적의 경우, 3과 5로 나눈 결과가 0이라면 1로 정의합니다.
		// ex) * 슬라임에게 화살로 3의 피해를 입혔다! 3번 출력

		// 몬스터의 setHP를 호출하여 몬스터의 HP-데미지를 계산한 값을 매개변수로 전달합니다.
		// 몬스터의 getHP를 호출 분기문이 실행됩니다.
		// 몬스터가 생존했을 경우 몬스터의 남은 HP 출력
		// 몬스터가 생존하지 못했을 경우 플레이어의 승리 문구 출력

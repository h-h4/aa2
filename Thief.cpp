#include "Thief.h"
#include "monster.h"
#include <iostream>
#include <windows.h>

Thief::Thief(std::string Nickname) : Player(Nickname) {
	Job_name = "도적";
	std::cout << "* 도적으로 전직을 선택하셨습니다!" << std::endl;
	HP = 70;
	MP = 50;
	Power = 50;
	Defence = 15;
	Accuracy = 40;
	Speed = 40;
}

bool Thief::attack(Monster* monster) {
	std::cout << monster->getName() << "에게 나이프를 휘둘렀습니다.\n" << std::endl;
	Sleep(500);
	int damage = getPower() - monster->getDefence();
	damage = damage / 5;
	if (damage <= 0) {
		damage = 1;
	}
	for (int i = 1; i <= 5; ++i) {
		if (monster->getHP() <= 0) {
			break;
		}
		std::cout << monster->getName() << "에게 피해를 " << damage << " 만큼 주었습니다!" << std::endl;
		monster->setHP(monster->getHP() - damage);
		Sleep(250);

		if (monster->getHP() <= 0) {
			std::cout << monster->getName() << "(을)를 물리쳤다!" << std::endl;
			return true;
		}
		else
		{
			std::cout << monster->getName() << "의 체력이 : " << monster->getHP() << " 만큼 남았습니다!" << std::endl;
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
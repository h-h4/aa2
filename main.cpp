#include <iostream>
#include "player.h"
#include "warrior.h"
#include "magician.h"
#include "thief.h"
#include "archer.h"
#include "Monster.h"
#include <Windows.h>

using namespace std;

void displayMenu() {
    cout << "\n=============================================" << endl;
    cout << "|             <전투 관리 시스템>            |" << endl;
    cout << "|===========================================|" << endl;
    cout << "|  1. 공격            |  2. 상태 확인       |" << endl;
    cout << "|  3. 몬스터 생성     |  0. 종료            |" << endl;
    cout << "---------------------------------------------" << endl;
    cout << "메뉴 선택 (0-2) : ";
}

// 메인 함수
int main() {
    string jobs[] = { "전사", "마법사", "도적", "궁수" };
    int job_choice = 0;
    string nickname;
    int choice = -99;

    Player* player = nullptr;
    Monster* monster = nullptr;

    cout << "* 닉네임을 입력해주세요: ";
    cin >> nickname;

    cout << "\n<전직 시스템>" << endl;
    cout << nickname << "님, 환영합니다!\n" << endl;
    cout << "* 원하시는 직업을 선택해주세요.\n" << endl;

    for (int i = 0; i < 4; i++) {
        cout << (i + 1) << ". " << jobs[i] << endl;
    }

    cout << "선택: ";
    cin >> job_choice;

    switch (job_choice) {
    case 1:
        player = new Warrior(nickname);
        break;
    case 2:
        player = new Magician(nickname);
        break;
    case 3:
        player = new Thief(nickname);
        break;
    case 4:
        player = new Archer(nickname);
        break;
    default:
        cout << "잘못된 입력입니다." << endl;
        return 1;
    }

    do {
        system("cls");
        displayMenu();
        cin >> choice;
        cin.ignore(10000, '\n');

        switch (choice) {
        case 1:
            if (monster == nullptr) {
<<<<<<< HEAD
                cout << "* ���� ������ ���Ͱ� �����ϴ�. ���ο� ���͸� �����ؾ� �մϴ�!" << endl;
=======
                cout << "* 현재 공격할 몬스터가 없습니다. 새로운 몬스터를 생성해야 합니다!" << endl;
                break;
>>>>>>> f68342b029083d8559906a6e0dec1ce52565224d
            }
            else {
                bool isMonsterKilled = player->attack(monster);

                if (isMonsterKilled) {
                    delete monster;
                    monster = nullptr;
                    cout << "����ġ�� ȹ���߽��ϴ�!" << endl;
                }
                else {
                    Sleep(1000);
                    cout << "\n--- ������ �� ---" << endl;
                    cout << monster->getName() << "��(��) " << nickname << "��(��) �����մϴ�!" << endl;
                    monster->attack(player);
                    if (player->getHP() <= 0) {
                        cout << nickname << "��(��) ���������ϴ�... ���� ����." << endl;
                        choice = 0;
                    }
                }
            }
             break;
        case 2:
            player->printPlayerStatus();
            break;
        case 3:
            if (monster == nullptr) {
                monster = new Monster("슬라임");
                cout << "* 새로운 몬스터를 생성했습니다!" << endl;
                break;
            }
            else
            {
                cout << "이미 몬스터가 생성되어 있습니다!" << endl;
                break;
            }
        case 0:
            std::cout << "시스템을 종료합니다." << endl;
            break;
        default:
            cout << "\n[경고] 메뉴 번호는 0 에서 2 사이여야 합니다.\n";
            break;
        }
        if (choice != 0) {
            cout << "\n[알림] 확인하셨다면 Enter키를 눌러주세요.";
            cin.get();
        }
    } while (choice != 0);

    if (player != nullptr) {
        delete player;
    }

    if (monster != nullptr) {
        delete monster;
    }
    return 0;
}

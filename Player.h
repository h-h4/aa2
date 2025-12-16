#pragma once
#include <string>

class Monster;

class Player {
public:
    Player(std::string nickname);

    virtual bool attack() = 0;
    virtual bool attack(Monster* monster) = 0;
    void printPlayerStatus();

    // getter 함수
    std::string getJobName();
    std::string getNickname();
    int getLevel();
    int getHP();
    int getMP();
    int getPower();
    int getDefence();
    int getAccuracy();
    int getSpeed();

    // setter 함수
    void setNickname(std::string Nickname);
    void setHP(int HP);
    void setMP(int MP);
    void setPower(int Power);
    void setDefence(int Defence);
    void setAccuracy(int Accuracy);
    void setSpeed(int Speed);

protected:
    std::string Job_name;
    std::string Nickname;
    int Level;
    int HP;
    int MP;
    int Power;
    int Defence;
    int Accuracy;
    int Speed;
};
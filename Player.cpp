#include "player.h"

#include <iostream>

Player::Player(std::string Nickname) {
    this->Nickname = Nickname;
    Job_name = "무직";
    Level = 0;
    HP = 10;
    MP = 10;
    Power = 5;
    Defence = 5;
    Accuracy = 1;
    Speed = 5;
}

std::string Player::getJobName() {
    return Job_name;
}
std::string Player::getNickname() {
    return Nickname;
}
int Player::getLevel() {
    return Level;
}
int Player::getHP() {
    return HP;
}
int Player::getMP() {
    return MP;
}
int Player::getPower() {
    return Power;
}
int Player::getDefence() {
    return Defence;
}
int Player::getAccuracy() {
    return Accuracy;
}
int Player::getSpeed() {
    return Speed;
}

void Player::setNickname(std::string Nickname) {
    this->Nickname = Nickname;
}
void Player::setHP(int HP) {
    this->HP = HP;
}
void Player::setMP(int MP) {
    this->MP = MP;
}
void Player::setPower(int Power) {
    this->Power = Power;
}
void Player::setDefence(int Defence) {
    this->Defence = Defence;
}
void Player::setAccuracy(int Accuracy) {
    this->Accuracy = Accuracy;
}
void Player::setSpeed(int Speed) {
    this->Speed = Speed;
}

void Player::printPlayerStatus() {
    std::cout << "------------------------------------" << std::endl;
    std::cout << "* 현재 능력치" << std::endl;
    std::cout << "닉네임: " << Nickname << std::endl;
    std::cout << "Lv. " << Level << std::endl;
    std::cout << "HP: " << HP << std::endl;
    std::cout << "MP: " << MP << std::endl;
    std::cout << "공격력: " << Power << std::endl;
    std::cout << "방어력: " << Defence << std::endl;
    std::cout << "정확도: " << Accuracy << std::endl;
    std::cout << "속도: " << Speed << std::endl;
    std::cout << "------------------------------------" << std::endl;
}
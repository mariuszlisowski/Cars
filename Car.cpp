#include <iostream>

#include "Car.hpp"

Car::Car() {
    std::cout << "* " << __FUNCTION__ << std::endl;
}

Car::~Car() {
    std::cout << "* " << __FUNCTION__ << std::endl;
}

void Car::turnLeft() {
    std::cout << __FUNCTION__ << std::endl;
}

void Car::turnRight() {
    std::cout << __FUNCTION__ << std::endl;
}

void Car::brake() {
    std::cout << __FUNCTION__;
    speed_ = 0;
    std::cout << " : stopped" << std::endl;
}

void Car::accelerateTo(int speed) {
    std::cout << __FUNCTION__;
    if (speed >= 0) {
        speed_ = speed;
        std::cout << " : " << speed << std::endl;
    } else {
        std::cout << " : speed must be positive" << std::endl;
    }
}

int Car::getSpeed(){
    return speed_;
}

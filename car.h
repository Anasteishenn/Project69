#pragma once
#include "transport.h"
class Car :
    public Transport
{
private:
    int power;
    int speed;
    double consumptions;
public:
    Car():power(0), speed (0), consumptions(0){}
    Car(int power, int speed, double consumptions, int tank)
        Transport(tank), power(power), speed(speed),
};


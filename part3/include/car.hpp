#pragma once

#include <string>
#include <iostream>

class Car{
    private:
    int weight, topSpeed;

    public:

    Car(int weight, int topSpeed, std::string make);
    std::string make;

    int getWeight(){
        return weight;
    }
    int getTopSpeed(){
        return topSpeed;
    }
};
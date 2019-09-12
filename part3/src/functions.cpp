#include "functions.hpp"

int Functions::square(int num){
    return pow(num, 2);
}

int Functions::calculatePrice(int weight, int topSpeed){
    int price = Functions::square(topSpeed)/weight*100000;
    return price;
}

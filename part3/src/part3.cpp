#include "functions.hpp"
#include "car.hpp"

int main(){
    Functions f = Functions();

    Car car1 = Car(1000, 300, "Ferrari");  // Car with weight 1000kg and top speed 300 km/h
    Car car2 = Car(2000, 80, "Chevrolet");  // Car with weight 2000kg and top speed 80 km/h 

    std::string make1 = car1.make;
    std::string make2 = car2.make;
    
    //int price1 = f.calculatePrice(car1.weight, car1.topSpeed)
    int price1 = f.calculatePrice(car1.getWeight(), car1.getTopSpeed());

    //int price2 = f.calculatePrice(car2.weight, car2.topSpeed)


    std::cout << "The " << make1 << " costs " << price1 << " NOK" << std::endl;
    //std::cout << "The " << make2 << " costs " << price2 << " NOK" << std::endl;

    return 0;
}

 
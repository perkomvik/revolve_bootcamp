#include "person.hpp"

int main(){
    Person person1 = Person();
    person1.name = "Per";
    person1.age = 24;
    std::cout << person1.greeting() << std::endl;
}
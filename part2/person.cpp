#include "person.hpp"

std::string Person::greeting(){
    std::string msg = "Hi! My name is " + name + ", and I am " + std::to_string(age) + " years old.";
    return msg;
}
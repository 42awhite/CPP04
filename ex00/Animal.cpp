#include "Animal.hpp"

Animal::Animal() {
    std::cout << "Animal constructor called." << std::endl;
}

Animal::~Animal() {
    // Destructor
    std::cout << "Animal destructor called." << std::endl;
}

Animal::Animal(const Animal &other) {
    // Copy constructor
    type = other.type;
    std::cout << "Animal copy constructor called." << std::endl;
}

Animal& Animal::operator=(const Animal &other) {
    // Copy assignment operator
    if (this != &other) {
        type = other.type;
    }
    std::cout << "Animal copy assignment operator called." << std::endl;
    return *this;
}

std::string Animal::getType() const {
    return type;
}

void Animal::makeSound() const {
    std::cout << "Animal makes a generic sound: GLUGLUGLUGLUGLU!." << std::endl;
}



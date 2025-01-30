#include "AAnimal.hpp"

AAnimal::AAnimal() {
    std::cout << "AAnimal constructor called." << std::endl;
}

AAnimal::~AAnimal() {
    // Destructor
    std::cout << "AAnimal destructor called." << std::endl;
}

AAnimal::AAnimal(const AAnimal &other) {
    // Copy constructor
    type = other.type;
    std::cout << "AAnimal copy constructor called." << std::endl;
}

AAnimal& AAnimal::operator=(const AAnimal &other) {
    // Copy assignment operator
    if (this != &other) {
        type = other.type;
    }
    std::cout << "AAnimal copy assignment operator called." << std::endl;
    return *this;
}

std::string AAnimal::getType() const {
    return type;
}

void AAnimal::makeSound() const {
    std::cout << "AAnimal makes a generic sound: GLUGLUGLUGLUGLU!." << std::endl;
}



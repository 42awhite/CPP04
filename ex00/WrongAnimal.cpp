#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("WrongAnimal") {
    // Constructor
    std::cout << "WrongAnimal constructor called." << std::endl;
}

WrongAnimal::~WrongAnimal() {
    // Destructor
    std::cout << "WrongAnimal destructor called." << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& other) : type(other.type) {
    std::cout << "WrongAnimal copy constructor called." << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other) {
    if (this != &other) {
        type = other.type;
    }
    std::cout << "WrongAnimal copy assignment operator called." << std::endl;
    return *this;
}

std::string WrongAnimal::getType() const {
    return type;
}

void WrongAnimal::makeSound() const {
    std::cout << "WrongAnimal makes a wrong sound." << std::endl;
}

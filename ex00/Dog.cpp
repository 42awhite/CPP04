#include "Dog.hpp"

Dog::Dog() {
    // Constructor
    type = "Dog";
    std::cout << "Dog constructor called." << std::endl;
}

Dog::~Dog() {
    std::cout << "Dog destructor called." << std::endl;
    // Destructor
}

Dog::Dog(const Dog &other) : Animal(other) {
    // Copy constructor
    std::cout << "Dog copy constructor called." << std::endl;
}

Dog & Dog::operator=(const Dog &other) {
    // Copy assignment operator
    if (this != &other) { // Prevenir autoasignación
        Animal::operator=(other); // Reutiliza el operador de Animal
    }
    std::cout << "Dog assignment operator called." << std::endl;
    return *this;
}

void Dog::makeSound() const {
    std::cout << "Woof! Woof!" << std::endl;
}

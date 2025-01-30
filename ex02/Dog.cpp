#include "Dog.hpp"

Dog::Dog() {
    // Constructor
    type = "Dog";
    brain = new Brain();
    std::cout << "Dog constructor called." << std::endl;
}

Dog::~Dog() {
    delete brain;
    std::cout << "Dog destructor called." << std::endl;
    // Destructor
}

Dog::Dog(const Dog &other) : AAnimal(other) {
    // Copy constructor
    brain = new Brain(*other.brain);
    std::cout << "Dog copy constructor called." << std::endl;
}

Dog & Dog::operator=(const Dog &other) {
    // Copy assignment operator
    if (this != &other) { // Prevenir autoasignación
        AAnimal::operator=(other); // Reutiliza el operador de AAnimal
        *brain = *other.brain;
    }
    std::cout << "Dog assignment operator called." << std::endl;
    return *this;
}

void Dog::makeSound() const {
    std::cout << "Woof! Woof!" << std::endl;
}

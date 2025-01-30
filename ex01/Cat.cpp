#include "Cat.hpp"

Cat::Cat() {
    // Constructor
    type = "Cat";
    brain = new Brain();
    std::cout << "Cat constructor called." << std::endl;
}

Cat::~Cat() {
    delete brain;
    std::cout << "Cat destructor called." << std::endl;
    // Destructor
}

Cat::Cat(const Cat &other) : Animal(other) {
    // Copy constructor
    brain = new Brain(*other.brain);
    std::cout << "Cat copy constructor called." << std::endl;
}

Cat & Cat::operator=(const Cat &other) {
    // Copy assignment operator
    if (this != &other) { // Prevenir autoasignación
        Animal::operator=(other); // Reutiliza el operador de Animal
        *brain = *other.brain;
    }
    std::cout << "Cat assignment operator called." << std::endl;
    return *this;
}

void Cat::makeSound() const {
    std::cout << "Miaaaaauuuuu" << std::endl;
}

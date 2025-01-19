#include "Cat.hpp"

Cat::Cat() {
    // Constructor
    type = "Cat";
    std::cout << "Cat constructor called." << std::endl;
}

Cat::~Cat() {
    std::cout << "Cat destructor called." << std::endl;
    // Destructor
}

Cat::Cat(const Cat &other) : Animal(other) {
    // Copy constructor
    std::cout << "Cat copy constructor called." << std::endl;
}

Cat & Cat::operator=(const Cat &other) {
    // Copy assignment operator
    if (this != &other) { // Prevenir autoasignación
        Animal::operator=(other); // Reutiliza el operador de Animal
    }
    std::cout << "Cat assignment operator called." << std::endl;
    return *this;
}

void Cat::makeSound() const {
    std::cout << "Miaaaaauuuuu" << std::endl;
}

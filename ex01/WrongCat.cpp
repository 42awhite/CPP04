#include "WrongCat.hpp"

WrongCat::WrongCat() {
    type = "WrongCat";
    std::cout << "WrongCat constructor called." << std::endl;
}

WrongCat::~WrongCat() {
    std::cout << "WrongCat destructor called." << std::endl;
}

WrongCat::WrongCat(const WrongCat &other) {
    // Copy constructor
}

WrongCat & WrongCat::operator=(const WrongCat &other) {
    if (this != &other) { // Prevenir autoasignación
        WrongCat::operator=(other); // Reutiliza el operador de Animal
    }
    std::cout << "WrongCat assignment operator called." << std::endl;
    return *this;
}

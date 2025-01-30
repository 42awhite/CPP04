#include "Brain.hpp"

//Constructor
Brain::Brain() {
    std::cout << "Brain constructor called." << std::endl;
}

//Constructor de copia
Brain::Brain(const Brain &other) {
    *this = other;
    std::cout << "Brain copy constructor called." << std::endl;
}

//Operador =
Brain &Brain::operator=(const Brain &other) {
    if (this != &other) {
        for (int i = 0; i < 100; i++) {
            ideas[i] = other.ideas[i];
        }
    }
    std::cout << "Brain assignment operator called." << std::endl;
    return *this;
}

//Destructor
Brain::~Brain() {
    std::cout << "Brain destructor called." << std::endl;
}


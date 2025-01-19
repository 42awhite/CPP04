#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog {
public:
    Dog();
    ~Dog();
    Dog(const Dog &other);
    Dog &operator=(const Dog &other);

    void makeSound() const override;
};

#endif // DOG_HPP

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat {
public:
    Cat();
    ~Cat();
    Cat(const Cat &other);
    Cat &operator=(const Cat &other);

    void makeSound() const override;
};

#endif // CAT_HPP

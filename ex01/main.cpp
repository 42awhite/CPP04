#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main() {
    const Animal* Toby = new Dog();
    const Animal* Michifu = new Cat();
    delete Toby;
    delete Michifu;
    
    std::cout << "\n---- Animal Array Test ----\n";
    Animal* animals[6];
    for (int i = 0; i < 3; i++) animals[i] = new Dog();
    for (int i = 3; i < 6; i++) animals[i] = new Cat();
    for (int i = 0; i < 6; i++) delete animals[i];
    return 0;
}


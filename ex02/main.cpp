#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main() {
    const AAnimal* Toby = new Dog();
    const AAnimal* Michifu = new Cat();
    delete Toby;
    delete Michifu;
    
    std::cout << "\n---- AAnimal Array Test ----\n";
    AAnimal* Aanimals[6];
    for (int i = 0; i < 3; i++) Aanimals[i] = new Dog();
    for (int i = 3; i < 6; i++) Aanimals[i] = new Cat();
    for (int i = 0; i < 6; i++) delete Aanimals[i];
    //const AAnimal *meta = new AAnimal();
    return 0;
}


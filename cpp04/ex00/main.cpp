#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include <iostream>

#include "WrongAnimal.hpp"
#include "WrongCat.hpp"


    int main()
{
    {
        const Animal *meta = new Animal();
        const Animal *j = new Dog();
        const Animal *i = new Cat();

        std::cout << j->getType() << " " << std::endl;
        std::cout << i->getType() << " " << std::endl;
        i->makeSound();    // will output the cat sound!
        j->makeSound();    // will output the dog sound!
        meta->makeSound(); // will output the animal sound!

        delete meta;
        delete j;
        delete i;
    }

    {
        std::cout << "\n :: WrongAnimal/WrongCat Test ::\n" << std::endl;
        const WrongAnimal *wa = new WrongAnimal();
        const WrongAnimal *wc = new WrongCat();

        std::cout << wc->getType() << " " << std::endl;
        wc->makeSound(); // Por não ser virtual, vai chamae WrongAnimal::makeSound()
        wa->makeSound();

        delete wa;
        delete wc;

        WrongCat realWrongCat;
        realWrongCat.makeSound(); // Vai imprimir "Meow? (WrongCat)"
    }

    return 0;
}
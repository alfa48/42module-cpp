#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include <iostream>

int main()
{
    {
        Dog dog1;
        Dog dog2 = dog1; // Testa construtor de cópia
        Dog dog3;
        dog3 = dog1; // Testa operador de atribuição

        Cat cat1;
        Cat cat2 = cat1; // Testa construtor de cópia
        Cat cat3;
        cat3 = cat1; // Testa operador de atribuição
    }

    std::cout << " \n\n " << std::endl;
    std::cout << " \n\n " << std::endl;
    std::cout << " \n\n " << std::endl;

    {
        const AAnimal *j = new Dog();
        const AAnimal *i = new Cat();

        std::cout << j->getType() << " " << std::endl;
        std::cout << i->getType() << " " << std::endl;
        i->makeSound();
        j->makeSound();

        delete j;
        delete i;
    }

    std::cout << " \n\n " << std::endl;
    std::cout << " \n\n " << std::endl;
    std::cout << " \n\n " << std::endl;

    {
        const int size = 10;
        AAnimal *animals[size];

        for (int i = 0; i < size / 2; ++i)
            animals[i] = new Dog();

        std::cout << " \n\n " << std::endl;

        for (int i = size / 2; i < size; ++i)
            animals[i] = new Cat();

        std::cout << " \n\n " << std::endl;

        for (int i = 0; i < size; ++i)
            animals[i]->makeSound();

        std::cout << " \n\n " << std::endl;

        for (int i = 0; i < size; ++i)
            delete animals[i];
    }

    {
        AAnimal *dog = new Dog();
        AAnimal *cat = new Cat();

        dog->makeSound();
        cat->makeSound();

        delete dog;
        delete cat;
    }

    {
        const int n = 4;
        AAnimal *animals[n] = {new Dog(), new Dog(), new Cat(), new Cat()};

        for (int i = 0; i < n; ++i)
            animals[i]->makeSound();

        for (int i = 0; i < n; ++i)
            delete animals[i];
    }

    return 0;
}
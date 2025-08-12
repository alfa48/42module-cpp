#include "FragTrap.hpp"
#include <iostream>

int main()
{
     std::cout << "=== Criando FragTrap default ===" << std::endl;
    FragTrap ft1;
    ft1.showStatus();

    std::cout << "\n=== Criando FragTrap com nome ===" << std::endl;
    FragTrap ft2("Explosivo");
    ft2.showStatus();

    std::cout << "\n=== Testando ataque ===" << std::endl;
    ft2.attack("Inimigo");
    ft2.showStatus();

    std::cout << "\n=== Testando takeDamage ===" << std::endl;
    ft2.takeDamage(50);
    ft2.showStatus();

    std::cout << "\n=== Testando beRepaired ===" << std::endl;
    ft2.beRepaired(20);
    ft2.showStatus();

    std::cout << "\n=== Testando highFivesGuys ===" << std::endl;
    ft2.highFivesGuys();

    std::cout << "\n=== Testando construtor de cópia ===" << std::endl;
    FragTrap ft3(ft2);
    ft3.showStatus();

    std::cout << "\n=== Testando operador de atribuição ===" << std::endl;
    ft1 = ft3;
    ft1.showStatus();

    std::cout << "\n=== Fim do programa ===" << std::endl;
    return 0;
}

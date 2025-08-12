#include "DiamondTrap.hpp"
#include <iostream>



int main()
{
   std::cout << "=== Criando DiamondTrap default ===" << std::endl;
    DiamondTrap d1;
    d1.showStatus();

    std::cout << "\n=== Criando DiamondTrap com nome ===" << std::endl;
    DiamondTrap d2("Diamante");
    d2.showStatus();

    std::cout << "\n=== Testando ataque do DiamondTrap ===" << std::endl;
    d2.attack("Inimigo Final");

    std::cout << "\n=== Testando whoAmI ===" << std::endl;
    d2.whoAmI();

    std::cout << "\n=== Testando reparo e dano ===" << std::endl;
    d2.takeDamage(30);
    d2.beRepaired(20);
    d2.takeDamage(150);

    std::cout << "\n=== Testando cópia ===" << std::endl;
    DiamondTrap d3(d2);
    d3.showStatus();
    d3.whoAmI();

    std::cout << "\n=== Testando operador de atribuição ===" << std::endl;
    d1 = d3;
    d1.showStatus();
    d1.highFivesGuys();
    d1.whoAmI();

    std::cout << "\n=== Fim do programa ===" << std::endl;
    return 0;
}

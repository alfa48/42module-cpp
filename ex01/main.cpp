#include "ScavTrap.hpp"

int main()
{
    std::cout << "=== Criando ScavTrap default ===" << std::endl;
    ScavTrap scav1;
    scav1.showStatus();

    std::cout << "\n=== Criando ScavTrap com nome ===" << std::endl;
    ScavTrap scav2("Guardião");

    std::cout << "\n=== Ataque do ScavTrap ===" << std::endl;
    scav2.attack("Invasor");

    std::cout << "\n=== Ativando modo Gate Keeper ===" << std::endl;
    scav2.guardGate();
    scav2.attack("invasor0.1");
    scav2.takeDamage(84);
    scav2.beRepaired(-349);
    scav2.showStatus();

    std::cout << "\n=== Testando cópia ===" << std::endl;
    ScavTrap scav3(scav2);
    scav3.attack("Outro Invasor");

    std::cout << "\n=== Testando operador de atribuição ===" << std::endl;
    scav1 = scav3;
    scav1.attack("Terceiro Invasor");

    std::cout << "\n=== Fim do programa ===" << std::endl;
    return 0;
}

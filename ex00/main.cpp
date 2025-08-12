#include "ClapTrap.hpp"

#include "ClapTrap.hpp"
#include <iostream>
#include <cstdlib> // abs() para int, valor absoluto

void printSeparator(std::string title = "")
{
    std::cout << "\n=== " << title << " ===\n"
              << std::endl;
}

int main()
{

    {

        std::cout << "\n=== Criando ClapTrap ===" << std::endl;
        ClapTrap ct1("Robôzinho");
        ct1.showStatus();

        std::cout << "\n=== Testando ataque ===" << std::endl;
        ct1.attack("Alvo");
        ct1.showStatus();

        std::cout << "\n=== Testando dano ===" << std::endl;
        ct1.takeDamage(5);
        ct1.showStatus();

        std::cout << "\n=== Testando reparo ===" << std::endl;
        ct1.beRepaired(3);

        std::cout << "\n=== Testando cópia ===" << std::endl;
        ClapTrap ct2(ct1); // operador de cópia
        ct2.attack("Outro Alvo");

        std::cout << "\n=== Testando atribuição ===" << std::endl;
        ClapTrap ct3;
        ct3 = ct1; // operador de atribuição
        ct3.attack("Mais um Alvo");

        std::cout << "\n=== Fim do teste ===" << std::endl;
    }

    return 0;
}

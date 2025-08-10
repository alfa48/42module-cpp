#include "ClapTrap.hpp"

#include "ClapTrap.hpp"
#include <iostream>

void printSeparator(std::string title = "") {
    std::cout << "\n=== " << title << " ===\n" << std::endl;
}

int main() {
    printSeparator("TESTE 1 - Criando ClapTrap");
    ClapTrap ct1("Alpha");

    printSeparator("TESTE 2 - Atacando normalmente");
    ct1.attack("TargetBot");

    printSeparator("TESTE 3 - Tomando dano");
    ct1.takeDamage(4); // Deve diminuir os hit points de 10 → 6

    printSeparator("TESTE 4 - Reparando-se");
    ct1.beRepaired(3); // Deve aumentar os hit points de 6 → 9

    printSeparator("TESTE 5 - Energia se esgota");
    for (int i = 0; i < 10; ++i) {
        ct1.attack("Dummy"); // Após 10 ataques, energia deve chegar a 0
    }
    ct1.attack("DummySemEnergia"); // Deve falhar (sem energia)
    ct1.beRepaired(5); // Deve falhar (sem energia)

    printSeparator("TESTE 6 - Morre ao tomar dano");
    ct1.takeDamage(50); // Hit points vão a 0
    ct1.attack("Mesmo morto"); // Deve falhar
    ct1.beRepaired(10); // Deve falhar

    printSeparator("TESTE 7 - Vários ClapTraps");
    ClapTrap ct2("Bravo");
    ClapTrap ct3("Charlie");
    ct2.attack("Alvo1");
    ct3.takeDamage(5);
    ct3.beRepaired(2);

    printSeparator("FIM DOS TESTES");

    return 0;
}

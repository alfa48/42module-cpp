#include "FragTrap.hpp"
#include <iostream>

// Teste 1: Construtor por nome + destrutor automático
void scopeTest1()
{
    std::cout << "\n--- Escopo 1: Construtor com nome (herança) ---" << std::endl;
    std::cout << "-> Esperado: chamada ao construtor de ClapTrap e depois ao de FragTrap com o nome 'Alpha'.\n"
              << "-> Ao sair do escopo, o destrutor de FragTrap deve ser chamado (automaticamente), depois o de ClapTrap.\n";

    FragTrap ft1("Alpha");
    ft1.showStatus();
}

// Teste 2: Método herdado sobrescrito (attack)
void scopeTest2()
{
    std::cout << "\n--- Escopo 2: Método sobrescrito da subclasse (attack) ---" << std::endl;
    std::cout << "-> Esperado: FragTrap 'Bravo' ataca e consome 1 ponto de energia.\n"
              << "-> O ataque deve usar os valores de ataque definidos na subclasse (30 de dano).\n";

    FragTrap ft2("Bravo");
    ft2.attack("TargetDummy");
}

// Teste 3: Método específico da subclasse (highFivesGuys)
void scopeTest3()
{
    std::cout << "\n--- Escopo 3: Método exclusivo da subclasse (highFivesGuys) ---" << std::endl;
    std::cout << "-> Esperado: FragTrap 'Charlie' pede um high five (mensagem positiva no terminal).\n";

    FragTrap ft3("Charlie");
    ft3.highFivesGuys();
}

// Teste 4: Cópia via construtor (copy constructor)
void scopeTest4()
{
    std::cout << "\n--- Escopo 4: Cópia via construtor (FragTrap ft4_copy(ft4_original)) ---" << std::endl;
    std::cout << "-> Esperado: chamada ao construtor de cópia de ClapTrap e depois de FragTrap.\n"
              << "-> O novo objeto deve ter o mesmo estado interno (status) que o original.\n";

    FragTrap ft4_original("Delta");
    FragTrap ft4_copy(ft4_original);
    ft4_copy.showStatus();
}

// Teste 5: Atribuição via operador de atribuição
void scopeTest5()
{
    std::cout << "\n--- Escopo 5: Teste de atribuição (operator=) ---" << std::endl;
    std::cout << "-> Esperado: chamada ao operador= de FragTrap.\n"
              << "-> Este operador chama o operator= de ClapTrap para copiar os membros herdados.\n"
              << "-> O objeto ft5_b deve copiar os atributos de ft5_a corretamente.\n";

    FragTrap ft5_a("Echo");
    FragTrap ft5_b; // usa construtor padrão
    ft5_b = ft5_a;  // teste de operator=
    ft5_b.showStatus();
}

int main()
{
    scopeTest1();
    scopeTest2();
    scopeTest3();
    scopeTest4();
    scopeTest5();

    std::cout << "\n--- Fim dos testes ---\n"
              << std::endl;
    return 0;
}

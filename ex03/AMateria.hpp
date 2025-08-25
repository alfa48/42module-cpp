#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <string>
#include "ICharacter.hpp" // Certifique-se de implementar essa interface também

class AMateria
{
protected:
    std::string type;

public:
    AMateria(std::string const &type);
    AMateria(const AMateria &other);
    AMateria &operator=(const AMateria &other);
    virtual ~AMateria();

    std::string const &getType() const;  // Returns the materia type
    virtual AMateria *clone() const = 0; // Pure virtual, torna a classe abstrata
    virtual void use(ICharacter &target);
};

#endif
#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
    for (int i = 0; i < 4; ++i)
        _prototypes[i] = nullptr;
}

MateriaSource::MateriaSource(const MateriaSource& other) {
    for (int i = 0; i < 4; ++i) {
        if (other._prototypes[i])
            _prototypes[i] = other._prototypes[i]->clone();
        else
            _prototypes[i] = nullptr;
    }
}

MateriaSource& MateriaSource::operator=(const MateriaSource& other) {
    if (this != &other) {
        for (int i = 0; i < 4; ++i) {
            if (_prototypes[i])
                delete _prototypes[i];
            if (other._prototypes[i])
                _prototypes[i] = other._prototypes[i]->clone();
            else
                _prototypes[i] = nullptr;
        }
    }
    return *this;
}

MateriaSource::~MateriaSource() {
    for (int i = 0; i < 4; ++i)
        delete _prototypes[i];
}

void MateriaSource::learnMateria(AMateria* m) {
    if (!m)
        return;
    for (int i = 0; i < 4; ++i) {
        if (!_prototypes[i]) {
            _prototypes[i] = m;
            return;
        }
    }
    // Full, do nothing
}

AMateria* MateriaSource::createMateria(std::string const& type) {
    for (int i = 0; i < 4; ++i) {
        if (_prototypes[i] && _prototypes[i]->getType() == type)
            return _prototypes[i]->clone();
    }
    return nullptr;
}
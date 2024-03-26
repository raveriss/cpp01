#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <string>
#include <iostream>

/**
 * @brief Classe représentant un zombie.
 *
 * Cette classe définit un zombie caractérisé par un nom. Elle permet de créer des zombies,
 * de leur attribuer un nom après leur création, de les détruire, et de les faire annoncer leur présence.
 */
class Zombie {
public:
    Zombie();
    Zombie(const std::string &name); // Ajout du constructeur qui accepte un std::string
    ~Zombie();
    void setName(const std::string &name);
    void announce() const;

private:
    std::string _name;
};

Zombie* zombieHorde(int N, std::string name);

#endif

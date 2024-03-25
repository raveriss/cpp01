#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <string>
#include <iostream>

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

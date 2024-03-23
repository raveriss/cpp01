#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <string>

class Zombie {
public:
    Zombie();
    void setName(const std::string &name);
    void announce() const;
    ~Zombie();

private:
    std::string _name;
};

Zombie* zombieHorde(int N, std::string name);

#endif

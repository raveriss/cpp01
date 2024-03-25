/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raveriss <raveriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 12:09:16 by raveriss          #+#    #+#             */
/*   Updated: 2024/03/25 17:22:36 by raveriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// HumanB.cpp
#include "../include/HumanB.hpp"

HumanB::HumanB(const std::string& name) : name(name), weapon(NULL) {}

void HumanB::setWeapon(Weapon& weapon) {
    this->weapon = &weapon;
}

void HumanB::attack() const {
    if (weapon) {
        std::cout << name << " attacks with their " << weapon->getType() << std::endl;
    } else {
        std::cout << name << " has no weapon" << std::endl;
    }
}

/**
 * @brief Destructeur de la classe Zombie.
 * Affiche un message dans la console lorsqu'un Zombie est détruit.
 */
HumanB::~HumanB() {
    std::cout << name << " is destroyed." << std::endl;
}

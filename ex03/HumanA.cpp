/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raveriss <raveriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 12:08:40 by raveriss          #+#    #+#             */
/*   Updated: 2024/03/23 11:36:22 by raveriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(const std::string& name, Weapon& weapon) : name(name), weapon(weapon) {}

void HumanA::attack() const {
    std::cout << name << " attacks with their " << weapon.getType() << std::endl;
}

/**
 * @brief Destructeur de la classe Zombie.
 * Affiche un message dans la console lorsqu'un Zombie est détruit.
 */
HumanA::~HumanA() {
    std::cout << name << " is destroyed." << std::endl;
}

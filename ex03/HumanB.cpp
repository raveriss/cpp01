/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raveriss <raveriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 12:09:16 by raveriss          #+#    #+#             */
/*   Updated: 2024/03/14 12:09:18 by raveriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// HumanB.cpp
#include "HumanB.hpp"

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
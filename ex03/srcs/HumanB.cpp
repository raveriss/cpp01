/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raveriss <raveriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 12:09:16 by raveriss          #+#    #+#             */
/*   Updated: 2024/03/26 16:28:57 by raveriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/HumanB.hpp"

/**
 * @brief Constructeur de HumanB initialisant le nom et l'arme à NULL.
*/
HumanB::HumanB(const std::string& name) : name(name), weapon(NULL) {}

/*
 * @brief Définit l'arme pour HumanB.
*/
void HumanB::setWeapon(Weapon& weapon) {
	this->weapon = &weapon;
}

/**
 * @brief Méthode pour attaquer
 */
void HumanB::attack() const {
	if (weapon) {
		std::cout << name << " attacks with their " << weapon->getType() << std::endl;
	} else {
		std::cout << name << " has no weapon" << std::endl;
	}
}

/**
 * @brief Destructeur de la classe HumanB
 */
HumanB::~HumanB() {
	std::cout << name << " is destroyed." << std::endl;
}

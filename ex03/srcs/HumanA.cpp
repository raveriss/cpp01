/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raveriss <raveriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 12:08:40 by raveriss          #+#    #+#             */
/*   Updated: 2024/03/26 16:27:49 by raveriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/HumanA.hpp"

/**
 * @brief Constructeur de la classe HumanA avec un nom et une arme
 */
HumanA::HumanA(const std::string& name, Weapon& weapon) : name(name), weapon(weapon) {}

/**
 * @brief Méthode pour attaquer
 */
void HumanA::attack() const {
    std::cout << name << " attacks with their " << weapon.getType() << std::endl;
}

/**
 * @brief Destructeur de la classe HumanA
 */
HumanA::~HumanA() {
    std::cout << name << " is destroyed." << std::endl;
}

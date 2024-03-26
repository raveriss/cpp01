/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raveriss <raveriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 12:07:46 by raveriss          #+#    #+#             */
/*   Updated: 2024/03/26 16:29:36 by raveriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Weapon.hpp"

/**
 * @brief Constructeur de la classe Weapon
 * @param type: type de l'arme
 */
Weapon::Weapon(const std::string& type) : type(type) {}

/**
 * @brief Destructeur de la classe Weapon
 */
Weapon::~Weapon() {}

/**
 * @brief Méthode pour obtenir le type de l'arme
 * @return type de l'arme
 */
const std::string& Weapon::getType() const {
    return type;
}

/**
 * @brief Méthode pour définir le type de l'arme
 * @param type: nouveau type de l'arme
 */
void Weapon::setType(const std::string& type) {
    this->type = type;
}


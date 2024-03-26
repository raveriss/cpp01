/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raveriss <raveriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 17:43:47 by raveriss          #+#    #+#             */
/*   Updated: 2024/03/26 16:26:00 by raveriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.hpp"

/**
 * @brief Constructeur par défaut de la classe Zombie
 */
Zombie::Zombie() {}

/**
 * @brief Constructeur de la classe Zombie avec un nom donné
 */
Zombie::Zombie(const std::string &name) : _name(name) {}

/**
 * @brief Destructeur de la classe Zombie
 */
Zombie::~Zombie() {}

/**
 * @brief Définit le nom du Zombie
 * @param name: nouveau nom du Zombie
 */
void Zombie::setName(const std::string &name) {
    _name = name; // Affectation du nouveau nom au Zombie
}

/**
 * @brief Annonce du Zombie
 */
void Zombie::announce() const {
    std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl; // Affichage de l'annonce
}

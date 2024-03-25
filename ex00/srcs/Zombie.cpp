/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raveriss <raveriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 17:23:27 by raveriss          #+#    #+#             */
/*   Updated: 2024/03/25 17:07:52 by raveriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.hpp"
#include <iostream>

/**
 * @brief Constructeur par défaut de la classe Zombie.
 * Initialise un Zombie sans nom spécifique, lui attribuant le nom "Unnamed".
 */
Zombie::Zombie() : _name("Unnamed") {}

/**
 * @brief Constructeur paramétrique de la classe Zombie.
 * Permet la création d'un Zombie avec un nom spécifié.
 * 
 * @param name Le nom du Zombie à créer.
 */
Zombie::Zombie(std::string name) : _name(name) {}

/**
 * @brief Destructeur de la classe Zombie.
 * Affiche un message dans la console lorsqu'un Zombie est détruit.
 */
Zombie::~Zombie() {
    std::cout << _name << " is destroyed." << std::endl;
}

/**
 * @brief Méthode permettant au Zombie de s'annoncer.
 * Affiche un message caractéristique du Zombie dans la console.
 */
void Zombie::announce() const {
    std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

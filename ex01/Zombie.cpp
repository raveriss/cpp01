/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raveriss <raveriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 17:43:47 by raveriss          #+#    #+#             */
/*   Updated: 2024/03/23 11:44:38 by raveriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Zombie.hpp"
#include <iostream>

/**
 * @brief Constructeur par défaut de la classe Zombie.
 * 
 * Initialise une nouvelle instance de Zombie sans nom. Le nom peut être défini ultérieurement
 * en utilisant la méthode `setName`.
 */
Zombie::Zombie() {}

Zombie::~Zombie() {}

/**
 * @brief Définit le nom du Zombie.
 * 
 * Cette méthode permet de définir ou de modifier le nom du Zombie après sa création.
 * 
 * @param name Une référence constante à une chaîne de caractères représentant le nouveau nom du Zombie.
 */
void Zombie::setName(const std::string &name) {
    _name = name; // Affectation du nouveau nom au Zombie
}

/**
 * @brief Annonce le Zombie.
 * 
 * Cette méthode permet au Zombie de s'annoncer. Elle affiche un message standard
 * incluant le nom du Zombie, suivi de "BraiiiiiiinnnzzzZ...".
 */
void Zombie::announce() const {
    std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl; // Affichage de l'annonce
}

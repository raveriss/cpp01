/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raveriss <raveriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 19:03:14 by raveriss          #+#    #+#             */
/*   Updated: 2024/03/26 16:07:58 by raveriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.hpp"
#include <stdexcept> // Pour std::invalid_argument

/**
 * @brief Crée un nouveau Zombie avec le nom spécifié
 * @param name: nom du Zombie à créer
 * @return pointeur vers le nouveau Zombie
 */
Zombie* newZombie(std::string name) {
    if (name.empty()) {
        throw std::invalid_argument("Le nom du zombie ne peut pas être vide.");
    }
    return new Zombie(name);
}


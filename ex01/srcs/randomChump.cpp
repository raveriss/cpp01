/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raveriss <raveriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 17:24:01 by raveriss          #+#    #+#             */
/*   Updated: 2024/03/26 16:24:03 by raveriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.hpp"

/**
 * @brief Crée un Zombie aléatoire avec le nom spécifié
 * @param name: nom du Zombie à créer
 */
void randomChump(std::string name) {
    Zombie zombie(name); // Création d'un zombie temporaire
    zombie.announce(); // Le zombie s'annonce
}


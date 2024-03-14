/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raveriss <raveriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 17:24:01 by raveriss          #+#    #+#             */
/*   Updated: 2024/03/14 19:23:14 by raveriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/**
 * @brief Crée un Zombie temporaire et l'annonce.
 * 
 * Cette fonction crée un Zombie sur la pile avec le nom spécifié, puis appelle sa méthode `announce`.
 * Contrairement à `newZombie`, aucun pointeur n'est retourné et aucune allocation dynamique n'est nécessaire,
 * ce qui simplifie la gestion de la mémoire.
 * 
 * @param name Le nom du zombie temporaire à créer.
 */
void randomChump(std::string name) {
    Zombie zombie(name); // Création d'un zombie temporaire
    zombie.announce(); // Le zombie s'annonce
}


/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raveriss <raveriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 17:24:01 by raveriss          #+#    #+#             */
/*   Updated: 2024/03/23 17:52:58 by raveriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.hpp"

/**
 * @brief Fonction utilitaire créant et annonçant un Zombie.
 * Cette fonction prend un nom en paramètre, crée un Zombie avec ce nom,
 * et utilise la méthode `announce` de cet objet Zombie pour afficher
 * son cri caractéristique. L'objet Zombie est détruit automatiquement
 * à la fin de l'exécution de la fonction, car il est déclaré localement.
 * 
 * @param name Le nom du Zombie à créer et annoncer.
 */
void randomChump(std::string name) {
    std::string effectiveName = name.empty() ? "UnnamedZombie" : name;
    Zombie zombie(effectiveName);
    zombie.announce();
}

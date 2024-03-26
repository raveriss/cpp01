/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raveriss <raveriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 17:24:01 by raveriss          #+#    #+#             */
/*   Updated: 2024/03/26 15:47:43 by raveriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.hpp"

/**
 * @brief Fonction pour créer un Zombie aléatoire et l'annoncer
 * @param name: nom du Zombie (optionnel)
 */
void randomChump(std::string name) {
    std::string effectiveName = name.empty() ? "UnnamedZombie" : name;
    Zombie zombie(effectiveName);
    zombie.announce();
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raveriss <raveriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 17:44:05 by raveriss          #+#    #+#             */
/*   Updated: 2024/03/27 14:55:57 by raveriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.hpp"

/**
 * @brief Fonction principale du programme
 * @return 0 si succès
 */
int main() {
    int N = 5; // Nombre de zombies dans la horde
    Zombie* horde = zombieHorde(N, "HordeZombie"); // Création de la horde

    for (int i = 0; i < N; ++i) {
        horde[i].announce(); // Annonce de chaque zombie
    }

    delete[] horde; // Libération de la mémoire allouée à la horde

    return 0;
}

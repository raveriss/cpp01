/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raveriss <raveriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 17:44:05 by raveriss          #+#    #+#             */
/*   Updated: 2024/03/14 19:24:05 by raveriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/**
 * @brief Point d'entrée principal du programme pour la gestion d'une horde de Zombies.
 * 
 * Cette fonction crée une horde de Zombies, les fait tous annoncer, puis libère la mémoire allouée.
 * Utilise la fonction `zombieHorde` pour créer un tableau de Zombies sur le tas.
 * Chaque Zombie de la horde est ensuite annoncé avant de libérer la mémoire allouée pour la horde entière.
 * 
 * @return int Le code de sortie du programme. Retourne 0 pour indiquer que l'exécution s'est terminée avec succès.
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

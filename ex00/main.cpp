/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raveriss <raveriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 17:24:17 by raveriss          #+#    #+#             */
/*   Updated: 2024/03/14 19:17:29 by raveriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

/**
 * @brief Point d'entrée principal du programme.
 * 
 * Cette fonction démontre la création et la gestion de Zombies sur le tas et sur la pile.
 * Elle crée un Zombie sur le tas, l'annonce, puis le supprime correctement pour éviter les fuites de mémoire.
 * Ensuite, elle crée un Zombie sur la pile via une fonction qui gère son cycle de vie automatiquement.
 * 
 * @return int Le code de sortie du programme. Retourne 0 si tout se passe bien.
 */
int main() {
    Zombie* heapZombie = newZombie("HeapZombie");
    heapZombie->announce();
    delete heapZombie;

    randomChump("StackZombie");

    return 0;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raveriss <raveriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 17:24:17 by raveriss          #+#    #+#             */
/*   Updated: 2024/03/23 17:59:53 by raveriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.hpp"
#include <iostream>

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
    try {
        Zombie* heapZombie = newZombie(""); // Test avec un nom vide
        heapZombie->announce();
        delete heapZombie;
    } catch (const std::invalid_argument& e) {
        std::cerr << "Erreur : " << e.what() << std::endl;
    }

    randomChump("stackZombie"); // Test avec un nom vide
    return 0;
}
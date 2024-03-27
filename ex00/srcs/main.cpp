/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raveriss <raveriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 17:24:17 by raveriss          #+#    #+#             */
/*   Updated: 2024/03/27 14:52:50 by raveriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.hpp"
#include <iostream>

/**
 * @brief Fonction principale du programme
 * @return 0 si succès
 */
int main() {
    try {
        Zombie* heapZombie = newZombie("Rafael");
        heapZombie->announce();
        delete heapZombie;
    } catch (const std::invalid_argument& e) {
        std::cerr << "Erreur : " << e.what() << std::endl;
    }

    randomChump("stackZombie");
    
    return 0;
}
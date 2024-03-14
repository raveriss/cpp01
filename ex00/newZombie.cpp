/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raveriss <raveriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 19:03:14 by raveriss          #+#    #+#             */
/*   Updated: 2024/03/14 19:16:58 by raveriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

/**
 * @brief Crée une nouvelle instance de Zombie.
 * 
 * Cette fonction alloue dynamiquement un nouveau Zombie avec le nom spécifié
 * et retourne un pointeur vers cette instance.
 * 
 * @param name Le nom du zombie à créer.
 * @return Zombie* Un pointeur vers le nouveau Zombie créé.
 */
Zombie* newZombie(std::string name) {
    return new Zombie(name);
}

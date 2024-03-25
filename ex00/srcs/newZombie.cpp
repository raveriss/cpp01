/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raveriss <raveriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 19:03:14 by raveriss          #+#    #+#             */
/*   Updated: 2024/03/25 16:51:48 by raveriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.hpp"
#include <stdexcept> // Pour std::invalid_argument

Zombie* newZombie(std::string name) {
    if (name.empty()) {
        throw std::invalid_argument("Le nom du zombie ne peut pas être vide.");
    }
    return new Zombie(name);
}


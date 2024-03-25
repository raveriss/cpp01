/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raveriss <raveriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 12:07:46 by raveriss          #+#    #+#             */
/*   Updated: 2024/03/25 17:21:59 by raveriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Weapon.cpp
#include "../include/Weapon.hpp"

Weapon::Weapon(const std::string& type) : type(type) {}

Weapon::~Weapon() {}

const std::string& Weapon::getType() const {
    return type;
}

void Weapon::setType(const std::string& type) {
    this->type = type;
}


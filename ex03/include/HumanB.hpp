/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raveriss <raveriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 12:09:04 by raveriss          #+#    #+#             */
/*   Updated: 2024/03/27 15:02:20 by raveriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// HumanB.hpp
#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"
#include <string>
#include <iostream>

/**
 * @brief Classe représentant un Humain avec une arme
 */
class HumanB {
private:
    std::string name;
    Weapon* weapon;

public:
    HumanB(const std::string& name);
    void setWeapon(Weapon& weapon);
    void attack() const;
    ~HumanB();
};

#endif

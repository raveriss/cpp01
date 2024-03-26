/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raveriss <raveriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 12:09:04 by raveriss          #+#    #+#             */
/*   Updated: 2024/03/26 13:47:25 by raveriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// HumanB.hpp
#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"
#include <string>
#include <iostream>

/**
 * @brief Classe représentant un humain armé, nommé HumanB.
 *
 * Cette classe modélise un humain qui peut être initialement sans arme puis en être équipé plus tard.
 * Elle permet à l'humain de changer d'arme et d'effectuer une attaque avec l'arme actuellement équipée.
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

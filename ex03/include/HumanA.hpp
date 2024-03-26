/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raveriss <raveriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 12:08:07 by raveriss          #+#    #+#             */
/*   Updated: 2024/03/26 13:46:37 by raveriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// HumanA.hpp
#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"
#include <string>
#include <iostream>

/**
 * @brief Classe représentant un humain armé, nommé HumanA.
 *
 * Cette classe modélise un humain armé avec un nom et une référence constante à une arme.
 * Elle permet à l'humain d'effectuer une action d'attaque avec son arme.
 */
class HumanA {
private:
    std::string name;
    Weapon& weapon;

public:
    HumanA(const std::string& name, Weapon& weapon);
    void attack() const;
    ~HumanA();
};

#endif

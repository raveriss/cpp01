/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raveriss <raveriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 12:08:07 by raveriss          #+#    #+#             */
/*   Updated: 2024/03/14 12:08:10 by raveriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// HumanA.hpp
#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"
#include <string>
#include <iostream>

class HumanA {
private:
    std::string name;
    Weapon& weapon;

public:
    HumanA(const std::string& name, Weapon& weapon);
    void attack() const;
};

#endif

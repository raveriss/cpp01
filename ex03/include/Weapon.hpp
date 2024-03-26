/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raveriss <raveriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 12:07:30 by raveriss          #+#    #+#             */
/*   Updated: 2024/03/26 13:48:11 by raveriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>

/**
 * @brief Classe représentant une arme.
 *
 * Cette classe modélise une arme caractérisée par son type.
 * Elle permet de définir et d'obtenir le type de l'arme.
 */
class Weapon {
private:
    std::string type;

public:
    Weapon(const std::string& type);
    const std::string& getType() const;
    void setType(const std::string& type);
    ~Weapon();
};

#endif

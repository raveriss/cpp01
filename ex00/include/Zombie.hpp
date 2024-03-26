/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raveriss <raveriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 14:49:02 by raveriss          #+#    #+#             */
/*   Updated: 2024/03/26 16:07:12 by raveriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <string>


/**
 * @brief Classe Zombie pour représenter un zombie
 */
class Zombie {
public:
	Zombie();
	Zombie(std::string name);
	~Zombie();

	void announce(void) const;

private:
	std::string _name;
};

Zombie* newZombie(std::string name);
void randomChump(std::string name);

#endif

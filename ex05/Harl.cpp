/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raveriss <raveriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 13:16:55 by raveriss          #+#    #+#             */
/*   Updated: 2024/03/23 11:41:01 by raveriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl() {
    levels[0] = "DEBUG";
    levels[1] = "INFO";
    levels[2] = "WARNING";
    levels[3] = "ERROR";
    complaints[0] = &Harl::debug;
    complaints[1] = &Harl::info;
    complaints[2] = &Harl::warning;
    complaints[3] = &Harl::error;
}

Harl::~Harl() {
    levels[0] = "DEBUG";
    levels[1] = "INFO";
    levels[2] = "WARNING";
    levels[3] = "ERROR";
    complaints[0] = &Harl::debug;
    complaints[1] = &Harl::info;
    complaints[2] = &Harl::warning;
    complaints[3] = &Harl::error;
}

void Harl::complain(std::string level) {
    for (int i = 0; i < 4; ++i) {
        if (level == levels[i]) {
            (this->*complaints[i])();
            return;
        }
    }
    std::cout << "Harl is silent..." << std::endl;
}

void Harl::debug(void) {
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void Harl::info(void) {
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning(void) {
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error(void) {
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

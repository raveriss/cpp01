/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raveriss <raveriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 13:35:21 by raveriss          #+#    #+#             */
/*   Updated: 2024/03/14 14:36:54 by raveriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug(void) {
    std::cout << "[ DEBUG ]\nI love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void Harl::info(void) {
    std::cout << "[ INFO ]\nI cannot believe adding extra bacon costs more money. \nYou didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning(void) {
    std::cout << "[ WARNING ]\nI think I deserve to have some extra bacon for free. \nI’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error(void) {
    std::cout << "[ ERROR ]\nThis is unacceptable, I want to speak to the manager now." << std::endl;
}

void Harl::filterComplaints(std::string level) {
    std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    int levelIndex = -1;
    for (int i = 0; i < 4; i++) {
        if (levels[i] == level) {
            levelIndex = i;
            break;
        }
    }

    switch (levelIndex) {
        case 0:
            debug();
            std::cout << std::endl;
        case 1:
            info();
            std::cout << std::endl;
        case 2:
            warning();
            std::cout << std::endl;
        case 3:
            error();
            std::cout << std::endl;
            break;
        default:
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
    }
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raveriss <raveriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 13:29:35 by raveriss          #+#    #+#             */
/*   Updated: 2024/03/26 16:30:47 by raveriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Harl.hpp"
#include <string>

/**
 * @brief Fonction principale du programme
 * @param argc: nombre d'arguments en ligne de commande
 * @param argv: tableau des arguments en ligne de commande
 * @return 0 si succès, 1 en cas d'erreur
 */
int main(int argc, char* argv[]) {
    if (argc != 2) {
        std::cerr << "Usage: ./harlFilter <level>" << std::endl;
        return 1;
    }
    Harl harl;
    harl.filterComplaints(argv[1]);
    return 0;
}

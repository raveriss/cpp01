/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raveriss <raveriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 13:29:35 by raveriss          #+#    #+#             */
/*   Updated: 2024/03/26 14:16:10 by raveriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Harl.hpp"
#include <string>

/**
    @brief Fonction principale du programme.
    Cette fonction vérifie le nombre d'arguments passés en ligne de commande. 
    Si un seul argument n'est pas fourni, elle affiche un message 
    d'utilisation et renvoie une erreur. 
    Ensuite, elle crée une instance de la classe Harl et utilise la fonction 
    filterComplaints pour filtrer les plaintes en fonction du niveau spécifié 
    par l'argument. 
    Elle renvoie 0 en cas d'exécution réussie.
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

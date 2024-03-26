/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raveriss <raveriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 17:43:47 by raveriss          #+#    #+#             */
/*   Updated: 2024/03/26 13:45:42 by raveriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.hpp"

/**
 * @brief Constructeur par défaut de la classe Zombie.
 * 
 * Initialise une nouvelle instance de Zombie sans nom. Le nom peut être défini ultérieurement
 * en utilisant la méthode `setName`.
 */
Zombie::Zombie() {}

/**
 * @brief Constructeur de Zombie qui initialise le nom.
 *
 * Ce constructeur initialise un zombie avec le nom fourni en argument. Le nom est initialisé via la liste d'initialisation de membre.
 * 
 * @param name Le nom du zombie, passé par référence constante pour éviter la copie inutile.
 */
Zombie::Zombie(const std::string &name) : _name(name) {}

/**
 * @brief Destructeur de la classe Zombie.
 *
 * Ce destructeur est appelé lors de la destruction d'un objet Zombie. Il s'occupe de nettoyer les ressources allouées par l'objet, si nécessaire.
 * Dans ce cas, le corps du destructeur est vide car il n'y a pas de ressources spécifiques à libérer manuellement.
 */
Zombie::~Zombie() {}

/**
 * @brief Définit le nom du Zombie.
 * 
 * Cette méthode permet de définir ou de modifier le nom du Zombie après sa création.
 * 
 * @param name Une référence constante à une chaîne de caractères représentant le nouveau nom du Zombie.
 */
void Zombie::setName(const std::string &name) {
    _name = name; // Affectation du nouveau nom au Zombie
}

/**
 * @brief Annonce le Zombie.
 * 
 * Cette méthode permet au Zombie de s'annoncer. Elle affiche un message standard
 * incluant le nom du Zombie, suivi de "BraiiiiiiinnnzzzZ...".
 */
void Zombie::announce() const {
    std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl; // Affichage de l'annonce
}

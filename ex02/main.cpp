/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raveriss <raveriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 11:51:45 by raveriss          #+#    #+#             */
/*   Updated: 2024/03/23 12:09:18 by raveriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main() {
    std::string str = "HI THIS IS BRAIN";
    
    // Définition d'un pointeur vers str
    // Un pointeur stocke l'adresse mémoire d'une variable.
    // Utilisez * pour accéder à la valeur pointée et & pour obtenir l'adresse d'une variable.
    std::string* stringPTR = NULL;


    // Définition d'une référence à str
    // Une référence sert d'alias à une autre variable.
    // Une fois initialisée, elle ne peut pas être rebindée à une autre variable.
    std::string& stringREF = str;

    stringPTR = &str;
    // Affichage des adresses et des valeurs en utilisant le pointeur et la référence
    std::cout << "Adresse de str en memoire: " << &str << std::endl;
    std::cout << "Adresse stockee dans stringPTR: " << stringPTR << std::endl;
    std::cout << "Adresse stockee dans stringREF: " << &stringREF << std::endl;

    std::cout << "Valeur de la string: " << str << std::endl;
    std::cout << "Valeur pointee par stringPTR: " << *stringPTR << std::endl;
    std::cout << "Valeur pointee par stringREF: " << stringREF << std::endl;

    return 0;
}

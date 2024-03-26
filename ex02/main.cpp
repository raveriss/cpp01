/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raveriss <raveriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 11:51:45 by raveriss          #+#    #+#             */
/*   Updated: 2024/03/26 15:52:31 by raveriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main()
{
	/**
	 * @brief Chaîne de caractères contenant "HI THIS IS BRAIN"
	 */
	std::string str = "HI THIS IS BRAIN";

	/**
	 * @brief Pointeur vers une chaîne de caractères, initialisé à NULL
	 */
	std::string* stringPTR = NULL;

	/**
	 * @brief Référence à la chaîne de caractères str
	 */
	std::string& stringREF = str;

	/**
	 * @brief Pointeur vers la chaîne de caractères str
	 */
	stringPTR = &str;
	
	/**
	 * @brief Affiche les adresses et valeurs des variables
	 */
	std::cout << "Adresse de str en memoire: " << &str << std::endl;
	std::cout << "Adresse stockee dans stringPTR: " << stringPTR << std::endl;
	std::cout << "Adresse stockee dans stringREF: " << &stringREF << std::endl;

	std::cout << "Valeur de la string: " << str << std::endl;
	std::cout << "Valeur pointee par stringPTR: " << *stringPTR << std::endl;
	std::cout << "Valeur pointee par stringREF: " << stringREF << std::endl;

	return 0;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raveriss <raveriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 11:51:45 by raveriss          #+#    #+#             */
/*   Updated: 2024/03/14 11:55:10 by raveriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main() {
    std::string str = "HI THIS IS BRAIN";
    std::string* stringPTR = &str;
    std::string& stringREF = str;

    std::cout << "Adresse de str en memoire: " << &str << std::endl;
    std::cout << "Adresse stockee dans stringPTR: " << stringPTR << std::endl;
    std::cout << "Adresse stockee dans stringREF: " << &stringREF << std::endl;

    std::cout << "Valeur de la string: " << str << std::endl;
    std::cout << "Valeur pointee par stringPTR: " << *stringPTR << std::endl;
    std::cout << "Valeur pointee par stringREF: " << stringREF << std::endl;

    return 0;
}

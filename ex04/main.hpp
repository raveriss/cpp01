/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raveriss <raveriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 14:18:33 by raveriss          #+#    #+#             */
/*   Updated: 2024/03/27 15:37:59 by raveriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_HPP
#define MAIN_HPP 

#include <string>
#include <iostream>
#include <fstream>
#include <sstream>

class FileReplace {
public:
    FileReplace(const std::string& filename, const std::string& s1, const std::string& s2)
    : filename(filename), s1(s1), s2(s2) {}
    ~FileReplace() {}

    void replaceOccurrence() {

        std::ifstream inputFile(filename.c_str()); // Utilisez c_str() ici
        if (!inputFile.is_open()) {
            std::cerr << "Error opening file: " << filename << std::endl;
            return;
        }

        std::ofstream outputFile((filename + ".replace").c_str()); // Et ici aussi
        if (!outputFile.is_open()) {
            std::cerr << "Error creating output file: " << filename << ".replace" << std::endl;
            return;
        }

        std::string line;
        while (std::getline(inputFile, line))
        {
            replaceInString(line, s1, s2);
            outputFile << line << '\n';
        }
    }

private:
    std::string filename, s1, s2;

    void replaceInString(std::string& str, const std::string& from, const std::string& to) {
        size_t startPos = 0;
        while ((startPos = str.find(from, startPos)) != std::string::npos)
        {
            str = str.substr(0, startPos) + to + str.substr(startPos + from.length());
            startPos += to.length(); // S'assurer d'avancer pour éviter une boucle infini
        }
    }
};

#endif


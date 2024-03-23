/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raveriss <raveriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 13:05:56 by raveriss          #+#    #+#             */
/*   Updated: 2024/03/23 19:15:31 by raveriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <sstream>

void replaceInFile(const std::string& filename, const std::string& s1, const std::string& s2) {
    std::ifstream fileIn(filename.c_str());
    if (!fileIn.is_open()) {
        std::cerr << "Error opening file: " << filename << std::endl;
        return;
    }

    std::ostringstream tempStream;
    tempStream << fileIn.rdbuf();
    std::string content = tempStream.str();
    fileIn.close();

    // Créer une nouvelle chaîne pour le résultat
    std::string result;
    size_t pos = 0;
    size_t startPos = 0;
    // Trouver et remplacer toutes les occurrences de s1 par s2
    while ((pos = content.find(s1, startPos)) != std::string::npos) {
        // Ajouter la portion de chaîne avant l'occurrence trouvée à result
        result.append(content, startPos, pos - startPos);
        // Ajouter s2 à result
        result.append(s2);
        // Mettre à jour startPos pour continuer la recherche
        startPos = pos + s1.length();
    }
    // Ajouter le reste de la chaîne après la dernière occurrence trouvée
    result.append(content, startPos);

    std::ofstream fileOut((filename + ".replace").c_str());
    if (!fileOut.is_open()) {
        std::cerr << "Error creating file: " << filename << ".replace" << std::endl;
        return;
    }

    fileOut << result;
    fileOut.close();
}

int main(int argc, char* argv[]) {
    if (argc != 4) {
        std::cerr << "Usage: " << argv[0] << " <filename> <string_to_replace> <replacement_string>" << std::endl;
        return 1;
    }

    replaceInFile(argv[1], argv[2], argv[3]);
    return 0;
}


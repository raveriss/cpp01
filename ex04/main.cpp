/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raveriss <raveriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 13:05:56 by raveriss          #+#    #+#             */
/*   Updated: 2024/03/14 13:05:58 by raveriss         ###   ########.fr       */
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

    size_t pos = 0;
    while ((pos = content.find(s1, pos)) != std::string::npos) {
        content.replace(pos, s1.length(), s2);
        pos += s2.length();
    }

    std::ofstream fileOut((filename + ".replace").c_str());
    if (!fileOut.is_open()) {
        std::cerr << "Error creating file: " << filename << ".replace" << std::endl;
        return;
    }

    fileOut << content;
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

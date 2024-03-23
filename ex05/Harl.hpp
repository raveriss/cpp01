/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raveriss <raveriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 13:16:42 by raveriss          #+#    #+#             */
/*   Updated: 2024/03/23 11:32:02 by raveriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_H
#define HARL_H

#include <iostream>
#include <string>

class Harl {
public:
    Harl();
    void complain(std::string level);
    ~Harl();

private:
    void debug(void);
    void info(void);
    void warning(void);
    void error(void);
    void (Harl::*complaints[4])(void);
    std::string levels[4];
};

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raveriss <raveriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 13:29:26 by raveriss          #+#    #+#             */
/*   Updated: 2024/03/23 11:33:30 by raveriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_H
#define HARL_H

#include <string>
#include <iostream>

class Harl {
public:
    Harl();
    void filterComplaints(std::string level);
    ~Harl();

private:
    void debug(void);
    void info(void);
    void warning(void);
    void error(void);
    void complain(std::string level);
};

#endif

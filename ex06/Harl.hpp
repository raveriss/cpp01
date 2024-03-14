/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raveriss <raveriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 13:29:26 by raveriss          #+#    #+#             */
/*   Updated: 2024/03/14 13:29:28 by raveriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_H
#define HARL_H

#include <string>
#include <iostream>

class Harl {
public:
    void filterComplaints(std::string level);

private:
    void debug(void);
    void info(void);
    void warning(void);
    void error(void);
    void complain(std::string level);
};

#endif

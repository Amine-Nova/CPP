/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenmous <abenmous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 15:11:31 by abenmous          #+#    #+#             */
/*   Updated: 2023/10/16 15:49:58 by abenmous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Harl
{
private:
    void debug(void);
    void info(void);
    void warning(void);
    void error(void);
public:
    void complain(std::string level);
    Harl();
    ~Harl();
};


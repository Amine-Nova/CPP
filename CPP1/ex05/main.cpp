/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenmous <abenmous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 15:11:59 by abenmous          #+#    #+#             */
/*   Updated: 2023/10/17 18:26:29 by abenmous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Harl.hpp"

int main()
{
    Harl A;

    A.complain("DEBUG");
    A.complain("INFO");
    A.complain("WARNING");
    A.complain("ERROR");
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenmous <abenmous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 14:49:47 by abenmous          #+#    #+#             */
/*   Updated: 2024/01/23 12:58:16 by abenmous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"MutantStack.hpp"

int main()
{
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << mstack.top() << std::endl;
    mstack.pop();
    std::cout << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(0);
    MutantStack<int>::iter it = mstack.begin();
    MutantStack<int>::iter ite = mstack.end();
    ++it;
    --it;
    while (*it != *ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }
    std::stack<int, std::vector<int> > s(mstack);
    return 0;
}
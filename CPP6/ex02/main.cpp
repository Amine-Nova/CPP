/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenmous <abenmous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 15:05:39 by abenmous          #+#    #+#             */
/*   Updated: 2024/01/07 15:59:30 by abenmous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"A.hpp"
#include"B.hpp"
#include"C.hpp"

Base *generate(void)
{
    int i, j;
    uintptr_t ip = reinterpret_cast<uintptr_t>(&i);
    j = ip % 3;
    switch (j)
    {
        case 0:
            return (new A);
            break;
        case 1:
            return (new B);
            break;
        case 2:
            return (new C);
            break;
        default:
            return (NULL);
    }
}
void identify(Base* p)
{
    A *a = dynamic_cast<A*>(p);
    if (a != NULL)
        std::cout << "A" << std::endl;
    B *b = dynamic_cast<B*>(p);
    if (b != NULL)
        std::cout << "B" << std::endl;
    C *c = dynamic_cast<C*>(p);
    if (c != NULL)
        std::cout << "C" << std::endl;
}
void identify(Base &p)
{
    try
    {
        (void)dynamic_cast<A&>(p);
        std::cout << "Derived Class : A" << std::endl;
    }
    catch(const std::exception& e)
    {
        try
        {
            (void)dynamic_cast<B&>(p);
            std::cout << "Derived Class : B" << std::endl;
        }
        catch(const std::exception& e)
        {
            try
            {
                (void)dynamic_cast<C&>(p);
                std::cout << "Derived Class : C" << std::endl;
            }
            catch(const std::exception& e)
            {
            }
        }
    }
    
}

int main()
{
    Base *s = generate();
    
    identify(s);
    identify(*s);
}
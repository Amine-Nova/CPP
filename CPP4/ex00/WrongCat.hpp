/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenmous <abenmous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 12:18:52 by abenmous          #+#    #+#             */
/*   Updated: 2023/10/29 12:50:20 by abenmous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
private:
    std::string type;
public:
    WrongCat();
    WrongCat(const WrongCat &a);
    WrongCat &operator=(const WrongCat &a);
    void makeSound() const;
    std::string getType() const;
    void setType(std::string const ss);
    ~WrongCat();
};

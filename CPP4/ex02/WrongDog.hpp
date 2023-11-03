/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongDog.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenmous <abenmous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 12:18:57 by abenmous          #+#    #+#             */
/*   Updated: 2023/10/29 12:50:22 by abenmous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"WrongAnimal.hpp"

class WrongDog : public WrongAnimal
{
private:
    std::string type;
public:
    WrongDog();
    WrongDog(const WrongDog &a);
    WrongDog &operator=(const WrongDog &a);
    void makeSound() const;
    std::string getType() const;
    void setType(std::string const ss);
    ~WrongDog();
};

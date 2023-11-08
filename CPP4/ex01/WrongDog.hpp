/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongDog.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenmous <abenmous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 12:18:57 by abenmous          #+#    #+#             */
/*   Updated: 2023/11/05 17:21:36 by abenmous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"WrongAnimal.hpp"

class WrongDog : public WrongAnimal
{
private:
public:
    WrongDog();
    WrongDog(const WrongDog &a);
    WrongDog &operator=(const WrongDog &a);
    void makeSound() const;
    ~WrongDog();
};

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenmous <abenmous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 19:27:47 by abenmous          #+#    #+#             */
/*   Updated: 2024/03/25 21:40:01 by abenmous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"PmergeMe.hpp"

int se = 1;

int check_error(char *av)
{
    std::string num = static_cast<std::string>(av);
    int i = -1;
    while (av[++i])
        if(av[i] && !isdigit(av[i]))
            return(1);
    if (num.empty())
        return(1);
    return(0);
}
// void set_couples(std::vector<std::vector<int> > Elements)
// {
//     int l;
//     std::vector<std::vector<int> >::iterator iter = Elements.begin();
//     std::vector<std::vector<int> > Elements2;
//     std::vector<int> temp;

//     while (iter != Elements.end())
//     {
//         l = 0;
//         while (l < 2 && iter != Elements.end())
//         {
//             std::vector<int>::iterator iter2 = iter->begin();
//             temp.push_back(*iter2);
//             l++;
//             iter++;
//         }
//         Elements2.push_back(temp);
//         temp.clear();
//     }
    
// }

void swap_vector(std::vector<std::vector<int> > &Elements)
{
    std::vector<std::vector<int> >::iterator iter = Elements.begin();
    while(iter != Elements.end() && (iter + 1) != Elements.end())
    {
        if (iter->back() > (iter + 1)->back())
            std::iter_swap(iter, (iter + 1));
        iter += 2;
    }
}
std::vector<int> flatenE_to_value(std::vector<std::vector<int> > Elements)
{
    std::vector<std::vector<int> >::iterator iter = Elements.begin();
    std::vector<int> ret;
    while(iter != Elements.end())
    {
        std::vector<int>::iterator it = iter->begin();
        while (it != iter->end())
        {
            ret.push_back(*it);
            it++;
        }
        iter++;
    }
    return (ret);
}
std::vector<std::vector<int> > vecofvec(std::vector<int> Value)
{
    std::vector<std::vector<int> > Elements;
    std::vector<int>::iterator iter = Value.begin();
    int l;
    std::vector<int> Temp;
    while (iter != Value.end())
    {
        l = 0;
        while (l < se && iter != Value.end())
        {
            Temp.push_back(*iter);
            iter++;
            l++;
        }
        Elements.push_back(Temp);
        Temp.clear();
    }
    return (Elements);
}
bool merge_finished(std::vector<std::vector<int> > Elements)
{
    if (Elements[0].size() == se && Elements[1].size() == se
        && Elements[2].size() == se && Elements[3].size() == se)
        return true;
    return false;
}
void insert(std::vector<int> Vec)
{
    std::vector<std::vector<int> > Elements = vecofvec(Vec);
    std::vector<std::vector<int> > Main;
    std::vector<std::vector<int> > Pend;
    Main.push_back(Elements[0]);
    Main.push_back(Elements[1]);
    std::vector<std::vector<int> >::iterator it = Elements.begin();
    it += 2;
    while (it != Elements.end())
    {
        Pend.push_back(*it);
        it++;
        if (it != Elements.end())
        {
            Main.push_back(*it);
            it++;
        }
    }
    // std::vector<std::vector<int> >::iterator iter4 = Elements.begin();
    // while (iter4 != Elements.end())
    // {
    //     std::vector<int>::iterator iter3 = iter4->begin();
    //     while(iter3 != iter4->end())
    //     {
    //         std::cout << "[" << *iter3 << "] ";
    //         iter3++;
    //     } 
    //     std::cout << std::endl;
    //     iter4++; 
    // }
    // std::cout << "=====" << std::endl;
}
void set_vetorofvec(std::vector<int> Value)
{ 
    std::vector<std::vector<int> > Elements = vecofvec(Value);
    swap_vector(Elements);
    std::vector<int> Vec = flatenE_to_value(Elements);
        for (int i = 0; i < Vec.size();++i)
        std::cout << Vec[i] << std::endl;
    std::cout << "=======" << std::endl;
    if (merge_finished(Elements))
    {
        se *= 2;
        set_vetorofvec(Vec);
    }
    insert(Vec);
    se /= 2;
    // set_couples(Elements);
}

int main(int ac, char **av)
{
    if (ac <= 1)
        return (0);
    int i = 1;
    std::vector<int> Value;
    int n;
    while (av[i])
    {
        std::stringstream num(av[i]);
        if (check_error(av[i]))
        {
            std::cerr << "Error" << std::endl;
            return (0);
        }
        num >> n;
        Value.push_back(n);
        i++;
    }
    set_vetorofvec(Value);
}
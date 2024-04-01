/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenmous <abenmous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 19:28:02 by abenmous          #+#    #+#             */
/*   Updated: 2024/04/01 01:06:48 by abenmous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"PmergeMe.hpp"

int se = 1;

void printVECTOR(std::vector<std::vector<int> > Elements){
    
    std::vector<std::vector<int> >::iterator iter4 = Elements.begin();
    while (iter4 != Elements.end())
    {
        std::vector<int>::iterator iter3 = iter4->begin();
        while(iter3 != iter4->end())
        {
            std::cout << *iter3 << " ";
            iter3++;
        } 
        std::cout << std::endl;
        iter4++; 
    }
}
void swap_vector(std::vector<std::vector<int> > &Elements)
{
    std::vector<std::vector<int> >::iterator iter = Elements.begin();
    while(iter != Elements.end() && (iter + 1) != Elements.end())
    {
        if (iter->size() != se || (iter + 1)->size() != se)
            break;
        if (iter->back() > (iter + 1)->back())
            std::iter_swap(iter, (iter + 1));
        iter += 2;
    }
}
std::vector<int> back_vec(std::vector<std::vector<int> > Elements)
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
std::vector<std::vector<int> > vecofvec(std::vector<int> &Value)
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
bool find_pos(const std::vector<int> &Main, const std::vector<int> &InsertElement)
{
    if (Main.back() <= InsertElement.back())
        return (true);
    return (false);
}
void insert_v(std::vector<int> &Vec)
{
    std::vector<std::vector<int> > Elements = vecofvec(Vec);
    std::vector<int> chayt;
   
    if (Elements.back().size() != se)
    {
        chayt = Elements.back();
        Elements.pop_back();
    }
    std::vector<std::vector<int> > Main;
    std::vector<std::vector<int> > Pend;
    std::vector<std::vector<int> >::iterator it = Elements.begin();
    if (it != Elements.end())
    {
        Main.push_back(Elements[0]);
        it++;
    }
    if (it != Elements.end())
    {
        Main.push_back(Elements[1]);
        it++;
    }
    while (it != Elements.end())
    {
        Pend.push_back(*it);
        it++;
        if (it == Elements.end())
            break;
        Main.push_back(*it);
        it++;
    }
    std::vector<std::vector<int> >::iterator P_iter = Pend.begin();
    while (P_iter != Pend.end())
    {
        std::vector<std::vector<int> >::iterator Pos = std::lower_bound(Main.begin(), Main.end(), *P_iter, find_pos);
        Main.insert(Pos, *P_iter);
        P_iter++;
    }
    if (chayt.size())
    {
        Main.push_back(chayt);
        chayt.clear();
    }
    Vec.clear();
    Vec = back_vec(Main);
    se /= 2;    
}

void set_vetorofvec(std::vector<int> &Value)
{ 
    std::vector<std::vector<int> > Elements = vecofvec(Value);
    swap_vector(Elements);
    Value.clear();
    Value = back_vec(Elements);
    if (merge_finished(Elements))
    {
        se *= 2;
        set_vetorofvec(Value);
    }
    insert_v(Value);
}

void vec_function(char **av)
{
    std::vector<int> Value;
    int i = 1;
    int n;
    while (av[i])
    {
        std::stringstream num(av[i]);
        num >> n;
        Value.push_back(n);
        i++;
    }
    set_vetorofvec(Value);
    std::cout << "Before: ";
    for (int i = 1; av[i]; ++i)
        std::cout << av[i] << " ";
    std::cout << std::endl;
    std::cout << "After:  ";
    for (int i = 0; i < Value.size();++i)
        std::cout << Value[i] << " ";
    std::cout << std::endl;
    
}
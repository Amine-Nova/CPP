/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenmous <abenmous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 19:27:47 by abenmous          #+#    #+#             */
/*   Updated: 2024/04/01 22:22:13 by abenmous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"PmergeMe.hpp"

int es = 1;

void print_deofde(std::deque<std::deque<int> > Elements)
{
    std::deque<std::deque<int> >::iterator iter = Elements.begin();
    while (iter != Elements.end())
    {
        std::deque<int>::iterator it = iter->begin();
        while (it != iter->end())
        {
            std::cout << "[ " << *it << " ] ";
            it++;
        }
        std::cout << std::endl;
        iter++;
    }
}

std::deque<std::deque<int> > deofde(std::deque<int> &Value)
{
    std::deque<std::deque<int> > Elements;
    std::deque<int>::iterator iter = Value.begin();
    while (iter != Value.end())
    {
        std::deque<int> fill;
        int l = 0;
        while (l < es && iter != Value.end())
        {
            fill.push_back(*iter);
            iter++;
            l++;
        }
        Elements.push_back(fill);
        fill.clear();
    }
    return (Elements);
}
void swap_deque(std::deque<std::deque<int> > &Elements)
{
    std::deque<std::deque<int> >::iterator iter = Elements.begin();
    while (iter != Elements.end() && (iter + 1) != Elements.end())
    {
        if (iter->size() != es || (iter + 1)->size() != es)
            break;
        if (iter->back() > (iter + 1)->back())
            std::iter_swap(iter, (iter+1));
        std::advance(iter, 2);
    }
}
std::deque<int> back_to_de(std::deque<std::deque<int> > Elements)
{
    std::deque<std::deque<int> >::iterator iter = Elements.begin();
    std::deque<int> ret;
    while (iter != Elements.end())
    {
        std::deque<int>::iterator it = iter->begin();
        while (it != iter->end())
        {
            ret.push_back(*it);
            it++;
        }
        iter++;
    }
    return (ret);
}

bool swap_finish (std::deque<std::deque<int> > Elements)
{
    if (Elements[0].size() != es || Elements[1].size() != es
        || Elements[2].size() != es || Elements[3].size() != es)
        return (false);
    return (true);
}
bool compare_MP (const std::deque<int> &Main, const std::deque<int> &Element)
{
    if (Main.back() <= Element.back())
        return (true);
    return (false);
}
void insert_d(std::deque<int> &Value)
{
    std::deque<std::deque<int> > Elements = deofde(Value);
    std::deque<std::deque<int> > Main;
    std::deque<std::deque<int> > Pend;
    std::deque<int> chayt;
    if (Elements.back().size() != es)
    {
        chayt = Elements.back();
        Elements.pop_back();
    }
    std::deque<std::deque<int> >::iterator it = Elements.begin();
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
            break ;
        Main.push_back(*it);
        it++;
    }
    std::deque<std::deque<int> >::iterator P_iter = Pend.begin();
    while (P_iter != Pend.end())
    {
        std::deque<std::deque<int> >::iterator iter = std::lower_bound(Main.begin(), Main.end(), *P_iter, compare_MP); 
        Main.insert(iter, *P_iter);
        P_iter++;
    }
    if (!chayt.empty())
    {
        Main.push_back(chayt);
        chayt.clear();
    }
    Value.clear();
    Value = back_to_de(Main);
    es /= 2;
}

void set_dequeof(std::deque<int> &Value)
{
    std::deque<std::deque<int> > Elements = deofde(Value);
    swap_deque(Elements);
    Value.clear();
    Value = back_to_de(Elements);
    if (swap_finish(Elements))
    {
        es *= 2;
        set_dequeof(Value);
    }
    insert_d(Value);
}
void    deque_function(char **av)
{
    std::deque<int> Value;
    
    int i = 1;
    while (av[i])
    {
        std::stringstream num(av[i]);
        int n;

        num >> n;
        Value.push_back(n);
        i++;
    }
    set_dequeof(Value);
}
int check_error(char *av)
{
    std::string num = static_cast<std::string>(av);
    int i = -1;
    while (av[++i])
        if((av[i] && !isdigit(av[i])) 
            || (av[0] == '0' && av[1] == '\0'))
            return(1);
    if (num.empty())
        return(1);
    return(0);
}

int main(int ac, char **av)
{
    if (ac <= 1)
        return (0);
    int i = 1;
    int n;
    while (av[i])
    {
        std::stringstream num(av[i]);
        if (check_error(av[i]))
        {
            std::cerr << "Error" << std::endl;
            return (0);
        }
        i++;
    }
    clock_t vstart;
    float vres;
    vstart = clock();
    std::cout << "Before: ";
    for (int i = 1; av[i]; ++i)
        std::cout << av[i] << " ";
    std::cout << std::endl;
    vec_function(av);
    vres = clock() - vstart;
    std::cout << "Time to process a range of 5 elements with std::vector : " << std::fixed << std::setprecision(5) << vres / CLOCKS_PER_SEC << std::endl;
    clock_t dstart;
    float dres;
    dstart = clock();
    deque_function(av);
    dres = clock() - dstart;
    std::cout << "Time to process a range of 5 elements with std::deque : " << std::fixed << std::setprecision(5) << dres / CLOCKS_PER_SEC << std::endl;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenmous <abenmous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 19:28:16 by abenmous          #+#    #+#             */
/*   Updated: 2024/03/31 22:59:04 by abenmous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include<iostream>
#include<algorithm>
#include<ctype.h>
#include<time.h>
#include<sstream>
#include<vector>
#include<deque>

int check_error(char *av);
void printVECTOR(std::vector<std::vector<int> > Elements);
void swap_vector(std::vector<std::vector<int> > &Elements);
std::vector<int> flatenE_to_value(std::vector<std::vector<int> > Elements);
std::vector<std::vector<int> > vecofvec(std::vector<int> &Value);
bool merge_finished(std::vector<std::vector<int> > Elements);
bool find_pos(const std::vector<int> &Main, const std::vector<int> &InsertElement);
void insert(std::vector<int> &Vec);
void set_vetorofvec(std::vector<int> &Value);
void vec_function(char **av);

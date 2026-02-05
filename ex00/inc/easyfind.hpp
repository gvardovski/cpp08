/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svolkau <gvardovski@icloud.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 13:26:41 by svolkau           #+#    #+#             */
/*   Updated: 2026/02/05 14:02:17 by svolkau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <exception>
#include <algorithm>
#include <vector>
#include <list>
#include <map>

template<typename T>
void	easyfind(T &container, int valueToFind)
{
	std::exception e;
	typename T::iterator it = std::find(container.begin(), container.end(), valueToFind);
	if (it != container.end())
		std::cout << "Value " << valueToFind << " found in the container." << std::endl;
	else
		throw std::invalid_argument ("Value not found in the container.");
}

#endif
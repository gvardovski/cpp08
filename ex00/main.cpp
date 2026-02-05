/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svolkau <gvardovski@icloud.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 13:26:11 by svolkau           #+#    #+#             */
/*   Updated: 2026/02/05 14:08:13 by svolkau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/easyfind.hpp"

int main()
{
	std::list<int> myList;
	myList.push_back(1);
	myList.push_back(2);
	myList.push_back(3);
	std::vector<int> myVector;
	myVector.push_back(10);
	myVector.push_back(20);
	myVector.push_back(30);
	try
	{
		easyfind(myList, 2);
		easyfind(myList, 4);
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		easyfind(myVector, 20);
		easyfind(myVector, 40);
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	return 0;
}
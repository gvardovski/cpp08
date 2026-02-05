/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svolkau <gvardovski@icloud.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 14:34:11 by svolkau           #+#    #+#             */
/*   Updated: 2026/02/05 19:57:27 by svolkau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/Span.hpp"

int main()
{
	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	return 0;
}

// int main()
// {
// 	std::vector<int> sp;
// 	Span spcopy(5);
// 	sp.push_back(6);
// 	sp.push_back(3);
// 	sp.push_back(17);
// 	sp.push_back(9);
// 	sp.push_back(11);
// 	spcopy.addNumber(sp.begin(), sp.end());
// 	std::cout << spcopy.shortestSpan() << std::endl;
// 	std::cout << spcopy.longestSpan() << std::endl;
// 	return 0;
// }

// int main()
// {
// 	unsigned int N = 10000;
// 	Span sp(N);

// 	std::srand(std::time(0));

// 	for (unsigned int i = 0; i < N; i++)
//     	sp.addNumber(std::rand());
// 	try
// 	{
// 		std::cout << sp.longestSpan() << std::endl;
// 	}
// 	catch(const Span::TooFewNumbersException& e)
// 	{
// 		std::cerr << e.what() << std::endl;
// 	}
// 	try
// 	{
// 		std::cout << sp.shortestSpan() << std::endl;
// 	}
// 	catch(const Span::TooFewNumbersException& e)
// 	{
// 		std::cerr << e.what() << std::endl;
// 	}
	
// 	return 0;
// }

// int main()
// {
// 	unsigned int N = 2;
// 	Span sp(N);
	
// 	sp.addNumber(std::numeric_limits<unsigned int>::min());
// 	sp.addNumber(std::numeric_limits<unsigned int>::max());
	
// 	try
// 	{
// 		std::cout << sp.longestSpan() << std::endl;
// 	}
// 	catch(const Span::TooFewNumbersException& e)
// 	{
// 		std::cerr << e.what() << std::endl;
// 	}
// 	try
// 	{
// 		std::cout << sp.shortestSpan() << std::endl;
// 	}
// 	catch(const Span::TooFewNumbersException& e)
// 	{
// 		std::cerr << e.what() << std::endl;
// 	}
	
// 	return 0;
// }
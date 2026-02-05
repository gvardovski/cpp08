/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svolkau <gvardovski@icloud.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 14:34:11 by svolkau           #+#    #+#             */
/*   Updated: 2026/02/05 14:45:24 by svolkau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/Span.hpp"

int main()
{
	unsigned int N = 10000;
	Span sp(N);
	
	for (unsigned int i = 0; i < N; i++)
		sp.addNumber(i);
	try
	{
		sp.longestSpan();
	}
	catch(const Span::TooFewNumbersException& e)
	{
		std::cerr << e.what() << std::endl;
	}

	return 0;
}
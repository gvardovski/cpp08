/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svolkau <gvardovski@icloud.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/06 12:25:29 by svolkau           #+#    #+#             */
/*   Updated: 2026/02/06 13:10:29 by svolkau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/MutantStack.hpp"

int main()
{
	MutantStack<int> mstack;

	mstack.push(5);
	mstack.push(17);

	std::cout << "TOP : " << mstack.top() << std::endl;

	mstack.pop();
	
	std::cout << "TOP : " << mstack.top() << std::endl;
	std::cout << "SIZE : " << mstack.size() << std::endl;

	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);

	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();

	std::cout << "Begin : " << *it << std::endl;
	std::cout << "End : " << *ite << std::endl;
	
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);
	std::cout << "COPY SIZE : " << s.size() << std::endl;
	return 0;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svolkau <gvardovski@icloud.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/06 12:20:58 by svolkau           #+#    #+#             */
/*   Updated: 2026/02/06 13:00:49 by svolkau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/MutantStack.hpp"

#ifndef MUTANTSTACK_TPP
#define MUTANTSTACK_TPP

template<typename T, typename Container>
MutantStack<T, Container>::MutantStack() : std::stack<T, Container>() {}

template<typename T, typename Container>
MutantStack<T, Container>::MutantStack(const MutantStack &other) : std::stack<T, Container>(other) {}

template<typename T, typename Container>
MutantStack<T, Container>::~MutantStack() {}

template<typename T, typename Container>
MutantStack<T, Container> &MutantStack<T, Container>::operator=(const MutantStack &other)
{
	if (this != &other)
		std::stack<T, Container>::operator=(other);
	return (*this);
}

template<typename T, typename Container>
typename MutantStack<T, Container>::iterator MutantStack<T, Container>::begin(void)
{
	return (this->c.begin());
}

template<typename T, typename Container>
typename MutantStack<T, Container>::iterator MutantStack<T, Container>::end(void)
{
	return (this->c.end());
}

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svolkau <gvardovski@icloud.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/06 12:20:47 by svolkau           #+#    #+#             */
/*   Updated: 2026/02/06 12:59:30 by svolkau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_CLASS_HPP
# define MUTANTSTACK_CLASS_HPP

#include <stack>
#include <deque>
#include <iostream>

template<typename T, typename Container = std::deque<T> >
class MutantStack : public std::stack<T, Container>
{
    public:
        MutantStack();
		MutantStack(const MutantStack& other);
        ~MutantStack();

		MutantStack &operator=(const MutantStack &other);

        typedef typename Container::iterator iterator;

        iterator    begin(void);
        iterator    end(void);
};

#include  "../src/MutantStack.tpp"

#endif
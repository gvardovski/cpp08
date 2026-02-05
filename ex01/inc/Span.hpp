/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svolkau <gvardovski@icloud.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 14:21:36 by svolkau           #+#    #+#             */
/*   Updated: 2026/02/05 14:38:58 by svolkau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_CLASS_CPP
#define SPAN_CLASS_CPP

#include <iostream>
#include <exception>
#include <algorithm>
#include <vector>
#include <list>
#include <limits>

class Span
{
	private:
		std::vector<int> _numbers;
		unsigned int _maxSize;
		
	public:
		Span(unsigned int N);
		Span(const Span &other);	
		Span &operator=(const Span &other);
		~Span();
		
		void addNumber(int number);
		void shortestSpan();
		void longestSpan();
	
	class TooFewNumbersException : public std::exception
	{
		public:
			virtual const char *what() const throw();
	};
};

#endif
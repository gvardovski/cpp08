/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svolkau <gvardovski@icloud.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 14:21:36 by svolkau           #+#    #+#             */
/*   Updated: 2026/02/05 19:53:26 by svolkau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_CLASS_CPP
#define SPAN_CLASS_CPP

#include <iostream>
#include <iterator>
#include <exception>
#include <algorithm>
#include <vector>
#include <list>
#include <limits>
#include <cstdlib>
#include <ctime>

class Span
{
	private:
		std::vector<int> _numbers;
		unsigned int _maxSize;
		
	public:
		Span();
		Span(unsigned int N);
		Span(const Span &other);	
		Span &operator=(const Span &other);
		~Span();
		
		void addNumber(int number);
		int shortestSpan();
		int longestSpan();
		void addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end);

		class TooFewNumbersException : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};

		class SpanFullException : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};
};

#endif
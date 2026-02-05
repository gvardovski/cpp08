/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svolkau <gvardovski@icloud.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 14:21:46 by svolkau           #+#    #+#             */
/*   Updated: 2026/02/05 14:39:55 by svolkau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Span.hpp"

Span::Span(unsigned int N) : _maxSize(N) 
{
	std::cout << "Span constructor called with max size: " << N << std::endl;
}

Span::Span(const Span &other) : _numbers(other._numbers), _maxSize(other._maxSize) 
{
	std::cout << "Span copy constructor called" << std::endl;
}

Span &Span::operator=(const Span &other) 
{
	std::cout << "Span copy assignment operator called" << std::endl;
	if (this != &other) 
	{
		_numbers = other._numbers;
		_maxSize = other._maxSize;
	}
	return *this;
}

Span::~Span() 
{
	std::cout << "Span destructor called" << std::endl;
}

void Span::addNumber(int number) 
{
	if (_numbers.size() >= _maxSize) 
		throw (TooFewNumbersException());
	_numbers.push_back(number);
}

const char *Span::TooFewNumbersException::what() const throw()
{
	return ("Index out of range");
}

void Span::longestSpan() 
{
	if (_numbers.size() < 2) 
		throw (TooFewNumbersException());
	int min = *std::min_element(_numbers.begin(), _numbers.end());
	int max = *std::max_element(_numbers.begin(), _numbers.end());
	std::cout << "Longest span: " << max - min << std::endl;
}
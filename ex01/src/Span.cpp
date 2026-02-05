/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svolkau <gvardovski@icloud.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 14:21:46 by svolkau           #+#    #+#             */
/*   Updated: 2026/02/05 19:53:38 by svolkau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Span.hpp"

Span::Span() : _maxSize(0) {}

Span::Span(unsigned int N) : _maxSize(N) {_numbers.reserve(N);}

Span::Span(const Span &other) : _numbers(other._numbers), _maxSize(other._maxSize) {}

Span &Span::operator=(const Span &other) 
{
	if (this != &other) 
	{
		_numbers = other._numbers;
		_maxSize = other._maxSize;
	}
	return *this;
}

Span::~Span() {}

void Span::addNumber(int number) 
{
	if (_numbers.size() >= _maxSize) 
		throw (SpanFullException());
	_numbers.push_back(number);
}

const char *Span::TooFewNumbersException::what() const throw()
{
	return ("Too few numbers to find a span");
}

const char *Span::SpanFullException::what() const throw()
{
	return ("Too many numbers to find a span");
}

int Span::longestSpan() 
{
	if (_numbers.size() < 2) 
		throw (TooFewNumbersException());
	int min = *std::min_element(_numbers.begin(), _numbers.end());
	int max = *std::max_element(_numbers.begin(), _numbers.end());
	return max - min;
}
int Span::shortestSpan() 
{
	if (_numbers.size() < 2) 
		throw (TooFewNumbersException());
	std::vector<int> sortedNumbers = _numbers;
	std::sort(sortedNumbers.begin(), sortedNumbers.end());
	int minSpan = std::numeric_limits<int>::max();
	for (size_t i = 1; i < sortedNumbers.size(); ++i) 
	{
		int span = sortedNumbers[i] - sortedNumbers[i - 1];
		if (span < minSpan) 
			minSpan = span;
	}
	return minSpan;
}

void Span::addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end) 
{
	size_t rangeSize = std::distance(begin, end);
	if (_numbers.size() + rangeSize > _maxSize) 
		throw (SpanFullException());
	_numbers.insert(_numbers.end(), begin, end);
}
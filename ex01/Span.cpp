/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljoffo <ljoffo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 14:46:17 by ljoffo            #+#    #+#             */
/*   Updated: 2022/09/20 15:24:13 by ljoffo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(void): _N(0)
{}

Span::Span(unsigned int N): _N(N)
{}

Span::Span(Span const &src)
{
	*this = src;
}

Span & Span::operator=(Span const &rhs)
{
	if (this != &rhs)
	{
		_N = rhs._N;
		_vec = rhs._vec;
	}
	return *this;
}

Span::~Span(void)
{}

void Span::addNumber(int nb)
{
	if (_vec.size() < _N)
		_vec.push_back(nb);
	else
	{
		std::cout << "Exception: maximum size exceeded" << std::endl;
		throw std::exception();
	}		
}

void Span::fillSpan(std::vector<int>::iterator first, std::vector<int>::iterator last)
{
	// while (first < last)
	// {
	// 	this->addNumber(*first);
	// 	first++;
	// }
	if (std::distance(first, last) <= _N)
		_vec.insert(_vec.begin(),first, last);
	else
	{
		std::cout << "Exception: maximum size exceeded" << std::endl;
		throw std::exception();
	}	
}

int Span::shortestSpan(void)
{
	if (_vec.size() <= 1)
	{
		std::cout << "Exception: not enough elements" << std::endl;
		throw std::exception();
	}
	std::sort(_vec.begin(), _vec.end());
	std::vector<int>	_vec2;

	for (unsigned int i = 0; i < _vec.size()-1; i++)
		_vec2.push_back(_vec[i+1] - _vec[i]);
	
	int shortest = *std::min_element(_vec2.begin(), _vec2.end());
	return shortest;
}

int Span::longestSpan(void)
{
	if (_vec.size() <= 1)
	{
		std::cout << "Exception: not enough elements" << std::endl;
		throw std::exception();
	}
	int biggest = *std::max_element(_vec.begin(), _vec.end());
	int smallest = *std::min_element(_vec.begin(), _vec.end());

	int longest = biggest - smallest;
	return longest;
}

void Span::display(void)
{
	std::cout << "Display elements: ";
	if (_vec.size() == 0)
		std::cout << "empty";
	for (unsigned int i = 0; i < _vec.size(); i++)
		std::cout << _vec[i] << " ";
	std::cout << std::endl; 
}

void Span::displayN(void)
{
	std::cout << "Max size N: " << _N << std::endl;
}

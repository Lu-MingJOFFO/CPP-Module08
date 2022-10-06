/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljoffo <ljoffo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 14:40:52 by ljoffo            #+#    #+#             */
/*   Updated: 2022/09/16 16:42:07 by ljoffo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>

class	Span
{
	public:
		Span(void);
		Span(unsigned int N);
		Span(Span const &src);
		Span & operator=(Span const &rhs);
		~Span(void);

		void addNumber(int nb);
		void fillSpan(std::vector<int>::iterator first, std::vector<int>::iterator last);
		int shortestSpan(void);
		int longestSpan(void);
		void display(void);
		void displayN(void);
		
	private:
		std::vector<int>	_vec;
		unsigned int		_N;
		
};

#endif
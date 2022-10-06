/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljoffo <ljoffo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 14:40:52 by ljoffo            #+#    #+#             */
/*   Updated: 2022/09/21 15:15:52 by ljoffo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <iostream>
#include <stack>

template< typename T >
class	MutantStack: public std::stack<T>
{
	public:
		typedef typename std::stack<T>::container_type::iterator iterator;
		
		MutantStack(void)
		{}
		
		MutantStack(MutantStack const & src)
		{
			*this = src;
		}
		
		MutantStack & operator=(MutantStack const & rhs)
		{
			this->c = rhs.c;
			return *this;
		}
		
		~MutantStack(void)
		{}
		
		iterator begin(void)
		{
			return this->c.begin();
		}

		iterator end(void)
		{
			return this->c.end();
		}
};

#endif
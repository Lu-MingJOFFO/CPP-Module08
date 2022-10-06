/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljoffo <ljoffo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 16:08:32 by ljoffo            #+#    #+#             */
/*   Updated: 2022/09/15 14:06:42 by ljoffo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_H
# define EASYFIND_H

#include <iostream>
#include <list>
#include <vector>
#include <algorithm>

template< typename T >
typename T::iterator easyfind(T & cont, int nb)
{
	typename T::iterator it;
	it = std::find(cont.begin(), cont.end(), nb);

	if (it == cont.end())
		throw std::exception();
	
	return it;
}

#endif


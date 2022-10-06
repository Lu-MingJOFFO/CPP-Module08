/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljoffo <ljoffo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 14:26:32 by ljoffo            #+#    #+#             */
/*   Updated: 2022/09/15 14:04:01 by ljoffo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.h"

int	main(void)
{
	try
	{
		std::list<int>	lst;

		lst.push_back(1);
		lst.push_back(17);
		lst.push_back(42);

		std::list<int>::iterator	it;
		it = easyfind(lst, 1);
		std::cout << *it << std::endl;

		it = easyfind(lst, 17);
		std::cout << *it << std::endl;

		std::cout << *easyfind(lst, 42) << std::endl;

		std::vector<int>	vec;
		vec.push_back(5);
		vec.push_back(32);
		vec.push_back(198);

		std::cout << *easyfind(vec, 32) << std::endl;
		std::cout << *easyfind(vec, 198) << std::endl;
		std::cout << *easyfind(vec, 44) << std::endl;
	}
	catch(std::exception & e)
	{
		std::cout << "Exception: no match found" << std::endl;
	}
}





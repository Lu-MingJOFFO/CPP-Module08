/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljoffo <ljoffo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 14:26:32 by ljoffo            #+#    #+#             */
/*   Updated: 2022/09/20 15:32:07 by ljoffo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int	main(void)
{
	try
	{
		Span	span(6);
		span.displayN();
		
		span.addNumber(6);
		span.addNumber(85);
		span.addNumber(250);
		span.addNumber(-6);

		span.display();
		std::cout << "Shortest span: " << span.shortestSpan() << std::endl;
		std::cout << "Longest span: " << span.longestSpan() << std::endl;

		span.addNumber(1); span.display();
		span.addNumber(2); span.display();
		span.addNumber(3); span.display();
	}
	catch(std::exception & e){}
	
	std::cout << std::endl;
	
	try
	{
		Span	span(20000);
		span.displayN();
		
		std::vector<int> toCopy;
		for(int i = 1; i <= 10000; i++)
			toCopy.push_back(i);

		span.fillSpan(toCopy.begin(), toCopy.end());

		span.display();
		std::cout << "Shortest span: " << span.shortestSpan() << std::endl;
		std::cout << "Longest span: " << span.longestSpan() << std::endl;
	}
	catch(std::exception & e){}
}

// int main()
// {
// Span sp = Span(5);

// sp.addNumber(6);
// sp.addNumber(3);
// sp.addNumber(17);
// sp.addNumber(9);
// sp.addNumber(11);

// std::cout << sp.shortestSpan() << std::endl;
// std::cout << sp.longestSpan() << std::endl;

// return 0;
// }



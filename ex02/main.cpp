/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljoffo <ljoffo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 14:26:32 by ljoffo            #+#    #+#             */
/*   Updated: 2022/09/21 15:20:02 by ljoffo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <list>

int main()
{
	{
	std::cout << "Example test given in the subject:" << std::endl; 
	MutantStack<int> mstack;

	mstack.push(5); //inserts element at the top
	mstack.push(17);

	std::cout << mstack.top() << std::endl; //accesses top element

	mstack.pop(); //removes top element

	std::cout << mstack.size() << std::endl; //returns number of elements

	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);

	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();

	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);
	std::cout << s.top() << "(showes copy works)" << std::endl;
	// s.pop();
	// std::cout << s.top() << "(showes copy works)" << std::endl;
	}
	{
	std::cout << std::endl << "Replacing MutantStack with std::list:" << std::endl; 
	std::list<int> mstack;

	mstack.push_back(5);
	mstack.push_back(17);

	std::cout << mstack.back() << std::endl;

	mstack.pop_back();

	std::cout << mstack.size() << std::endl;

	mstack.push_back(3);
	mstack.push_back(5);
	mstack.push_back(737);
	//[...]
	mstack.push_back(0);

	std::list<int>::iterator it = mstack.begin();
	std::list<int>::iterator ite = mstack.end();

	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::list<int> s(mstack);
	}
	{
	std::cout << std::endl << "More tests:" << std::endl; 
	MutantStack<int> mstack;
	
	mstack.push(1);
	mstack.push(2);
	mstack.push(3);

	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	
	std::cout << "Incrementing:" << std::endl;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		it++;
	}
	ite--;
	it--;
	it--;
	it--;
	std::cout << "Decrementing:" << std::endl;
	while (it <= ite)
	{
		std::cout << *ite << std::endl;
		ite--;
	}
	
	MutantStack<int> ms;
	ms = mstack;
	std::cout << "Copy in other MutantStack:" << std::endl;
	
	MutantStack<int>::iterator begin = ms.begin();
	MutantStack<int>::iterator end = ms.end();
	
	while (begin != end)
	{
		std::cout << *begin << std::endl;
		begin++;
	}
	}
	return 0;
}



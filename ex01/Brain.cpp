/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivloisy <ivloisy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 20:10:24 by ivloisy           #+#    #+#             */
/*   Updated: 2022/01/24 02:13:04 by ivloisy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

#include <sstream>

Brain::Brain()
{
	for (int i = 0; i < 100; i++)
	{
		std::ostringstream	number_str;
	
		number_str << i + 1;
		ideas[i] = "Idea " + number_str.str();
	}
	std::cout	<< "Brain constructor called" << std::endl;
	return ;
}

Brain::~Brain()
{
	std::cout	<< "Brain destructor called" << std::endl;
	return ;
}

Brain::Brain(Brain const &src)
{
	*this = src;
	std::cout	<< "Brain copy constructor called" << std::endl;
	return ;
}

Brain	&Brain::operator=(Brain const &rhs)
{
	if (this != &rhs)
		for (int i = 0; i < 100; i++)
			this->ideas[i] = rhs.ideas[i];
	return *this;
}

void	Brain::getIdeas() const
{
	std::cout << "{" << std::endl;
	for (int i = 0; i < 100; i++)
		std::cout << "\t" << this->ideas[i] << std::endl;
	std::cout << "}" << std::endl;
}

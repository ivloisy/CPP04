/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivloisy <ivloisy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 17:13:49 by ivloisy           #+#    #+#             */
/*   Updated: 2022/01/24 01:53:32 by ivloisy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal()
{
	this->type = "Cat";
	this->brain = new Brain();
	std::cout	<< "An Cat appears." << std::endl;
	return ;
}

Cat::~Cat()
{
	delete brain;
	std::cout	<< "The Cat disappears." << std::endl;
	return ;
}

Cat::Cat(Cat const &src) : Animal()
{
	*this = src;
/* 	this->brain = new Brain(src->brain); */
	std::cout	<< "An copy of the Cat appears." << std::endl;
	return ;
}

Cat	&Cat::operator=(Cat const &rhs)
{
	if (this != &rhs)
		this->type = rhs.getType();
	return *this;			
}

void	Cat::makeSound() const
{
	std::cout	<< "* MEOW *" << std::endl;
	return ;
}

void	Cat::printIdeas() const
{
	this->brain->getIdeas();
	return ;
}

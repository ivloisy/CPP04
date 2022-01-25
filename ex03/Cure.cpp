/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivloisy <ivloisy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 15:03:08 by ivloisy           #+#    #+#             */
/*   Updated: 2022/01/25 15:58:45 by ivloisy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria()
{
	this->_type = "cure";
	std::cout << "Cure constructor called" << std::endl;
	return ;
}

Cure::~Cure()
{
	std::cout << "Cure destructor called" << std::endl;
	return ;
}

Cure::Cure(Cure const &src) : AMateria()
{
	*this = src;
	std::cout << "Cure constructor called" << std::endl;
	return ;
}

Cure	&Cure::operator=(Cure const &rhs)
{
	if (this != &rhs)
		this->_type = rhs.getType();
	return *this;
}

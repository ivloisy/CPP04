/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivloisy <ivloisy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 17:16:02 by ivloisy           #+#    #+#             */
/*   Updated: 2022/01/25 23:41:34 by ivloisy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character()
{
	this->_name = "Char";
	for (int i = 0; i < 4; i++)
		this->_slot[i] = NULL;
	std::cout << "Character constructor called" << std::endl;
	return ;
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
		if (_slot[i] != NULL)
			delete _slot[i];
	std::cout << "Character destructor called" << std::endl;
	return ;
}

Character::Character(Character const &src)
{
	*this = src;
	std::cout << "Character copy constructor called" << std::endl;
	return ;
}

Character	&Character::operator=(Character const &rhs)
{
	if (this != &rhs)
	{
		this->_name = rhs.getName();
		for (int i = 0; i < 4; i++)
		{
			if (rhs._slot[i])
				_slot[i] = rhs._slot[i]->clone();
			else
				_slot[i] = NULL;
		}
		
	}
	return *this;
}

Character::Character(std::string const name)
{
	this->setName(name);
	for (int i = 0; i < 4; i++)
		this->_slot[i] = NULL;
	std::cout << "Character named " << this->getName() << " constructor called" << std::endl;
	return;
}

void	Character::setName(std::string const name)
{
	this->_name = name;
	return ;
}

std::string const	&Character::getName() const
{
	return this->_name;
}

void	Character::equip(AMateria *m)
{
	for (int i = 0; i < 4; i++)
	{
		if (_slot[i] == NULL)
			_slot[i] = m;
	}
	
	return ;
}

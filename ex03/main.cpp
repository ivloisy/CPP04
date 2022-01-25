/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivloisy <ivloisy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 14:22:21 by ivloisy           #+#    #+#             */
/*   Updated: 2022/01/25 23:03:56 by ivloisy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "ICharacter.hpp"
#include "Character.hpp"

int	main()
{
//	ICharacter	*bob = new Character("Bob");
	Character	bob("Bob");
	std::cout << bob.getName() << std::endl;
/* 	AMateria	materia;
	std::cout << materia.getType() << std::endl;
 */
	AMateria	*ice = new Ice();
	std::cout << ice->getType() << std::endl;
	ice->use(bob);
	AMateria	*tmp;
	tmp = ice->clone();
	tmp->use(bob);
	delete tmp;
	delete ice;
/* 
	Ice			i;
	{
		Ice	j(i);
			std::cout << j.getType() << std::endl;
	}
	std::cout << i.getType() << std::endl; */

	AMateria	*cure = new Cure();
	{
		AMateria	*tmp(cure);
		std::cout << tmp->getType() << std::endl;
	}
	std::cout << cure->getType() << std::endl;
	cure->use(bob);
	delete cure;
/* 
	Cure			k;
	{
		Cure	l(k);
			std::cout << l.getType() << std::endl;
	}
	std::cout << k.getType() << std::endl; */
	Character jim = bob;
	jim.setName("Jim");
	std::cout << jim.getName() << std::endl;
//	delete bob;
	return 0;
}
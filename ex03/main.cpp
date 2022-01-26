/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivloisy <ivloisy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 14:22:21 by ivloisy           #+#    #+#             */
/*   Updated: 2022/01/26 14:23:19 by ivloisy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "ICharacter.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"

int	main()
{
//	ICharacter	*bob = new Character("Bob");
/* 	Character	bob("Bob");
	std::cout << bob.getName() << std::endl; */
/* 	AMateria	materia;
	std::cout << materia.getType() << std::endl;
 */
/* 	AMateria	*ice = new Ice();
	std::cout << ice->getType() << std::endl;
	ice->use(bob);
	AMateria	*tmp;
	tmp = ice->clone();
	tmp->use(bob);
	delete tmp;
	delete ice; */
/* 
	Ice			i;
	{
		Ice	j(i);
			std::cout << j.getType() << std::endl;
	}
	std::cout << i.getType() << std::endl; */

/* 	AMateria	*cure = new Cure();
	{
		AMateria	*tmp(cure);
		std::cout << tmp->getType() << std::endl;
	}
	std::cout << cure->getType() << std::endl;
	cure->use(bob);
	delete cure; */
/* 
	Cure			k;
	{
		Cure	l(k);
			std::cout << l.getType() << std::endl;
	}
	std::cout << k.getType() << std::endl; */
/* 	Character jim = bob;
	jim.setName("Jim");
	std::cout << jim.getName() << std::endl; */
//	delete bob;
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter* me = new Character("me");

    AMateria* tmp;
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);

	ICharacter* bob = new Character("bob");
	
	me->use(0, *bob);
    me->use(1, *bob);
    me->use(2, *bob);
    me->use(22, *bob);
    me->use(-2, *bob);
	
	Character	jim("Jim");
	tmp = src->createMateria("ice");
	jim.equip(tmp);
	tmp = src->createMateria("caca");
	jim.equip(tmp);
	tmp = src->createMateria("ice");
	jim.equip(tmp);
	tmp = src->createMateria("cure");
	jim.equip(tmp);
	tmp = src->createMateria("ice");
	jim.equip(tmp);
	tmp = src->createMateria("ice");
	jim.equip(tmp);
	{
		Character	pam(jim);
		pam.setName("Pam");
		pam.printSlots();
	}
	jim.printSlots();
	tmp = jim.getSlots(0);
	jim.unequip(0);
	jim.printSlots();
	jim.use(0, *bob);
	jim.use(3, *bob);
	delete tmp;
	
	delete bob;
	delete me;
	delete src;


	return 0;
}
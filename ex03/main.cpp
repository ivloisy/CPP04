/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivloisy <ivloisy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 14:22:21 by ivloisy           #+#    #+#             */
/*   Updated: 2022/01/25 16:00:41 by ivloisy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

int	main()
{
/* 	AMateria	materia;
	std::cout << materia.getType() << std::endl;

	AMateria	*ice = new Ice();
	std::cout << ice->getType() << std::endl;
	delete ice;

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
	delete cure;
/* 
	Cure			k;
	{
		Cure	l(k);
			std::cout << l.getType() << std::endl;
	}
	std::cout << k.getType() << std::endl;
	return 0; */
}
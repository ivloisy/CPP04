/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivloisy <ivloisy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 16:43:59 by ivloisy           #+#    #+#             */
/*   Updated: 2022/01/24 21:11:21 by ivloisy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int	main()
{
/* 	const Animal	*meta = new Animal();
	const Animal	*j = new Dog();
	const Animal	*i = new Cat();
	
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << meta->getType() << " " << std::endl;
	j->makeSound();
	i->makeSound();
	meta->makeSound();
	delete meta;
	delete j;
	delete i;

	const WrongAnimal	*beta = new WrongAnimal();
	const WrongAnimal	*k = new WrongCat();
	
	std::cout << k->getType() << " " << std::endl;
	std::cout << beta->getType() << " " << std::endl;
	k->makeSound();
	beta->makeSound();
	delete beta;
	delete k; */
	Animal	*meta[6];
	for (int i = 0; i < 6; i++)
	{
		if (i % 2)
			meta[i] = new Cat();
		else 
			meta[i] = new Dog();
	}
	for (int i = 0; i < 6; i++)
		meta[i]->makeSound();
	for (int i = 0; i < 6; i++)
		delete meta[i];

	srand(time(NULL));
	Cat	cat;
	{
		Cat	copy = cat;
		copy.getBrain()->printIdeas();
	}
	cat.getBrain()->printIdeas();

	Dog	dog;
	{
		Dog	copy = dog;
		copy.getBrain()->printIdeas();
	}
	dog.getBrain()->printIdeas();
	
	return 0;
}

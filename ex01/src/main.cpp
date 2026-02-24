/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dev <dev@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/21 09:54:30 by dev               #+#    #+#             */
/*   Updated: 2026/02/24 15:54:44 by dev              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Animal.hpp"
#include "../inc/Dog.hpp"
#include "../inc/Cat.hpp"

#include "../inc/WrongAnimal.hpp"
#include "../inc/WrongCat.hpp"

static void testArray()
{
	std::cout << "----------------TEST ARRAY----------------" << std::endl;

	int nb = 4;
	Animal* animals[nb];

	for (int i = 0; i < nb; i++)
	{
		if (i < nb / 2)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
	}

	std::cout << std::endl;

	for (int i = 0; i < nb; i++)
	{
		std::cout << "(" << i << ") " << animals[i]->getType() << " : ";
        animals[i]->makeSound();
	}

	std::cout << std::endl;

	for (int i = 0; i < nb; i++)
		delete animals[i];	
	
	return;
}

static void testDeepCopy()
{
	std::cout << std::endl << std::endl << "----------------TEST DEEP COPY----------------" << std::endl;

	{
		Dog firstDog;
		firstDog.setIdea(0, "I want food");
		{
			Dog secondDog(firstDog);	
		}		
		std::cout << firstDog.getType() << ": " << firstDog.getIdea(0) << std::endl;
	}
	
	std::cout << std::endl;
	
	{
		Cat firstCat;
		firstCat.setIdea(10, "I want sleep");
		{
			Cat secondCat(firstCat);
		}
		std::cout << firstCat.getType() << ": " << firstCat.getIdea(10) << std::endl;
	}
	return;
}

int main()
{
	testArray();
	testDeepCopy();
		
	return 0;
}
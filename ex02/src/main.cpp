/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dev <dev@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/21 09:54:30 by dev               #+#    #+#             */
/*   Updated: 2026/02/22 01:08:01 by dev              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/AAnimal.hpp"
#include "../inc/Dog.hpp"
#include "../inc/Cat.hpp"

#include "../inc/WrongAnimal.hpp"
#include "../inc/WrongCat.hpp"

int main()
{
	// AAnimal* animal = new AAnimal();
	// std::cout << std::endl;

	Dog* a = new Dog();
	a->makeSound();
	std::cout << std::endl;

	Cat* b = new Cat();
	b->makeSound();
	std::cout << std::endl;
	
	AAnimal* c = new Dog();
	c->makeSound();
	std::cout << std::endl;

	// delete animal;
	// std::cout << std::endl;
	delete a;
	std::cout << std::endl;
	delete b;
	std::cout << std::endl;
	delete c;
		
	return 0;
}
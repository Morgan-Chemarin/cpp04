/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dev <dev@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/21 09:54:30 by dev               #+#    #+#             */
/*   Updated: 2026/02/24 14:16:56 by dev              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Animal.hpp"
#include "../inc/Dog.hpp"
#include "../inc/Cat.hpp"

#include "../inc/WrongAnimal.hpp"
#include "../inc/WrongCat.hpp"

int main()
{
	const Animal *meta = new Animal();
	const Animal *waf = new Dog();
	const Animal *mew = new Cat();

	const WrongCat *realWrongMew = new WrongCat();
	const WrongAnimal *realWrongAnimal = realWrongMew;

	std::cout << waf->getType() << " " << std::endl;
	std::cout << mew->getType() << " " << std::endl;
	mew->makeSound();
	waf->makeSound();
	meta->makeSound();
	
	std::cout << std::endl;

	std::cout << "Call via WrongCat*      : ";
	realWrongMew->makeSound();
	std::cout << std::endl;

	std::cout << "Call via WrongAnimal*      : ";
	realWrongAnimal->makeSound();
	std::cout << std::endl;
	
	delete meta;
	delete waf;
	delete mew;

	delete realWrongMew;

	return 0;
}
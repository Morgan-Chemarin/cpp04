/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dev <dev@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/21 10:05:12 by dev               #+#    #+#             */
/*   Updated: 2026/02/21 10:54:17 by dev              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Dog.hpp"

Dog::Dog(): Animal()
{
	this->type = "Dog";
	std::cout << "Constructor Dog called" << std::endl;
}

Dog::Dog(const Dog& other): Animal(other)
{
	std::cout << "Copy constructor Dog called" << std::endl;
}

Dog& Dog::operator=(const Dog& other)
{
	if (this != &other)
		Animal::operator=(other);
	std::cout << "Assignement operator Dog called" << std::endl;
	return *this;
}

Dog::~Dog()
{
	std::cout << "Destructor Dog called" << std::endl;
}

void Dog::makeSound() const
{
	std::cout << "WAFFFFFFFF WAFFFFFFFFFFFFFFFFFFFF" << std::endl;
}

std::string Dog::getType() const
{
	return this->type;
}
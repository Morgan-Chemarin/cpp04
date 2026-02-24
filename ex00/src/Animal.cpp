/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dev <dev@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/21 09:58:00 by dev               #+#    #+#             */
/*   Updated: 2026/02/24 14:07:19 by dev              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Animal.hpp"

Animal::Animal()
{
	std::cout << "Constructor Animal called" << std::endl;
}

Animal::Animal(const Animal& other)
{
	std::cout << "Copy constructor Animal called" << std::endl;
	*this = other;
}

Animal& Animal::operator=(const Animal& other)
{
	std::cout << "Assignement operator Animal called" << std::endl;
	if (this != &other)
		this->type = other.type;
	return *this;
}

Animal::~Animal()
{
	std::cout << "Destructor Animal called" << std::endl;
}

void Animal::makeSound() const
{
	std::cout << "Animals don't make sound !" << std::endl;
}

std::string Animal::getType() const
{
	return this->type;
}
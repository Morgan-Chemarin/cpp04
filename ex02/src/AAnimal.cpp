/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dev <dev@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/21 09:58:00 by dev               #+#    #+#             */
/*   Updated: 2026/02/24 15:28:44 by dev              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/AAnimal.hpp"

AAnimal::AAnimal()
{
	std::cout << "Constructor AAnimal called" << std::endl;
}

AAnimal::AAnimal(const AAnimal& other)
{
	std::cout << "Copy constructor AAnimal called" << std::endl;
	*this = other;
}

AAnimal& AAnimal::operator=(const AAnimal& other)
{
	std::cout << "Assignement operator AAnimal called" << std::endl;
	if (this != &other)
		this->type = other.type;
	return *this;
}

AAnimal::~AAnimal()
{
	std::cout << "Destructor AAnimal called" << std::endl;
}

std::string AAnimal::getType() const
{
	return this->type;
}
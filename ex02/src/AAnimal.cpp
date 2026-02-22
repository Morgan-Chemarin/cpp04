/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dev <dev@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/21 09:58:00 by dev               #+#    #+#             */
/*   Updated: 2026/02/22 00:59:07 by dev              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/AAnimal.hpp"

AAnimal::AAnimal() // initialisation list
{
	std::cout << "Constructor AAnimal called" << std::endl;
}

AAnimal::AAnimal(const AAnimal& other)
{
	*this = other;
	std::cout << "Copy constructor AAnimal called" << std::endl;
}

AAnimal& AAnimal::operator=(const AAnimal& other)
{
	if (this != &other)
		this->type = other.type;
	std::cout << "Assignement operator AAnimal called" << std::endl;
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
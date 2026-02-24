/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dev <dev@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/21 10:05:25 by dev               #+#    #+#             */
/*   Updated: 2026/02/24 14:36:57 by dev              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Cat.hpp"

Cat::Cat(): Animal()
{
	std::cout << "Constructor Cat called" << std::endl;
	this->type = "Cat";
}

Cat::Cat(const Cat& other): Animal(other)
{
	std::cout << "Copy constructor Cat called" << std::endl;
}

Cat& Cat::operator=(const Cat& other)
{
	std::cout << "Assignement operator Cat called" << std::endl;
	if (this != &other)
		this->type = other.type;
	return *this;
}

Cat::~Cat()
{
	std::cout << "Destructor Cat called" << std::endl;
}

void Cat::makeSound() const
{
	std::cout << "MIAOUUUUUUUUUUUUUUUUUU" << std::endl;
}
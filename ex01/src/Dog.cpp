/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dev <dev@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/21 10:05:12 by dev               #+#    #+#             */
/*   Updated: 2026/02/24 15:18:40 by dev              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Dog.hpp"

Dog::Dog(): Animal()
{
	std::cout << "Constructor Dog called" << std::endl;
	this->type = "Dog";
	this->_brain = new Brain();
}

Dog::Dog(const Dog& other): Animal(other)
{
	std::cout << "Copy constructor Dog called" << std::endl;
	this->_brain = new Brain(*other._brain);
}

Dog& Dog::operator=(const Dog& other)
{
	std::cout << "Assignement operator Dog called" << std::endl;
	if (this != &other)
	{
		this->type = other.type;
		*this->_brain = *other._brain;
	}
	return *this;
}

Dog::~Dog()
{
	std::cout << "Destructor Dog called" << std::endl;
	delete this->_brain;
}

void Dog::makeSound() const
{
	std::cout << "WAFFFFFFFF WAFFFFFFFFFFFFFFFFFFFF" << std::endl;
}

void Dog::setIdea(int id, const std::string& idea)
{
	this->_brain->setIdeas(id, idea);
}

std::string Dog::getIdea(int id) const
{
	return this->_brain->getIdeas(id);
}
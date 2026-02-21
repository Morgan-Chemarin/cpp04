/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dev <dev@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/21 10:05:12 by dev               #+#    #+#             */
/*   Updated: 2026/02/21 16:09:58 by dev              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Dog.hpp"

Dog::Dog(): Animal()
{
	this->type = "Dog";
	this->_brain = new Brain();
	std::cout << "Constructor Dog called" << std::endl;
}

Dog::Dog(const Dog& other): Animal(other)
{
	this->_brain = new Brain(*other._brain);
	std::cout << "Copy constructor Dog called" << std::endl;
}

Dog& Dog::operator=(const Dog& other)
{
	if (this != &other)
	{
		Animal::operator=(other);
		*this->_brain = *other._brain;
	}
		
	std::cout << "Assignement operator Dog called" << std::endl;
	return *this;
}

Dog::~Dog()
{
	delete this->_brain;
	std::cout << "Destructor Dog called" << std::endl;
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
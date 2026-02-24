/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dev <dev@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/21 10:05:25 by dev               #+#    #+#             */
/*   Updated: 2026/02/24 15:16:52 by dev              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Cat.hpp"

Cat::Cat(): Animal()
{
	std::cout << "Constructor Cat called" << std::endl;
	this->type = "Cat";
	this->_brain = new Brain();
}

Cat::Cat(const Cat& other): Animal(other)
{
	std::cout << "Copy constructor Cat called" << std::endl;
	this->_brain = new Brain(*other._brain);
}

Cat& Cat::operator=(const Cat& other)
{
	std::cout << "Assignement operator Cat called" << std::endl;
	if (this != &other)
	{
		this->type = other.type;
		*this->_brain = *other._brain;
	}
	return *this;
}

Cat::~Cat()
{
	std::cout << "Destructor Cat called" << std::endl;
	delete this->_brain;
}

void Cat::makeSound() const
{
	std::cout << "MIAOUUUUUUUUUUUUUUUUUU" << std::endl;
}

void Cat::setIdea(int id, const std::string& idea)
{
	this->_brain->setIdeas(id, idea);
}

std::string Cat::getIdea(int id) const
{
	return this->_brain->getIdeas(id);
}
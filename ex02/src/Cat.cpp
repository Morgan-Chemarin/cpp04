/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dev <dev@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/21 10:05:25 by dev               #+#    #+#             */
/*   Updated: 2026/02/22 00:59:19 by dev              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Cat.hpp"

Cat::Cat(): AAnimal()
{
	this->type = "Cat";
	this->_brain = new Brain();
	std::cout << "Constructor Cat called" << std::endl;
}

Cat::Cat(const Cat& other): AAnimal(other)
{
	this->_brain = new Brain(*other._brain);
	std::cout << "Copy constructor Cat called" << std::endl;
}

Cat& Cat::operator=(const Cat& other)
{
	if (this != &other)
	{
		AAnimal::operator=(other);
		*this->_brain = *other._brain;
	}
		
	std::cout << "Assignement operator Cat called" << std::endl;
	return *this;
}

Cat::~Cat()
{
	delete this->_brain;
	std::cout << "Destructor Cat called" << std::endl;
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
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dev <dev@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/21 12:27:30 by dev               #+#    #+#             */
/*   Updated: 2026/02/21 12:43:33 by dev              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Brain.hpp"

Brain::Brain()
{
	std::cout << "Constructor Brain called" << std::endl;
}

Brain::Brain(const Brain& other)
{
	*this = other;
	std::cout << "Copy constructor Brain called" << std::endl;
}

Brain& Brain::operator=(const Brain& other)
{
	if (this != &other)
		for (int i = 0; i < 99; i++)
			this->ideas[i] = other.ideas[i];
	std::cout << "Assignement operator Brain called" << std::endl;
	return *this;
}

Brain::~Brain()
{
	std::cout << "Destructor Brain called" << std::endl;
}

void Brain::setIdeas(int N, std::string value)
{
	this->ideas[N] = value;
}

std::string Brain::getIdeas(int N)
{
	return this->ideas[N];
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dev <dev@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/21 12:27:30 by dev               #+#    #+#             */
/*   Updated: 2026/02/21 16:08:51 by dev              ###   ########.fr       */
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
		for (int i = 0; i < 100; i++)
			this->ideas[i] = other.ideas[i];
	std::cout << "Assignement operator Brain called" << std::endl;
	return *this;
}

Brain::~Brain()
{
	std::cout << "Destructor Brain called" << std::endl;
}

void Brain::setIdeas(int N, const std::string& value)
{
	if (N < 100 && N >= 0)
		this->ideas[N] = value;
}

std::string Brain::getIdeas(int N) const
{
	if (N < 100 && N >= 0)
		return this->ideas[N];
	return "";
}
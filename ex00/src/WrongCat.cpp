/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dev <dev@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/21 11:08:45 by dev               #+#    #+#             */
/*   Updated: 2026/02/24 14:38:04 by dev              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/WrongCat.hpp"

WrongCat::WrongCat(): WrongAnimal()
{
	std::cout << "Constructor WrongCat called" << std::endl;
	this->type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat& other): WrongAnimal(other)
{
	std::cout << "Copy constructor WrongCat called" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& other)
{
	std::cout << "Assignement operator WrongCat called" << std::endl;
	if (this != &other)
		this->type = other.type;
	return *this;
}

WrongCat::~WrongCat()
{
	std::cout << "Destructor WrongCat called" << std::endl;
}

void WrongCat::makeSound() const
{
	std::cout << "UUUUUUUAAAAAIIMM" << std::endl;
}
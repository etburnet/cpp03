/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eburnet <eburnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 15:49:22 by eburnet           #+#    #+#             */
/*   Updated: 2025/02/18 13:14:07 by eburnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap(std::string _name) : ClapTrap(_name)
{
	std::cout << "FragTrap Constructor for " << _name << " called!" << std::endl;
	this->name = _name;
	this->hit_points = 100;
	this->energy_points = 100;
	this->attack_damage = 30;
}

FragTrap::FragTrap(const FragTrap &other, std::string _name) : ClapTrap(_name)
{
	std::cout << "FragTrap Copy Constructor called!" << std::endl;
	FragTrap::operator=(other);
}

FragTrap& FragTrap::operator=(const FragTrap &other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	ClapTrap::operator=(other);
	return (*this);
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap Destructor called!" << std::endl;
}

void FragTrap::highFivesGuys()
{
	std::cout << "Positive high fives request." << std::endl;
}

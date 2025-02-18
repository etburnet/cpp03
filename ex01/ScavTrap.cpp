/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eburnet <eburnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 10:45:25 by eburnet           #+#    #+#             */
/*   Updated: 2025/02/18 13:13:20 by eburnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap(std::string _name) : ClapTrap(_name)
{
	std::cout << "ScavTrap " << _name << " Constructor called!" << std::endl;
	this->name = _name;
	this->hit_points = 100;
	this->energy_points = 50;
	this->attack_damage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &other, std::string _name) : ClapTrap(_name)
{
	std::cout << "Copy Constructor called!" << std::endl;
	ScavTrap::operator=(other);
}

ScavTrap& ScavTrap::operator=(const ScavTrap &other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	ClapTrap::operator=(other);
	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap Destructor called!" << std::endl;
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << this->name << " is now in Gate keeper mode." << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
	if (this->energy_points <= 0 || this->hit_points <= 0)
	{
		std::cout  << "ScavTrap " << this->name << " 0 energy points left !" << std::endl;
		return ;
	}
	this->energy_points = (this->energy_points - 1);
	std::cout << "ScavTrap " << this->name << " attacks " << target << ", causing " << this->attack_damage << " points of damage!" << std::endl;
}
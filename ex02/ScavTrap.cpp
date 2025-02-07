/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eburnet <eburnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 10:45:25 by eburnet           #+#    #+#             */
/*   Updated: 2025/02/07 12:57:40 by eburnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << this->getName() << " is now in Gate keeper mode." << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap Destructor called!" << std::endl;
}

ScavTrap::ScavTrap(std::string _name) : ClapTrap(_name)
{
	std::cout << "ScavTrap " << _name << " Constructor called!" << std::endl;
	this->setName(_name);
	this->setHitPoints(100);
	this->setEnergyPoints(50);
	this->setAttackDamage(20);
}

void ScavTrap::attack(const std::string& target)
{
	if (this->getEnergyPoints() <= 0)
	{
		std::cout << "0 energy points left !" << std::endl;
		return ;
	}
	this->setEnergyPoints(this->getEnergyPoints() - 1);
	std::cout << "ScavTrap " << this->getName() << " attacks " << target << ", causing " << this->getAttackDamage() << " points of damage!" << std::endl;
}
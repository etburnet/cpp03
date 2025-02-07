/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eburnet <eburnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 15:49:22 by eburnet           #+#    #+#             */
/*   Updated: 2025/02/07 16:31:58 by eburnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap(std::string _name) : ClapTrap(_name)
{
	std::cout << "FragTrap Constructor for " << _name << " called!" << std::endl;
	this->setName(_name);
	this->setHitPoints(100);
	this->setEnergyPoints(100);
	this->setAttackDamage(30);
}

FragTrap::FragTrap(const FragTrap &other, std::string _name)
{
	std::cout << "FragTrap Copy Constructor called!" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap &)
{
	
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap Destructor called!" << std::endl;
}

void FragTrap::highFivesGuys()
{
	std::cout << "Positive high fives request." << std::endl;
}

 void FragTrap::attack(const std::string& target)
{
	if (this->getEnergyPoints() <= 0)
	{
		std::cout << "0 energy points left !" << std::endl;
		return ;
	}
	this->setEnergyPoints(this->getEnergyPoints() - 1);
	std::cout << "FragTrap " << this->getName() << " attacks " << target << ", causing " << this->getAttackDamage() << " points of damage!" << std::endl;
}
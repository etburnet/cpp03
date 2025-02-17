/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eburnet <eburnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 11:48:13 by eburnet           #+#    #+#             */
/*   Updated: 2025/02/17 10:34:35 by eburnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap(std::string _name)
{
	std::cout << "ClapTrap Constructor for " << _name << " called!" << std::endl;
	this->name = _name;
	this->hit_points = 10;
	this->energy_points = 10;
	this->attack_damage = 0;
}

ClapTrap::ClapTrap(const ClapTrap &other)
{
	std::cout << "Copy constructor called" << std::endl;
	ClapTrap::operator=(other);
}

ClapTrap& ClapTrap::operator=(const ClapTrap &other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->attack_damage = other.attack_damage;
	this->energy_points = other.energy_points;
	this->hit_points = other.hit_points;
	this->name = other.name;
	return *this;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap Destructor called!" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
	if (this->energy_points <= 0 || this->hit_points <= 0)
	{
		std::cout << "ClapTrap" << this->name << "have 0 energy points left !" << std::endl;
		return ;
	}
	this->energy_points--;
	std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing " << this->attack_damage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap " << this->name << " losted " << amount << " hits point" << std::endl;
	this->hit_points -= amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->energy_points <= 0 || this->hit_points <= 0)
	{
		std::cout << "ClapTrap" << this->name << "have 0 energy points left !" << std::endl;
		return ;
	}
	this->energy_points--;
	std::cout << "ClapTrap " << this->name << " gaigned " << amount << " hits point" << std::endl;
	this->hit_points += amount;
}
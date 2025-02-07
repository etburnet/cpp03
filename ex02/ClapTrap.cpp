/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eburnet <eburnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 11:48:13 by eburnet           #+#    #+#             */
/*   Updated: 2025/02/07 12:43:37 by eburnet          ###   ########.fr       */
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

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap Destructor called!" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
	if (this->energy_points <= 0)
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
	if (this->energy_points <= 0)
	{
		std::cout << "ClapTrap " << this->name << " have 0 energy points left !" << std::endl;
		return ;
	}
	this->energy_points--;
	std::cout << "ClapTrap " << this->name << " gaigned " << amount << " hits point" << std::endl;
	this->hit_points += amount;
}

std::string ClapTrap::getName()
{
	return (this->name);
}

void ClapTrap::setName(std::string _name)
{
	this->name = _name;
}

int ClapTrap::getHitPoints()
{
	return (this->hit_points);
}

void ClapTrap::setHitPoints(int _hitPoints)
{
	this->hit_points = _hitPoints;
}

int ClapTrap::getEnergyPoints()
{
	return (this->energy_points);
}

void ClapTrap::setEnergyPoints(int _energyPoints)
{
	this->energy_points = _energyPoints;
}

int ClapTrap::getAttackDamage()
{
	return (this->attack_damage);
}

void ClapTrap::setAttackDamage(int _attackDamage)
{
	this->attack_damage = _attackDamage;
}

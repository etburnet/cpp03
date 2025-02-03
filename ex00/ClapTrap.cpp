/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eburnet <eburnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 11:48:13 by eburnet           #+#    #+#             */
/*   Updated: 2025/02/03 15:44:26 by eburnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap(std::string _name)
{
	std::cout << "Constructor for " << _name << " called!" << std::endl;
	this->name = _name;
	this->hit_points = 10;
	this->energy_points = 10;
	this->attack_damage = 0;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called!" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
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
	std::cout << "ClapTrap " << this->name << " gaigned " << amount << " hits point" << std::endl;
	this->energy_points--;
	this->hit_points += amount;
}
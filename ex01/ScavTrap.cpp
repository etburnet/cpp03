/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eburnet <eburnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 10:45:25 by eburnet           #+#    #+#             */
/*   Updated: 2025/02/04 16:00:22 by eburnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << this->name << " is now in Gate keeper mode." << std::endl;

}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap Destructor called!" << std::endl;
}

ScavTrap::ScavTrap(std::string _name) : ClapTrap(_name)
{
	std::cout << "ScavTrap Constructor for " << _name << " called!" << std::endl;
	this->name = _name;
	this->hit_points = 100;
	this->energy_points = 50;
	this->attack_damage = 20;
}

 void ScavTrap::attack(const std::string& target)
{
	if (this->energy_points <= 0)
	{
		std::cout << "0 energy points left !" << std::endl;
		return ;
	}
	this->energy_points--;
	std::cout << "ScavTrap " << this->name << " attacks " << target << ", causing " << this->attack_damage << " points of damage!" << std::endl;
}
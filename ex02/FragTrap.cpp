/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eburnet <eburnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 15:49:22 by eburnet           #+#    #+#             */
/*   Updated: 2025/02/04 15:56:52 by eburnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>

void FragTrap::highFivesGuys()
{
	std::cout << "Positive high fives request." << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap Destructor called!" << std::endl;
}

FragTrap::FragTrap(std::string _name) : ClapTrap(_name)
{
	std::cout << "FragTrap Constructor for " << _name << " called!" << std::endl;
	this->name = _name;
	this->hit_points = 100;
	this->energy_points = 100;
	this->attack_damage = 30;
}

 void FragTrap::attack(const std::string& target)
{
	if (this->energy_points <= 0)
	{
		std::cout << "0 energy points left !" << std::endl;
		return ;
	}
	this->energy_points--;
	std::cout << "FragTrap " << this->name << " attacks " << target << ", causing " << this->attack_damage << " points of damage!" << std::endl;
}
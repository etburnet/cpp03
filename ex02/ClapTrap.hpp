/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eburnet <eburnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 11:48:16 by eburnet           #+#    #+#             */
/*   Updated: 2025/02/18 13:15:55 by eburnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>

class ClapTrap
{
	protected:
		std::string	name;
		int			hit_points;
		int			energy_points;
		int			attack_damage;
	public:
		ClapTrap(std::string _name);
		ClapTrap(const ClapTrap &);
		ClapTrap& operator=(const ClapTrap&);
		~ClapTrap();
		virtual void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};


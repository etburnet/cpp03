/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eburnet <eburnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 11:48:16 by eburnet           #+#    #+#             */
/*   Updated: 2025/02/07 15:27:05 by eburnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#ifndef CLAP_TRAP_HPP
#define CLAP_TRAP_HPP

class ClapTrap
{
	private:
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
		std::string getName();
		void setName(std::string _name);
		int getHitPoints();
		void setHitPoints(int _hitPoints);
		int getEnergyPoints();
		void setEnergyPoints(int _energyPoints);
		int getAttackDamage();
		void setAttackDamage(int _attackDamage);
};

#endif

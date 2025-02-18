/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eburnet <eburnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 10:44:59 by eburnet           #+#    #+#             */
/*   Updated: 2025/02/18 13:08:15 by eburnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:
 		ScavTrap(std::string _name);
		ScavTrap(const ScavTrap&, std::string _name);
		ScavTrap& operator=(const ScavTrap&);
		~ScavTrap();
		void attack(const std::string& target);
		void guardGate();
};

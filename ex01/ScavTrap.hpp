/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eburnet <eburnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 10:44:59 by eburnet           #+#    #+#             */
/*   Updated: 2025/02/07 12:55:09 by eburnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	private:
		
	public:
 		ScavTrap(std::string _name);
		~ScavTrap();
		void attack(const std::string& target);
		void guardGate();
};

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eburnet <eburnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 15:49:27 by eburnet           #+#    #+#             */
/*   Updated: 2025/02/18 13:15:58 by eburnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public:
 		FragTrap(std::string _name);
 		FragTrap(const FragTrap &, std::string _name);
 		FragTrap& operator=(const FragTrap &);
		~FragTrap();
		void highFivesGuys(void);
};

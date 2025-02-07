/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eburnet <eburnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 15:49:27 by eburnet           #+#    #+#             */
/*   Updated: 2025/02/07 16:31:00 by eburnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#ifndef FRAG_TRAP_HPP
#define FRAG_TRAP_HPP
#include "ClapTrap.hpp"
#endif

class FragTrap : public ClapTrap
{
	private:

	public:
 		FragTrap(std::string _name);
 		FragTrap(const FragTrap &, std::string _name);
 		FragTrap& operator=(const FragTrap &);
		~FragTrap();
		void attack(const std::string& target);
		void highFivesGuys(void);
};

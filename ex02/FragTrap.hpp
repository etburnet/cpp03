/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eburnet <eburnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 15:49:27 by eburnet           #+#    #+#             */
/*   Updated: 2025/02/07 12:57:53 by eburnet          ###   ########.fr       */
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
		~FragTrap();
		void attack(const std::string& target);
		void highFivesGuys(void);
};

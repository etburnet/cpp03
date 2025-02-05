/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eburnet <eburnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 11:48:19 by eburnet           #+#    #+#             */
/*   Updated: 2025/02/05 10:39:31 by eburnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main()
{
	ClapTrap chien("chien");
	ClapTrap chat("chat");

	for (size_t i = 0; i < 10; i++)
	{
		chien.attack("chat");
		chat.takeDamage(10);
	}
	chien.beRepaired(50);

	ScavTrap singe("singe");

	singe.attack("chien");
	chien.takeDamage(10);
	singe.guardGate();
	singe.beRepaired(15);

	FragTrap lion("lion");

	lion.attack("singe");
	singe.takeDamage(10);
	lion.highFivesGuys();
	lion.beRepaired(7);
}
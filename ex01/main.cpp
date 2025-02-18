/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eburnet <eburnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 11:48:19 by eburnet           #+#    #+#             */
/*   Updated: 2025/02/18 13:23:12 by eburnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>

int	main()
{
	ClapTrap chien("chien");
	ClapTrap chat("chat");

	ScavTrap singe("singe");

	singe.attack("chien");
	chien.takeDamage(20);
	singe.guardGate();
	singe.beRepaired(15);

	for (size_t i = 0; i < 10; i++)
	{
		chien.attack("chat");
		chat.takeDamage(10);
	}
	
	ClapTrap poule(chien);

	chien.beRepaired(50);
}
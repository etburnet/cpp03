/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eburnet <eburnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 11:48:19 by eburnet           #+#    #+#             */
/*   Updated: 2025/02/04 15:40:50 by eburnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main()
{
	ClapTrap chien("chien");
	ClapTrap chat("chat");

	ScavTrap singe("singe");

	singe.attack("chien");
	singe.guardGate();
	singe.beRepaired(15);

/* 	for (size_t i = 0; i < 10; i++)
	{
		chien.attack("chat");
		chat.takeDamage(10);
	} */
	
	chien.beRepaired(50);
}
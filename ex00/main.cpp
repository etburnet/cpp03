/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eburnet <eburnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 11:48:19 by eburnet           #+#    #+#             */
/*   Updated: 2025/02/04 10:41:07 by eburnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

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
}
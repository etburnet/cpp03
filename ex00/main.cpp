/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eburnet <eburnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 11:48:19 by eburnet           #+#    #+#             */
/*   Updated: 2025/02/03 16:06:54 by eburnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main()
{
	ClapTrap chien("chien");
	ClapTrap chat("chat");

	chien.attack("chat");
	chat.takeDamage(10);

	chien.beRepaired(50);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymehlil <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 13:51:40 by ymehlil           #+#    #+#             */
/*   Updated: 2023/07/28 15:00:48 by ymehlil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main() {
	ClapTrap clapTrap("ClapTrap");
	ClapTrap clapClone(clapTrap);
	ClapTrap clapCopy = clapClone;

	std::cout << "=== Attack until no energy ==="<< std::endl;
	for(int i = 0; i < 11; i++)
	{
		std::cout << std::endl;
		clapTrap.attack("target");
	}
	std::cout << std::endl;
	std::cout << "=== Take damage until dead ==="<< std::endl;
	for(int i = 0; i < 4; i++)
	{
		std::cout << std::endl;
		clapTrap.takeDamage(5);
	}

	std::cout << std::endl;
	std::cout << "=== Repair until no energy ==="<< std::endl;
	for(int i = 0; i < 11; i++)
	{
		std::cout << std::endl;
		clapClone.beRepaired(1);
	}
	std::cout << std::endl;
	return 0;
}

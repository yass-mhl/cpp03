/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymehlil <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 02:59:41 by ymehlil           #+#    #+#             */
/*   Updated: 2023/07/30 03:02:34 by ymehlil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main() {
	ScavTrap tst("Paul");

	tst.beRepaired(5);
	tst.attack("John");

	tst.takeDamage(15);
	tst.beRepaired(10);
	tst.attack("Jean");
	tst.guardGate();
}

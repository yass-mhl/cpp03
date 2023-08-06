/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymehlil <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 02:59:41 by ymehlil           #+#    #+#             */
/*   Updated: 2023/08/06 14:27:07 by ymehlil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"

int main(void) {
	FragTrap tst("Paul");

	tst.highFivesGuys();
	tst.takeDamage(100);
	tst.beRepaired(10);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymehlil <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 02:59:41 by ymehlil           #+#    #+#             */
/*   Updated: 2023/08/06 16:43:50 by ymehlil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main(void) {
    DiamondTrap tst("Rick");
	DiamondTrap cpy(tst);
	
	tst.whoAmI();
	cpy.whoAmI();
	cpy = tst;
	cpy.whoAmI();
	tst.attack("John");
}

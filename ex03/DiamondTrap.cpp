/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymehlil <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 16:28:21 by ymehlil           #+#    #+#             */
/*   Updated: 2023/08/06 17:10:53 by ymehlil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap() {
	std::cout << YELLOW << "DiamondTrap default constructor called" << RESET << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name", 100, 50, 30), _name(name){
	std::cout << YELLOW << "DiamondTrap constructor called" << RESET << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& src) {
	std::cout << YELLOW << "DiamondTrap copy constructor called" << RESET << std::endl;
	*this = src;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& rhs) {
	ClapTrap::operator=(rhs);
	this->_name = rhs.getName();
	return *this;
}

DiamondTrap::~DiamondTrap() {
	std::cout << YELLOW << "DiamondTrap destructor called" << RESET << std::endl;
}

std::string DiamondTrap::getName() const {
	return (this->_name);
}

void DiamondTrap::attack(std::string const & target) {
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI() {
	std::cout << YELLOW << "My name: " << _name << ", My ClapTrap name: " << ClapTrap::_name << RESET <<std::endl;
}



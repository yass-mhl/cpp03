/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymehlil <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 14:17:23 by ymehlil           #+#    #+#             */
/*   Updated: 2023/08/06 15:53:17 by ymehlil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

// Constructors

FragTrap::FragTrap() : ClapTrap() {
	std::cout << BLUE << "FragTrap default constructor called" << RESET << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name, 100, 100, 30) {
	std::cout << BLUE << "FragTrap " << this->_name << " constructor called" << RESET << std::endl;
}

FragTrap::FragTrap(const FragTrap& src) {
	std::cout << BLUE << "FragTrap copy constructor called" << RESET << std::endl;
	*this = src;
}

// Operator

FragTrap& FragTrap::operator=(const FragTrap& rhs) {
	ClapTrap::operator=(rhs);
	return *this;
}

// Member function

void FragTrap::highFivesGuys(void) {
	std::cout << BLUE << "FragTrap " << this->_name << " : HighFive ?" << RESET << std::endl;
}

// Destructor

FragTrap::~FragTrap () {
	std::cout << BLUE << "FragTrap destructor called" << RESET << std::endl;
	return ;
}

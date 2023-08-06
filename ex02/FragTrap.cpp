/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymehlil <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 14:17:23 by ymehlil           #+#    #+#             */
/*   Updated: 2023/08/06 14:30:56 by ymehlil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

// Constructors

FragTrap::FragTrap() : ClapTrap() {
	std::cout << "FragTrap default constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name, 100, 100, 30) {
	std::cout << "FragTrap " << this->_name << " constructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap& src) {
	std::cout << "FragTrap copy constructor called" << std::endl;
	*this = src;
}

// Operator

FragTrap& FragTrap::operator=(const FragTrap& rhs) {
	ClapTrap::operator=(rhs);
	return *this;
}

// Member function

void FragTrap::highFivesGuys(void) {
	std::cout << "FragTrap " << this->_name << " : HighFive ?" << std::endl;
}

// Destructor

FragTrap::~FragTrap () {
	std::cout << "FragTrap destructor called" << std::endl;
	return ;
}



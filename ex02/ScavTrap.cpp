/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymehlil <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 02:40:20 by ymehlil           #+#    #+#             */
/*   Updated: 2023/08/06 15:51:42 by ymehlil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap() {
	std::cout << "ScavTrap default constructor called" << std::endl;
	return ;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name, 100, 50, 20) {
	std::cout << RED << "ScavTrap constructor called" << RESET << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const & src)
{
	std::cout << RED << "ScavTrap copy constructor called" << RESET<< std::endl;
	*this = src;
}

ScavTrap::~ScavTrap() {
	std::cout << RED << "ScavTrap destructor called" << RESET << std::endl;
}

ScavTrap & ScavTrap::operator=(ScavTrap const & rhs)
{
	std::cout << RED << "ScavTrap assignation operator called" << RESET << std::endl;
	if (this != &rhs)
	{
		_name = rhs._name;
		_attackDamage = rhs._attackDamage;
		_hitPoints = rhs._hitPoints;
		_energyPoints = rhs._energyPoints;
	}
	return *this;
}

void ScavTrap::attack(std::string const & target) {
	if (this->_energyPoints > 0 && this->_hitPoints > 0)
	{
		std::cout << RED << "ScavTrap " << this->_name << " attack " << target << ", causing " << this->_attackDamage << " points of damage!" << RESET << std::endl;
		this->_energyPoints--;
		return ;
	}
	else if (this->_energyPoints <= 0)
		std::cout << RED << "ScavTrap " << this->_name << " try to attack " << target << ", but he has no energy!" << RESET << std::endl;
	else if (this->_hitPoints <= 0)
		std::cout << RED << "ScavTrap " << this->_name << " try to attack " << target << ", but he is dead!" << RESET << std::endl;
}

void ScavTrap::guardGate()  {
	std::cout << RED << "ScavTrap " << this->_name << " enters Gate Keeper mode" << RESET << std::endl;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymehlil <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 13:24:23 by ymehlil           #+#    #+#             */
/*   Updated: 2023/08/06 15:41:08 by ymehlil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

// Constructors

ClapTrap::ClapTrap() : _name(""), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
	std::cout << GREEN << "ClapTrap default constructor called" << RESET << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(10) {
	 std::cout << GREEN << "ClapTrap " << _name << " constructor called" << RESET << std::endl;
}

ClapTrap::ClapTrap(std::string name, unsigned int hitPoints, unsigned int energyPoints, unsigned int attackDamage) {
	this->_name = name;
	this->_hitPoints = hitPoints;
	this->_energyPoints = energyPoints;
	this->_attackDamage	= attackDamage;
	std::cout << GREEN << "ClapTrap constructor called" << RESET << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const & src) {
	std::cout << GREEN << "ClapTrap copy constructor called" << RESET << std::endl;
	*this = src;
}

// Operator

ClapTrap & ClapTrap::operator=(ClapTrap const & src) {
	std::cout << GREEN << "ClapTrap assignation operator called" << RESET << std::endl;
	if (this != &src)
	{
		this->_name = src._name;
		this->_hitPoints = src._hitPoints;
		this->_energyPoints = src._energyPoints;
		this->_attackDamage = src._attackDamage;
	}
	return *this;
}

// Member functions

void ClapTrap::attack(std::string const & target) {
	if (this->_energyPoints > 0 && this->_hitPoints > 0)
	{
		std::cout << "ClapTrap " << this->_name << " attack " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
		this->_energyPoints--;
		return ;
	}
	else if (this->_energyPoints <= 0)
		std::cout << "ClapTrap " << this->_name << " try to attack " << target << ", but he has no energy!" << std::endl;
	else if (this->_hitPoints <= 0)
		std::cout << "ClapTrap " << this->_name << " try to attack " << target << ", but he is dead!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
	
	if (this->_hitPoints - amount < 0)
		this->_hitPoints = 0;
	else if (this->_hitPoints > 0)
		this->_hitPoints -= amount;
	else
	{
		std::cout << "ClapTrap " << this->_name << " is already dead!" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->_name << " take " << amount << " points of damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (this->_energyPoints <= 0)
	{
		std::cout << "ClapTrap " << this->_name << " can't be repaired, he has no energy!" << std::endl;
		return ;
	}
	else if (this->_hitPoints > 0)
		this->_hitPoints += amount;
	else if (this->_hitPoints <= 0)
	{
		std::cout << "ClapTrap " << this->_name << " is already dead!" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->_name << " be repaired " << amount << " points of damage!" << std::endl;
	this->_energyPoints--;
}

// Destructor

ClapTrap::~ClapTrap() {
	std::cout << GREEN << "ClapTrap destructor called" << RESET << std::endl;
}


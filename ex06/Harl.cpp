/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merlich <merlich@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 23:16:23 by merlich           #+#    #+#             */
/*   Updated: 2022/07/02 18:56:54 by merlich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Harl.hpp"

Harl::Harl( void ){}

Harl::~Harl( void ){}

void	Harl::_debug( void )
{
	std::cout << "I love having extra bacon for my ";
	std::cout << "7XL-double-cheese-triple-pickle-specialketchup burger. ";
	std::cout << std::endl;
	std::cout << "I really do!";
	std::cout << std::endl;
}

void	Harl::_info( void )
{
	std::cout << "I cannot believe adding extra bacon costs more money. ";
	std::cout << std::endl;
	std::cout << "You didn’t put enough bacon in my burger! ";
	std::cout << std::endl;
	std::cout << "If you did, I wouldn’t be asking for more!";
	std::cout << std::endl;
}

void	Harl::_warning( void )
{
	std::cout << "I think I deserve to have some extra bacon for free. ";
	std::cout << std::endl;
	std::cout << "I’ve been coming for years whereas ";
	std::cout << "you started working here since last month.";
	std::cout << std::endl;
}

void	Harl::_error( void )
{
	std::cout << "This is unacceptable! I want to speak to the manager now.";
	std::cout << std::endl;
}

void	Harl::_wrong_str( void )
{
	std::cout << "[ Probably complaining about insignificant problems ]";
	std::cout << std::endl;
}

void	Harl::complain( std::string level )
{
	int		i;
	void	(Harl::*f[5])( void );

	i = 4;
	f[0] = &Harl::_debug;
	f[1] = &Harl::_info;
	f[2] = &Harl::_warning;
	f[3] = &Harl::_error;
	f[4] = &Harl::_wrong_str;

	i -= (!level.compare("DEBUG") * 4 +
		!level.compare("INFO") * 3 +
		!level.compare("WARNING") * 2 +
		!level.compare("ERROR") * 1);

	switch (i)
	{
		case (0):
			std::cout << "[ DEBUG ]" << std::endl;
			(this->*f[0])();
			std::cout << std::endl;
		case (1):
			std::cout << "[ INFO ]" << std::endl;
			(this->*f[1])();
			std::cout << std::endl;
		case (2):
			std::cout << "[ WARNING ]" << std::endl;
			(this->*f[2])();
			std::cout << std::endl;
		case (3):
			std::cout << "[ ERROR ]" << std::endl;
			(this->*f[3])();
			std::cout << std::endl;
			break;
		default:
			(this->*f[4])();
			break;
	}
}

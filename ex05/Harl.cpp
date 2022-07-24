/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merlich <merlich@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 23:16:23 by merlich           #+#    #+#             */
/*   Updated: 2022/07/02 18:08:35 by merlich          ###   ########.fr       */
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
	std::cout << "I really do!";
	std::cout << std::endl;
}

void	Harl::_info( void )
{
	std::cout << "I cannot believe adding extra bacon costs more money. ";
	std::cout << "You didn’t put enough bacon in my burger! ";
	std::cout << "If you did, I wouldn’t be asking for more!";
	std::cout << std::endl;
}

void	Harl::_warning( void )
{
	std::cout << "I think I deserve to have some extra bacon for free. ";
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
	std::cout << "Please check Your input: (DEBUG, INFO, WARNING, ERROR)";
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

	(this->*f[i])();
}

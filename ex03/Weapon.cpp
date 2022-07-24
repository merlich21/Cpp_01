/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merlich <merlich@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 18:50:14 by merlich           #+#    #+#             */
/*   Updated: 2022/06/25 21:03:47 by merlich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) : _type(type)
{}

Weapon::~Weapon(void)
{}

std::string const	&Weapon::getType(void)
{
	return this->_type;
}

void		Weapon::setType(std::string str)
{
	this->_type = str;
}

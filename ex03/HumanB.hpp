/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merlich <merlich@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 19:12:34 by merlich           #+#    #+#             */
/*   Updated: 2022/06/25 20:41:43 by merlich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
	public:

		HumanB( std::string name );
		~HumanB( void );

		void	setWeapon( Weapon &weapon );
		void	attack( void );

	private:

		std::string	_name;
		Weapon		*_weapon;

};

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merlich <merlich@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 18:53:47 by merlich           #+#    #+#             */
/*   Updated: 2022/06/25 20:34:59 by merlich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
	public:

		HumanA( std::string name, Weapon &weapon );
		~HumanA( void );

		void	attack( void );

	private:
	
		std::string	_name;
		Weapon		&_weapon;

};

#endif

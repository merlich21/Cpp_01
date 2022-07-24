/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merlich <merlich@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 18:45:45 by merlich           #+#    #+#             */
/*   Updated: 2022/06/25 21:03:28 by merlich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <string>

class Weapon
{
	public:

		// Weapon( void );
		Weapon( std::string type );
		~Weapon( void );

		std::string const	&getType( void );
		void				setType( std::string str );

	private:
	
		std::string _type;

};

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merlich <merlich@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 23:16:20 by merlich           #+#    #+#             */
/*   Updated: 2022/07/02 17:54:16 by merlich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_H
# define HARL_H

#include <string>

class Harl
{

	public:

		Harl(void);
		~Harl(void);
		void	complain( std::string level );

	private:
		
		void	_debug( void );
		void	_info( void );
		void	_warning( void );
		void	_error( void );
		void	_wrong_str( void );

};

#endif

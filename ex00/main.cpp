/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merlich <merlich@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 21:22:06 by merlich           #+#    #+#             */
/*   Updated: 2022/06/24 22:48:32 by merlich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie	*phill = newZombie("Phill");
	Zombie	*james = newZombie("James");

	phill->announce();
	james->announce();

	delete phill;
	delete james;
	
	randomChump("Patric");
	randomChump("Mike");
	return (0);
}

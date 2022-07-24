/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merlich <merlich@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 23:16:17 by merlich           #+#    #+#             */
/*   Updated: 2022/07/02 18:54:20 by merlich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int argc, char **argv)
{
	Harl	harl;

	if (argc == 2)
	{
		harl.complain(argv[1]);
	}
	else
		std::cout << "Please enter ONE argument!" << std::endl;
	return 0;
}

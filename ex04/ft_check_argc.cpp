/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_argc.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merlich <merlich@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 23:02:06 by merlich           #+#    #+#             */
/*   Updated: 2022/06/27 23:02:08 by merlich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

int	ft_check_argc(int argc)
{
	int	res = 0;

	if (argc != 4)
	{
		std::cerr << "Wrong number of arguments!" << std::endl;
		std::cerr << "Example: filename, s1, s2" << std::endl;
		res = 1;
	}
	return res;
}

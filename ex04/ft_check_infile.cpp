/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_infile.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merlich <merlich@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 23:02:30 by merlich           #+#    #+#             */
/*   Updated: 2022/06/27 23:02:41 by merlich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

int	ft_check_infile(std::ifstream &ifs, char *infile)
{
	int	res = 0;

	if (!ifs.is_open())
	{
		std::cerr << "Error opening file \"" << infile << "\"." << std::endl;
		std::cerr << "File does not exist or access denied." << std::endl;
		res = 1;
	}
	return res;
}

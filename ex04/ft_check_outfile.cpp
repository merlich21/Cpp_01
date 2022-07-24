/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_outfile.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merlich <merlich@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 23:03:05 by merlich           #+#    #+#             */
/*   Updated: 2022/06/27 23:03:07 by merlich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

int	ft_check_outfile(std::ofstream &ofs, std::string outfile)
{
	int	res = 0;

	if (!ofs.is_open())
	{
		std::cerr << "Error opening file \"" << outfile << "\"." << std::endl;
		std::cerr << "File does not exist or access denied." << std::endl;
		res = 1;
	}
	return res;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkers.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merlich <merlich@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 22:55:55 by merlich           #+#    #+#             */
/*   Updated: 2022/06/27 23:03:13 by merlich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

int	ft_check_is_empty(std::string str)
{
	int	res = str.empty();

	if (res)
		std::cerr << "Error: input string is empty!" << std::endl;
	return res;
}

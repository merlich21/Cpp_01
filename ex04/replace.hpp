/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merlich <merlich@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 22:53:13 by merlich           #+#    #+#             */
/*   Updated: 2022/06/27 23:08:06 by merlich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACE_HPP
# define REPLACE_HPP

#include <string>
#include <fstream>
#include <iostream>

int		ft_check_argc(int argc);
int		ft_check_infile(std::ifstream &ifs, char *infile);
int		ft_check_outfile(std::ofstream &ofs, std::string outfile);
int		ft_check_is_empty(std::string str);
void	ft_replace(std::string &line, std::string s1, std::string s2);

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merlich <merlich@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 21:06:31 by merlich           #+#    #+#             */
/*   Updated: 2022/06/27 23:08:33 by merlich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

int	main(int argc, char **argv)
{
	std::string		line;
	std::string		outfile;
	std::ifstream	ifs;
	std::ofstream	ofs;

	if (ft_check_argc(argc))
		return 1;
	if (ft_check_is_empty(argv[2]) || ft_check_is_empty(argv[3]))
		return 1;
	ifs.open(argv[1]);
	if (ft_check_infile(ifs, argv[1]))
		return 1;
	outfile.append(argv[1]);
	outfile.append(".replace");
	ofs.open(outfile);
	if (ft_check_outfile(ofs, outfile))
		return 1;
	while (std::getline(ifs, line))
	{
		ft_replace(line, argv[2], argv[3]);
		ofs << line;
		if (!ifs.eof())
			ofs << std::endl;
	}
	ifs.close();
	ofs.close();
	return 0;
}

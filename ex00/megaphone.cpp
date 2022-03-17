/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleveque <pleveque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 14:52:17 by pleveque          #+#    #+#             */
/*   Updated: 2022/03/17 18:42:37 by pleveque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	print_upper(char *str)
{
	const std::string s = str;

	for (auto it = s.cbegin() ; it != s.cend(); ++it) {
		std::cout << char(std::toupper(*it));
	}
	std::cout << std::endl;
	return (0);
}

int	main(int argc, char **argv)
{
	int	i;

	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		i = 0;
		while (++i < argc)
			print_upper(argv[i]);
	}
	return (0);
}
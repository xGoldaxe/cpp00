/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleveque <pleveque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 14:52:17 by pleveque          #+#    #+#             */
/*   Updated: 2022/03/19 13:45:07 by pleveque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iostream>
#include <string>

int	print_upper(char *str)
{
	std::string s = str;

  	for ( std::string::iterator it=s.begin(); it!=s.end(); ++it) {
   		std::cout << char(std::toupper(*it));
	}

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
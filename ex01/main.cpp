/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleveque <pleveque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 14:52:17 by pleveque          #+#    #+#             */
/*   Updated: 2022/03/18 17:13:35 by pleveque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Contact.class.hpp"
#include "PhoneBook.class.hpp"
#include <iomanip>

int	main() {

	PhoneBook pb;
	std::string cmd = "";

	std::cout << "Hey, enter your command: ";
	while (std::getline(std::cin, cmd))
	{

		if (cmd == "ADD")
			pb.addContact();
		else if (cmd == "SEARCH")
			pb.selectContact();
		else if (cmd == "EXIT")
			return (0);
		std::cout << "Enter your command: ";
	}
	return (0);
}
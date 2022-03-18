/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleveque <pleveque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 14:55:36 by pleveque          #+#    #+#             */
/*   Updated: 2022/03/18 17:11:33 by pleveque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <string>
#include "Contact.class.hpp"

Contact::Contact( void ) : firstName(""), lastName(""), nickname(""),
	phoneNumber(""), secret("") {
	
	return ;
}

Contact::~Contact( void ) {
	
	return ;
}

std::string	secureAdd( std::string msg ) {

	std::string	str = "";

	std::cout << msg <<": ";
	while (std::getline( std::cin, str ) && str == "")
	{
		if (str == "")
			std::cout << "Invalid entry, please try again!" << std::endl;
		std::cout << msg <<": ";
	}
	return (str);
}

void	Contact::update( void ) {

	std::cout << "------------" << std::endl;
	std::cout << "[Enter informations]" << std::endl;

	this->firstName = secureAdd("First name");
	this->lastName = secureAdd("Last name");
	this->nickname = secureAdd("Nickname");
	this->phoneNumber = secureAdd("Phone number");
	this->secret = secureAdd("Darkest secret");

	std::cout << "------------" << std::endl;
	return ;
}

void	Contact::print( void ) {

	std::cout << "------------" << std::endl;
	std::cout << "First name: " << this->firstName << std::endl;
	std::cout << "Last name: "  << this->lastName << std::endl;
	std::cout << "Nickname: "  << this->nickname << std::endl;
	std::cout << "Phone number: "  << this->phoneNumber << std::endl;
	std::cout << "Darkest secret: "  << this->secret << std::endl;
	std::cout << "------------" << std::endl;

	return ;
}

std::string	trim_str( std::string str, unsigned long size ) {

	if (str.length() > size)
		str = str.substr(0, size - 1).append(".");
	return (str);
}

static void	printColumn( std::string str, int size, char delimiter ) {
	
	std::cout << std::setfill(' ') << std::setw(size) << trim_str(str, size);
	std::cout << delimiter;
}

void	Contact::smallPrint( int index ) {

	int		size = 10;
	char	delimiter = '|';
	
	std::cout << delimiter << std::setfill(' ')
			<< std::setw(size) << index << delimiter;
	printColumn( this->firstName, size, delimiter );
	printColumn( this->lastName, size, delimiter );
	printColumn( this->nickname, size, delimiter );
	std::cout << std::endl;
	return ;
}
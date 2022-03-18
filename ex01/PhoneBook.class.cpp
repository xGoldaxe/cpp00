/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleveque <pleveque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 15:35:16 by pleveque          #+#    #+#             */
/*   Updated: 2022/03/18 16:49:08 by pleveque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <iomanip>
#include <stdlib.h>
#include "PhoneBook.class.hpp"

PhoneBook::PhoneBook( void ) : contactNumber(0), actualContact(0) {
	
	return ;
}

PhoneBook::~PhoneBook( void ) {

	return ;
}

void	PhoneBook::printContacts( void ) {

	for ( int i = 0; i < this->contactNumber; ++i ) {
		this->contacts[i].smallPrint(i);
	}
	return ;
}

void	PhoneBook::addContact( void ) {

	if ( this->actualContact >= 8 )
		this->actualContact = 0;
	this->contacts[this->actualContact].update();
	this->actualContact++;
	if ( this->contactNumber < 8)
		this->contactNumber++;
	return ;
}

void	PhoneBook::selectContact( void ) {

	int	indx = -1;
	std::string strIndex;

	if (this->contactNumber == 0)
	{
		std::cout << "There is no contact to search!" << std::endl;
		return ;
	}
	std::cout << std::endl << std::endl << std::endl;
	this->printContacts();
	while ( indx < 0 || indx > this->actualContact - 1 )
	{
		std::cout << "Select a contact: ";
		std::getline( std::cin, strIndex );
		indx = atoi( strIndex.c_str() );
		if ( indx < 0 || indx > this->actualContact - 1 )
			std::cout << "Invalid value, try again!" << std::endl;
	}
	this->contacts[indx].print();
	return ;
}
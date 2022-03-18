/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleveque <pleveque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 14:50:33 by pleveque          #+#    #+#             */
/*   Updated: 2022/03/18 15:12:43 by pleveque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_H
#   define PHONEBOOK_CLASS_H


#include <iostream>
#include <string>
#include "Contact.class.hpp"

class PhoneBook {
	
	private:
		int	contactNumber;
		int	actualContact;
		Contact contacts[8];
		void printContacts( void );
		void printContact( int index );

	public:
	
		PhoneBook( void );
		~PhoneBook( void );
		void add( void );
		void addContact( void );
		void selectContact( void );
};


#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleveque <pleveque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 14:50:33 by pleveque          #+#    #+#             */
/*   Updated: 2022/03/18 16:55:19 by pleveque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_H
#   define CONTACT_CLASS_H


#include <iostream>
#include <string>

class Contact {
    
    private:
        std::string firstName;
        std::string lastName;
        std::string nickname;
        std::string phoneNumber;
        std::string secret;

    public:
    
        Contact( void );
        ~Contact( void );
        void update( void );
        void print( void );
        void smallPrint( int index );
};


#endif
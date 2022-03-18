/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleveque <pleveque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 17:42:19 by pleveque          #+#    #+#             */
/*   Updated: 2022/03/18 17:55:59 by pleveque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Account.hpp"

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account( int initial_deposit ) : _accountIndex(0), _amount(initial_deposit),
		_nbDeposits(0), _nbWithdrawals(0) {

	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount
		<< ";created" << std::endl;
	return ;
}

Account::~Account( void ) {

	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount
		<< ";closed" << std::endl;
	return ;
}
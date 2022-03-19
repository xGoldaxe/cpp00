/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleveque <pleveque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 17:42:19 by pleveque          #+#    #+#             */
/*   Updated: 2022/03/19 13:45:47 by pleveque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Account.hpp"
#include <ctime>
#include <string>
#include <iomanip>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account( int initial_deposit ) : _accountIndex(Account::_nbAccounts), _amount(initial_deposit),
		_nbDeposits(0), _nbWithdrawals(0) {

	Account::_nbAccounts++;
	Account::_totalAmount += initial_deposit;
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount
		<< ";created" << std::endl;
	return ;
}

Account::~Account( void ) {

	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount
		<< ";closed" << std::endl;
	return ;
}

int	Account::getNbAccounts( void ) {

	return (Account::_nbAccounts);
}

int	Account::getTotalAmount( void ) {

	return (Account::_totalAmount);
}

int	Account::getNbDeposits( void ) {

	return (Account::_totalNbDeposits);
}

int	Account::getNbWithdrawals( void ) {

	return (Account::_totalNbWithdrawals);
}

void	Account::displayAccountsInfos( void ) {

	Account::_displayTimestamp();
	std::cout << "accounts:" << Account::getNbAccounts() << ";total:" << Account::getTotalAmount() << ";deposits:"
		<< Account::getNbDeposits() << ";withdrawals:" << 	Account::getNbWithdrawals() << std::endl;
	return ;
}

void	Account::displayStatus( void ) const {

	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";deposits:"
		<< this->_nbDeposits << ";withdrawals:" << this->_nbWithdrawals << std::endl;
	return ;
}

void	Account::_displayTimestamp( void ) {

  std::time_t t = std::time(NULL);
  std::tm tm = *localtime(&t);

  std::cout << "[" << tm.tm_year + 1900
    << std::setfill('0') << std::setw(2) << tm.tm_mon
    << std::setfill('0') << std::setw(2) << tm.tm_mday << "_"
    << std::setfill('0') << std::setw(2) << tm.tm_hour
    << std::setfill('0') << std::setw(2) << tm.tm_min
    << std::setfill('0') << std::setw(2) << tm.tm_sec << "] ";
	return ;
}

void	Account::makeDeposit( int deposit ) {

	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";p_amount:" << this->_amount << ";deposit:" << deposit
		<< ";amount:" << this->_amount + deposit << ";nb_deposits:" << this->_nbDeposits + 1 << std::endl;

	Account::_totalNbDeposits++;
	this->_nbDeposits++;

	Account::_totalAmount += deposit;
	this->_amount += deposit;

	return ;
}

bool	Account::makeWithdrawal( int withdrawal ) {

	Account::_displayTimestamp();
	if (this->_amount < withdrawal)
	{
		std::cout << "index:" << this->_accountIndex << ";p_amount:" << this->_amount << ";withdrawal:refused"
			<< std::endl;
		return (false);
	}
	
	std::cout << "index:" << this->_accountIndex << ";p_amount:" << this->_amount << ";withdrawal:" << withdrawal
		<< ";amount:" << this->_amount - withdrawal << ";nb_withdrawals:" << this->_nbWithdrawals + 1 << std::endl;
	Account::_totalNbWithdrawals++;
	this->_nbWithdrawals++;

	Account::_totalAmount -= withdrawal;
	this->_amount -= withdrawal;

	return (true);
}
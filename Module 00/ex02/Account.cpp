/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmaldagu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 15:54:34 by pmaldagu          #+#    #+#             */
/*   Updated: 2021/08/20 12:58:52 by pmaldagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <ctime>
#include <iostream>
#include <iomanip>
#include <vector>
#include <utility>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account( int initial_deposit )
{
	this->_accountIndex = Account::_nbAccounts++;
	this->_amount = initial_deposit;
	Account::_totalAmount += this->_amount;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;

	Account::_displayTimestamp(); 
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "created" << std::endl;
}

Account::~Account()
{
	Account::_displayTimestamp();
	Account::_nbAccounts--;	
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "closed" << std::endl;
}

int Account::getNbAccounts( void )
{
	return (Account::_nbAccounts);
}

int Account::getTotalAmount( void )
{
	return (Account::_totalAmount);
}

int Account::getNbDeposits( void )
{
	return (Account::_totalNbDeposits);
}

int Account::getNbWithdrawals( void )
{
	return (Account::_totalNbWithdrawals);
}

void Account::_displayTimestamp ( void )
{
	time_t ttime;

	ttime = time(0);
	tm *local_time = localtime(&ttime);

	std::cout << std::setfill('0') 
		<< "["<< 1900 + local_time->tm_year
		<< std::setw(2) << 1 + local_time->tm_mon
		<< std::setw(2) << local_time->tm_mday
		<< "_" << std::setw(2) << local_time->tm_hour
		<< std::setw(2) << local_time->tm_min
		<< std::setw(2) << local_time->tm_sec << "] ";
}

void Account::displayAccountsInfos( void )
{
	Account::_displayTimestamp(); 
	std::cout << "accounts:" << Account::_nbAccounts << ";";
	std::cout << "total:" << Account::_totalAmount << ";";
	std::cout << "deposits:" << Account::_totalNbDeposits << ";";
	std::cout << "withdrawals:" << Account::_totalNbWithdrawals << std::endl;	
}

void Account::makeDeposit( int deposit )
{
	Account::_displayTimestamp(); 
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "p_amount:" << this->_amount << ";";

	Account::_totalNbDeposits++;
	Account::_totalAmount += deposit;
	this->_amount += deposit;
	this->_nbDeposits++;

	std::cout << "deposit:" << deposit << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "nb_deposits:" << this->_nbDeposits << std::endl;

}

bool Account::makeWithdrawal( int withdrawal )
{
	bool accepted;

	accepted = true;

	Account::_displayTimestamp(); 
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "p_amount:" << this->_amount << ";";

	if (withdrawal > this->_amount)
	{
		accepted = false;
		std::cout << "withdrawal:refused" << std::endl;
	}
	else
	{
		Account::_totalNbWithdrawals++;
		Account::_totalAmount -= withdrawal;
		this->_nbWithdrawals++;
		this->_amount -= withdrawal;
		std::cout << "withdrawal:" << withdrawal << ";";
		std::cout << "amount:" << this->_amount << ";";
		std::cout << "nb_withdrawals:" << this->_nbWithdrawals << std::endl;
	}

	return (accepted);
}

int Account::checkAmount( void ) const
{
	return (this->_amount);
}

void Account::displayStatus( void ) const
{
	Account::_displayTimestamp(); 
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "deposits:" << this->_nbDeposits << ";";
	std::cout << "withdrawals:" << this->_nbWithdrawals << std::endl;
}

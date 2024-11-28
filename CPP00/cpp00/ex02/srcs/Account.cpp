/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcorvaro <fcorvaro@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 14:51:42 by fcorvaro          #+#    #+#             */
/*   Updated: 2024/11/28 11:44:26 by fcorvaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <ctime>

// Initialize static members

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

/**
 * @brief Construct a new Account object with an initial deposit.
 * @param initial_deposit The initial deposit amount.
 */
Account::Account(int initial_deposit)
    : _accountIndex(_nbAccounts++), _amount(initial_deposit), _nbDeposits(0), _nbWithdrawals(0)
{
    _totalAmount += initial_deposit; // Update the total amount across all accounts.

    _displayTimestamp(); // Display the timestamp and account creation message.
    std::cout	<< "index:" << _accountIndex 
				<< ";amount:" << _amount 
				<< ";created" 
				<< std::endl;
}

/**
 * @brief Destroy the Account object.
 * 
 * This function displays the current timestamp followed by the account index and the amount
 * in the account, indicating that the account has been closed.
 */
Account::~Account()
{
	_displayTimestamp();
	std::cout	<< "index:" << _accountIndex 
				<< ";amount:" << _amount
				<< ";closed" 
				<< std::endl;
}

/**
 * @brief Get the number of accounts.
 * @return The number of accounts.
 */
int Account::getNbAccounts(void)
{
	return _nbAccounts;
}

/**
 * @brief Get the total amount across all accounts.
 * @return The total amount.
 */
int	Account::getTotalAmount(void)
{
	return _totalAmount;
}


/**
 * @brief Get the total number of deposits across all accounts.
 * @return The total number of deposits.
 */
int Account::getNbDeposits(void)
{
	return _totalNbDeposits;
}



/**
 * @brief Get the total number of withdrawals across all accounts.
 * @return The total number of withdrawals.
 */
int	Account::getNbWithdrawals(void)
{
	return _totalNbWithdrawals;
}

/**
 * @brief Display the current timestamp.
 */
void Account::_displayTimestamp()
{
	time_t now = time(0); // Get the current time as time_t object (number of seconds since the Unix epoch).
	
	tm *ltm = localtime(&now); // Convert to current time in local time.

	std::cout	<< "[" 
				<< 1900 + ltm->tm_year	// Year: tm_year is the number of years since 1900, so add 1900 to get the current year.
				<< 1 + ltm->tm_mon		// Month: tm_mon is zero-based (0 = January), so add 1 to get the correct month.
				<< ltm->tm_mday			// Day: tm_mday is the day of the month (1-31).
				<< "_"
				<< 1 + ltm->tm_hour		// Hour: tm_hour is zero-based, so add 1 to get the correct hour.
				<< 1 + ltm->tm_min 		// Minute: tm_min is zero-based, so add 1 to get the correct minute.
				<< 1 + ltm->tm_sec		// Second: tm_sec is zero-based, so add 1 to get the correct second.
				<< "] ";
}

/**
 * @brief Display information about all accounts.
 * 
 * This function displays the current timestamp followed by the total number of accounts,
 * the total amount across all accounts, the total number of deposits, and the total number
 * of withdrawals.
 */
void Account::displayAccountsInfos(void)
{
	Account::_displayTimestamp();
	std::cout	<< "accounts:" << _nbAccounts
				<< ";total:" << _totalAmount
				<< ";deposits:" << _totalNbDeposits
				<< ";withdrawals:" << _totalNbWithdrawals 
				<< std::endl;
}

/**
 * @brief Display the status of the current account.
 * 
 * This function displays the current timestamp followed by the account index, the amount
 * in the account, the number of deposits, and the number of withdrawals for this account.
 */
void Account::displayStatus(void) const
{
	_displayTimestamp();
	std::cout	<< "index:" << _accountIndex 
				<< ";amount:" << _amount
				<< ";deposits:" << _nbDeposits
				<< ";withdrawals:" << _nbWithdrawals
				<< std::endl;
}

/**
 * @brief Make a deposit to the account.
 * @param deposit The deposit amount.
 */
void Account::makeDeposit(int deposit)
{
	_totalAmount += deposit;
	_amount += deposit;
	_nbDeposits += 1;
	_totalNbDeposits += 1;
	_displayTimestamp();
	std::cout	<< "index:" << _accountIndex
				<< ";p_amount:" << _amount - deposit
				<< ";deposit:" << deposit
				<< ";amount:" << _amount
				<< ";nb_deposits:" << _nbDeposits
				<< std::endl;
}

/**
 * @brief Check the amount in the account.
 * @return The amount in the account.
 */
int Account::checkAmount(void) const
{
	return (_amount);
}

/**
 * @brief Make a withdrawal from the account.
 * @param withdrawal The withdrawal amount.
 * @return True if the withdrawal was successful, false otherwise.
 */
bool Account::makeWithdrawal(int withdrawal)
{
	if (withdrawal <= _amount)
	{
		_amount -= withdrawal;
		_totalAmount -= withdrawal;
		_nbWithdrawals += 1;
		_totalNbWithdrawals += 1;
		_displayTimestamp();
		std::cout	<< "index:" << _accountIndex 
					<< ";p_amount:" << (_amount + withdrawal)
					<< ";withdrawal:" << withdrawal
					<< ";amount:" << _amount
					<< ";nb_withdrawals:" << _nbWithdrawals
					<< std::endl;
		return true;
	}
	else
	{
		_displayTimestamp();
		std::cout	<< "index:" << _accountIndex
					<< ";p_amount:" << _amount
					<< ";withdrawal:refused"
					<< std::endl;
		return false;
	}
}

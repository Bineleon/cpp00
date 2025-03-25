/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: neleon <neleon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 16:25:11 by nelbi             #+#    #+#             */
/*   Updated: 2025/03/25 18:52:43 by neleon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::~PhoneBook(void)
{
	// std::cout << "PhoneBook destructor called" << std::endl;
	return;
}

PhoneBook::PhoneBook(void)
{
	// std::cout << "PhoneBook constructor called" << std::endl;
	return;
}

std::string	PhoneBook::formatEntry(std::string userEntry)
{
	std::string formated;
	int len = userEntry.size();
	
	formated = userEntry;
	if (len == 10)
	{
		return formated.replace(9, len, ".");
	}
	if (len > 9)
	{
		
			
	}
}

void	PhoneBook::display(void)
{
	std::cout << "\033[0;36m";
	std::cout << "╔═══════════════════════════════════════════╗" << std::endl;
	std::cout << "║                 PHONEBOOK                 ║" << std::endl;
	std::cout << "╚═══════════════════════════════════════════╝" << std::endl;
	std::cout << "║     index|first name| last name|  nickname║" << std::endl;
	std::cout << "---------------------------------------------" << std::endl;

	for (int i = 0; i <= 8; i++)
	{
		if (_contacts[i].getFirstName().empty())
			break;
		else 
			std::cout << "|" << "         " << (i + 1) << "|" << _contacts[i].getFirstName() + "|" + _contacts[i].getLastName() + "|" + _contacts[i].getNickname() + "|" << std::endl;
		
	}
	std::cout << "╚═══════════════════════════════════════════╝" << std::endl;
	std::cout << "\e[0m";

}

void	PhoneBook::search(std::string index)
{
	
	return;
}

void	intputEof(void)
{
	std::cout << "\033[1;31mInput interrupted or error. Aborting add.\e[0m" << std::endl;
	std::cin.clear();
	return;
}

void	PhoneBook::add(void)
{
	static	int contactCount;
	std::string	tmp;
	
	std::cout << "Enter contact's first name :" << std::endl;
	std::cout << "> ";
	if (!(std::cin >> tmp))
		return intputEof();
	 _contacts[contactCount].setFirstName(tmp);

	std::cout << "Enter contact's last name :" << std::endl;
	std::cout << "> ";
	if (!(std::cin >> tmp))
		return intputEof();
	_contacts[contactCount].setLastName(tmp);

	std::cout << "Enter contact's nickname :" << std::endl;
	std::cout << "> ";
	if (!(std::cin >> tmp))
		return intputEof();
	 _contacts[contactCount].setNickname(tmp);
	 
	std::cout << "Enter contact's phone number :" << std::endl;
	std::cout << "> ";
	if (!(std::cin >> tmp))
		return intputEof();
	_contacts[contactCount].setPhoneNumber(tmp);
	
	std::cout << "Enter contact's darkest secret :" << std::endl;
	std::cout << "> ";
	if (!(std::cin >> tmp))
		return intputEof();
	_contacts[contactCount].setDarkestSecret(tmp);
	
	contactCount++;
	return;
}

const Contact* PhoneBook::getContacts(void) const
{
	return _contacts;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nelbi <neleon@student.42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 16:25:11 by nelbi             #+#    #+#             */
/*   Updated: 2025/03/26 12:25:47 by nelbi            ###   ########.fr       */
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

std::string	formatEntry(std::string userEntry)
{
	std::string formated;
	int len = userEntry.size();

	formated = userEntry;
	if (len == 10)
        return formated;
	else if (len > 9)
        return formated.replace(9, len, ".");
    else
        return std::string(10 - len, ' ') + userEntry;
}

void	PhoneBook::display(void)
{
	std::cout << "\033[0;36m";
	std::cout << "╔═══════════════════════════════════════════╗" << std::endl;
	std::cout << "║                 PHONEBOOK                 ║" << std::endl;
	std::cout << "║═══════════════════════════════════════════║" << std::endl;
	std::cout << "║     index|first name| last name|  nickname║" << std::endl;
	std::cout << "║-------------------------------------------║" << std::endl;

	for (int i = 0; i <= 8; i++)
	{
		if (_contacts[i].getFirstName().empty())
			break;
		else
			std::cout << "║" << "         " << (i + 1) << "|" << formatEntry(_contacts[i].getFirstName()) + "|" + formatEntry(_contacts[i].getLastName()) + "|" + formatEntry(_contacts[i].getNickname()) + "║" << std::endl;

	}
	std::cout << "╚═══════════════════════════════════════════╝" << std::endl;
	std::cout << "\e[0m";

}

void	PhoneBook::search(int index)
{
    std::cout << "   First name      : " << _contacts[index].getFirstName() << std::endl;
    std::cout << "   Last name       : " << _contacts[index].getLastName() << std::endl;
    std::cout << "😎 Nickname        : " << _contacts[index].getNickname() << std::endl;
    std::cout << "📞 Phone number    : " << _contacts[index].getPhoneNumber() << std::endl;
    std::cout << "🕵️  Darkest secret  : " << _contacts[index].getDarkestSecret() << std::endl;
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

	if (contactCount == 7)
		contactCount == 0;
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

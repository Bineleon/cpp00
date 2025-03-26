/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: neleon <neleon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 16:25:11 by nelbi             #+#    #+#             */
/*   Updated: 2025/03/26 17:09:39 by neleon           ###   ########.fr       */
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

std::string	formatEntry(std::string userInput)
{
	std::string formated;
	int len = userInput.size();

	formated = userInput;
	if (len == 10)
        return formated;
	else if (len > 9)
        return formated.replace(9, len, ".");
    else
        return std::string(10 - len, ' ') + userInput;
}

void	PhoneBook::display(void)
{
	std::cout << "\033[0;36m";
	std::cout << "╔═══════════════════════════════════════════╗" << std::endl;
	std::cout << "║                 PHONEBOOK                 ║" << std::endl;
	std::cout << "║═══════════════════════════════════════════║" << std::endl;
	std::cout << "║     index|first name| last name|  nickname║" << std::endl;
	std::cout << "║-------------------------------------------║" << std::endl;

	for (int i = 0; i < 8; i++)
	{
		if (_contacts[i].getFirstName().empty())
			break;
		else
			std::cout << "║" << "         " << (i + 1) << "|" << formatEntry(_contacts[i].getFirstName()) + "|" + formatEntry(_contacts[i].getLastName()) + "|" + formatEntry(_contacts[i].getNickname()) + "║" << std::endl;

	}
	std::cout << "╚═══════════════════════════════════════════╝" << std::endl;
	std::cout << "\e[0m";

}

void	PhoneBook::searchContact(int index)
{
	std::cout << "\033[0;33m";
    std::cout << "🙂 First name      : " << _contacts[index].getFirstName() << std::endl;
    std::cout << "🤗 Last name       : " << _contacts[index].getLastName() << std::endl;
    std::cout << "😎 Nickname        : " << _contacts[index].getNickname() << std::endl;
    std::cout << "📞 Phone number    : " << _contacts[index].getPhoneNumber() << std::endl;
    std::cout << "😈 Darkest secret  : " << _contacts[index].getDarkestSecret() << std::endl;
	std::cout << "\033[0m";
	return;
}


void	intputEof(void)
{
	std::cout << "\033[1;31mInput interrupted or error. Aborting add.\e[0m" << std::endl;
	// std::cin.clear();
	return;
}

bool	isValidPhoneNumber(std::string userInput)
{
	int len = userInput.size();
	
	for (int i = 0; i < len; i++)
	{
		if (!isdigit(userInput[i]) && userInput[i] != ' ')
			return (false);
	}
	return true;
}

void	PhoneBook::add(void)
{
	static	int contactCount;
	bool	validNum;
	std::string	tmp;

	validNum = false;
	if (contactCount == 8)
		contactCount = 0;
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

	while (!validNum)
	{
		std::cout << "Enter contact's phone number :" << std::endl;
		std::cout << "> ";
		if (!(std::cin >> tmp))
			return intputEof();
		if (!isValidPhoneNumber(tmp))
		{
			std::cout << "\033[1;31mPlease enter a valid phone number (digits only)\e[0m" << std::endl;
			std::cin.clear();
			std::cin.ignore(10000, '\n');	
		}
		else
		{
			validNum = true;
			_contacts[contactCount].setPhoneNumber(tmp);
		}
	}

	std::cout << "Enter contact's darkest secret :" << std::endl;
	std::cout << "> ";
	if (!(std::cin >> tmp))
		return intputEof();
	_contacts[contactCount].setDarkestSecret(tmp);

	contactCount++;
	return;
}

void PhoneBook::search(void)
{
	int index;

	display();
	std::cout << "\033[0;36mEnter contact's index to display informations (1 to 8):\e[0m" << std::endl;
	while (1)
	{
		std::cout << "> ";
		if (!(std::cin >> index))
		{
			if (std::cin.eof())
			{
				std::cout << "\033[1;31mInput stream closed. Exiting search.\e[0m" << std::endl;
				break;
			}
			std::cout << "\033[1;31mInvalid input. Please enter a number between 1 and 8.\e[0m" << std::endl;
			std::cin.clear();
			std::cin.ignore(10000, '\n');
		}
		else if (index == 1 &&_contacts[index - 1].getFirstName().empty())
		{
			std::cout << "\033[1;33mThe Phonebook is empty 🤷! First add a contact :\e[0m" << std::endl;
			break;	
		}
		else if (index < 1 || index > 8)
			std::cout << "\033[1;31mIndex out of range. Please enter an index between 1 and 8.\e[0m" << std::endl;
		else if (_contacts[index - 1].getFirstName().empty())
			std::cout << "\033[1;31mContact does not exist yet, please enter a valid index.\e[0m" << std::endl;
		else
		{
			std::cout << std::endl;
			searchContact(index - 1);
			break;
		}
	}
}

const Contact* PhoneBook::getContacts(void) const
{
	return _contacts;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: neleon <neleon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 17:37:49 by nelbi             #+#    #+#             */
/*   Updated: 2025/03/25 17:31:57 by neleon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::~Contact(void)
{
	std::cout << "Contact destructor called" << std::endl;
	return;
}

Contact::Contact(void)
{
    std::cout << "Contact constructor called" << std::endl;
	return;
}

std::string Contact::getFirstName(void) const
{
	return _firstName;
}

void Contact::setFirstName(std::string firstName)
{
	_firstName = firstName;
}

std::string Contact::getLastName(void) const
{
	return _lastName;
}

void Contact::setLastName(std::string lastName)
{
	_lastName = lastName;
}

std::string Contact::getNickname(void) const
{
	return _nickname;
}

void Contact::setNickname(std::string nickName)
{
	_nickname = nickName;
}

std::string Contact::getPhoneNumber(void) const
{
	return _phoneNumber;
}

void Contact::setPhoneNumber(std::string phoneNumber)
{
	_phoneNumber = phoneNumber;
}

std::string Contact::getDarkestSecret(void) const
{
	return _darkestSecret;
}

void Contact::setDarkestSecret(std::string darkSecret)
{
	_darkestSecret = darkSecret;
}

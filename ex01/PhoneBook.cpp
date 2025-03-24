/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nelbi <neleon@student.42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 16:25:11 by nelbi             #+#    #+#             */
/*   Updated: 2025/03/24 19:23:25 by nelbi            ###   ########.fr       */
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

void	PhoneBook::display(void)
{
	std::cout << "\033[0;36m";
	std::cout << "╔═══════════════════════════════════════════╗" << std::endl;
	std::cout << "║                  PHONEBOOK                ║" << std::endl;
	std::cout << "╚═══════════════════════════════════════════╝" << std::endl;
	std::cout << "|     index|first name| last name|  nickname|" << std::endl;
	std::cout << "\e[0m";

}

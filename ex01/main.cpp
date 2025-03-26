/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: neleon <neleon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 17:46:28 by nelbi             #+#    #+#             */
/*   Updated: 2025/03/26 16:18:58 by neleon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"


int main(void)
{
    std::string userChoice;
	PhoneBook   phoneBook;

    std::cout << "\033[1;32m";
    std::cout << "╔═══════════════════════════════════════════╗" << std::endl;
	std::cout << "║          WELCOME TO THE PHONEBOOK         ║" << std::endl;
	std::cout << "╚═══════════════════════════════════════════╝" << std::endl;
    std::cout << "\e[0m";
    while (1)
    {
		if (std::cin.eof())
			break;
		std::cout << std::endl;
		std::cout << "\033[0;32m        You can ADD, SEARCH or EXIT\e[0m" << std::endl;
		if (!(std::cin >> userChoice))
		{
			std::cout << "\033[1;31mInput interrupted or error. Exiting program.\e[0m";
			break;
		}
		if (userChoice == "EXIT")
			break;
		else if (userChoice == "ADD")
			phoneBook.add();
        else if (userChoice == "SEARCH")
            phoneBook.search();
		else
			std::cout << "\033[1;31mPlease enter a valid option :\e[0m" << std::endl;
    }
    return 0;
}

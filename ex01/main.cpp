/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: neleon <neleon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 17:46:28 by nelbi             #+#    #+#             */
/*   Updated: 2025/03/25 18:17:33 by neleon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void    processChoice(std::string userChoice)
{
    PhoneBook   phoneBook;

    if (userChoice == "ADD")
    {
		phoneBook.add();
    }
    else if (userChoice == "SEARCH")
        phoneBook.display();
    else
    {
        std::cout << "\033[1;31mPlease enter a valid option :\e[0m" << std::endl;
        std::cout << "\033[0;32mADD, SEARCH or EXIT\e[0m" << std::endl;
    }

}

int main(void)
{
    std::string userChoice;
	PhoneBook   phoneBook;

    std::cout << "\033[1;32m************Welcome to : the PHONEBOOK************\e[0m" << std::endl;
    while (1)
    {
		std::cout << "\033[0;32m           You can ADD, SEARCH or EXIT\e[0m" << std::endl;
		if (!(std::cin >> userChoice))
			break;
		if (userChoice == "EXIT")
			break;
		else if (userChoice == "ADD")
			phoneBook.add();
		else if (userChoice == "SEARCH")
			phoneBook.display();
		else
		{
			std::cout << "\033[1;31mPlease enter a valid option :\e[0m" << std::endl;
			std::cout << "\033[0;32mADD, SEARCH or EXIT\e[0m" << std::endl;
		}
    }
    return 0;
}

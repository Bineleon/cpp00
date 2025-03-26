/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nelbi <neleon@student.42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 17:46:28 by nelbi             #+#    #+#             */
/*   Updated: 2025/03/26 11:48:09 by nelbi            ###   ########.fr       */
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
    int index;

    std::cout << "\033[1;32m" << std::endl;
    std::cout << "╔═══════════════════════════════════════════╗" << std::endl;
	std::cout << "║          WELCOME TO THE PHONEBOOK         ║" << std::endl;
	std::cout << "╚═══════════════════════════════════════════╝" << std::endl;
    std::cout << "\e[0m" << std::endl;
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
        {
			phoneBook.display();
            std::cout << "\033[0;36mEnter contact's index to display informations\e[0m" << std::endl;
            std::cin >> index;
            phoneBook.search(index - 1);
        }
		else
		{
			std::cout << "\033[1;31mPlease enter a valid option :\e[0m" << std::endl;
			std::cout << "\033[0;32mADD, SEARCH or EXIT\e[0m" << std::endl;
		}
    }
    return 0;
}

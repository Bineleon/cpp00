/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nelbi <neleon@student.42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 17:46:28 by nelbi             #+#    #+#             */
/*   Updated: 2025/03/26 12:31:38 by nelbi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

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
		std::cout << "\033[0;32m        You can ADD, SEARCH or EXIT\e[0m" << std::endl;
		if (!(std::cin >> userChoice))
			break;
		if (userChoice == "EXIT")
			break;
		else if (userChoice == "ADD")
			phoneBook.add();
        else if (userChoice == "SEARCH")
        {
            phoneBook.display();
            std::cout << "\033[0;36mEnter contact's index to display informations (1 to 8):\e[0m" << std::endl;
            while (1)
            {
                std::cout << "> ";
                if (!(std::cin >> index))
                {
                    if (std::cin.eof())
                    {
                        std::cout << "\n\033[1;31mInput stream closed. Exiting search.\e[0m" << std::endl;
                        std::cin.clear();
                        break;
                    }
                    std::cout << "\033[1;31mInvalid input. Please enter a number between 1 and 8.\e[0m" << std::endl;
                    std::cin.clear();
                    std::cin.ignore(10000, '\n');
                }
                else if (index < 1 || index > 8)
                    std::cout << "\033[1;31mIndex out of range. Please enter a number between 1 and 8.\e[0m" << std::endl;
                // else if (phoneBook._contacts[index].getFirstName().empty())
                //     std::cout << "\033[1;31mContact does not exist yet, please enter a valid index.\e[0m" << std::endl;
                else
                {
                    std::cout << std::endl;
                    phoneBook.search(index - 1);
                    break;
                }
            }
        }
		else
		{
			std::cout << "\033[1;31mPlease enter a valid option :\e[0m" << std::endl;
			std::cout << "\033[0;32mADD, SEARCH or EXIT\e[0m" << std::endl;
		}
    }
    return 0;
}

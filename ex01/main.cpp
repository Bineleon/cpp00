/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nelbi <neleon@student.42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 17:46:28 by nelbi             #+#    #+#             */
/*   Updated: 2025/03/24 19:09:32 by nelbi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void    processChoice(std::string userChoice)
{
    PhoneBook   phoneBook;

    if (userChoice == "ADD")
    {
        return;
        // add();
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

    std::cout << "\033[1;32m************Welcome to : the PHONEBOOK************\e[0m" << std::endl;
    std::cout << "\033[0;32m           You can ADD, SEARCH or EXIT\e[0m" << std::endl;
    std::cout << userChoice << std::endl;
    while (1)
    {
        std::cin >> userChoice;
        if (userChoice == "EXIT")
            break;
        else
            processChoice(userChoice);

    }
    return 0;
}

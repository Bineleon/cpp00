/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nelbi <neleon@student.42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 10:15:41 by nelbi             #+#    #+#             */
/*   Updated: 2025/03/20 11:18:18 by nelbi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

void     empty_megaphone(void)
{
    std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
}

std::string    megaphone(char **av)
{
    int     len;

    if (!*av)
        return (NULL);
    std::string input = *av;
    len = input.length();
    for (int i = 0; i < len; i++)
    {
        if (std::isalpha(input[i]))
            input[i] = std::toupper(input[i]);
    }
    return input;
}

int main (int ac, char **av)
{
    std::string input;

    if (ac == 1)
        empty_megaphone();
    else
    {
        for (int i = 1; i < ac; i++)
        {
            input = megaphone(&av[i]);
            std::cout << input;
        }
        std::cout << std::endl;
    }
    return (0);
}

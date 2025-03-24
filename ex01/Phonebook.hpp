/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nelbi <neleon@student.42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 11:27:12 by nelbi             #+#    #+#             */
/*   Updated: 2025/03/24 19:08:45 by nelbi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook
{
	public :
			PhoneBook(void);
			~PhoneBook(void);
			void display(void);

	private :
			Contact _contacts[8];
};

#endif

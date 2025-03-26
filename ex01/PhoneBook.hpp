/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: neleon <neleon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 11:27:12 by nelbi             #+#    #+#             */
/*   Updated: 2025/03/26 15:48:17 by neleon           ###   ########.fr       */
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
			void add(void);
			void searchContact(int index);
			void search(void);
			const Contact* getContacts(void) const;
			void setContacts(std::string userInput);
	private :
			Contact _contacts[8];
};

#endif

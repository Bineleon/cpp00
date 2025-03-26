/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nelbi <neleon@student.42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 11:27:12 by nelbi             #+#    #+#             */
/*   Updated: 2025/03/26 11:20:59 by nelbi            ###   ########.fr       */
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
			void search(std::string index);
			const Contact* getContacts(void) const;
			void setContacts(std::string userEntry);
			// std::string	formatEntry(std::string userEntry);

	private :
			Contact _contacts[8];
};

#endif

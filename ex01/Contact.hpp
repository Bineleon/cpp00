/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: neleon <neleon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 18:05:21 by nelbi             #+#    #+#             */
/*   Updated: 2025/03/25 17:25:06 by neleon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>

class Contact
{
	public :
			Contact(void);
			~Contact(void);
			std::string getFirstName(void) const;
			void setFirstName(std::string firstName);
			std::string getLastName(void) const;
			void setLastName(std::string lastName);
			std::string getNickname(void) const;
			void setNickname(std::string nickName);
			std::string getPhoneNumber(void) const;
			void setPhoneNumber(std::string nickName);
			std::string getDarkestSecret(void) const;
			void setDarkestSecret(std::string darkSecret);

	private :
		std::string _firstName;
		std::string _lastName;
		std::string _nickname;
		std::string _phoneNumber;
		std::string _darkestSecret;
};

#endif

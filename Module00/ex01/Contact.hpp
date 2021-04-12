/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmaldagu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 12:50:00 by pmaldagu          #+#    #+#             */
/*   Updated: 2021/04/12 16:39:39 by pmaldagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <iomanip>
#include <string>
#include <cctype>
#include <limits>


class Contact
{
	public:
        Contact();
        ~Contact();

		void set_values();
		void display_info();
		std::string get_first_name();
		std::string get_last_name();
		std::string get_nickname();
	
    private:
        std::string     first_name;
        std::string     last_name;
        std::string     nickname;
        std::string     login;
        std::string     postal_addr;
        std::string     email;
        std::string     phone_num;
        std::string     birthday;
        std::string     fav_meal;
        std::string     underwear_c;
        std::string     darkest_secret;
 };

#endif

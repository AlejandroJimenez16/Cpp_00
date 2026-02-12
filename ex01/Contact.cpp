/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejandj <alejandj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 14:03:18 by alejandj          #+#    #+#             */
/*   Updated: 2026/02/12 13:15:15 by alejandj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(){}

Contact::Contact(
    const std::string first_name,
	const std::string last_name,
	const std::string nickname,
	const std::string phone_number,
	const std::string darkest_secret
)
{
    this->first_name = first_name;
    this->last_name = last_name;
    this->nickname = nickname;
    this->phone_number = phone_number;
    this->darkest_secret = darkest_secret;
}

std::string Contact::get_first_name()
{
    return first_name;
}

std::string Contact::get_last_name()
{
    return last_name;
}

std::string Contact::get_nickname()
{
    return nickname;
}

std::string Contact::get_phone_number()
{
    return phone_number;
}

std::string Contact::get_darkest_secret()
{
    return darkest_secret;
}
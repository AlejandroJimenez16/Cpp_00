/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejandj <alejandj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 14:36:20 by alejandj          #+#    #+#             */
/*   Updated: 2026/02/12 20:43:31 by alejandj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
    this->index = 0;
}

static int check_letters(std::string str)
{
	int i = 0;

	while (str[i])
	{
		if (!((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')))
			return (0);
		i++;
	}
	return (1);
}

static int check_numbers(std::string str)
{
	int i = 0;

	while (str[i])
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			return (0);
		i++;
	}
	return (1);
}

static std::string ft_readLine(std::string prompt, int type)
{
	std::string	var;

    while (true)
    {
		std::cout << prompt;
		std::getline(std::cin, var);

		// Ctrl-D
		if (std::cin.eof())
			return "";

		// Trim
		var.erase(0, var.find_first_not_of(" \t\n\r\v\f"));
		var.erase(var.find_last_not_of(" \t\n\r\v\f") + 1);

		if (var.empty())
		{
			std::cout << BOLD << RED << "❌ Empty field"<< RESET << std::endl;
			continue ;
		}

		if (type == 0 && !check_letters(var))
		{
			std::cout << BOLD << RED << "❌ Only letters allowed" << RESET << std::endl;
			continue ;
		}

		if (type == 1 && !check_numbers(var))
		{
			std::cout << BOLD << RED << "❌ Only numbers allowed" << RESET << std::endl;
			continue ;
		}

		if (!var.empty())
			break ;
    }
	return (var);
}

int PhoneBook::addContact()
{
    std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string phone_number;
    std::string darkest_secret;

	first_name = ft_readLine("First name: ", 0);
	if (first_name.empty())
		return (-1);
	last_name = ft_readLine("Last name: ", 0);
	if (last_name.empty())
		return (-1);
	nickname = ft_readLine("Nickname: ", 0);
	if (nickname.empty())
		return (-1);
	phone_number = ft_readLine("Phone number: ", 1);
	if (phone_number.empty())
		return (-1);
	darkest_secret = ft_readLine("Darkest secret: ", 2);
	if (darkest_secret.empty())
		return (-1);
	
	Contact c(first_name, last_name, nickname, phone_number, darkest_secret);
	contact_list[index] = c;
	index = (index + 1) % 8;
	
	std::cout << BOLD << GREEN << "✅ Contact added successfully!" << RESET << std::endl;
	return (0);
}

static void	print_table(int index, Contact contact_list[8])
{
	std::cout << "+----------+----------+----------+----------+" << std::endl;
	std::cout << "|     Index|First_name| Last_name|  Nickname|" << std::endl;
	std::cout << "+----------+----------+----------+----------+" << std::endl;
	
	int i = 0;	
	while (i < index)
	{
		std::cout << "|" << std::setw(10) << i << "|";

		if (contact_list[i].get_first_name().length() > 10)
			std::cout << contact_list[i].get_first_name().substr(0, 9) << ".|";
		else
			std::cout << std::setw(10) << contact_list[i].get_first_name() << "|"; 
		
		if (contact_list[i].get_last_name().length() > 10)
			std::cout << contact_list[i].get_last_name().substr(0, 9) << ".|";
		else
			std::cout << std::setw(10) << contact_list[i].get_last_name() << "|"; 

		if (contact_list[i].get_nickname().length() > 10)
			std::cout << contact_list[i].get_nickname().substr(0, 9) << ".|";
		else
			std::cout << std::setw(10) << contact_list[i].get_nickname() << "|";
			
		std::cout << std::endl;
		i++; 
	}
	std::cout << "+----------+----------+----------+----------+" << std::endl;
}

int PhoneBook::searchContact()
{	
	std::string input;
	
	print_table(index, contact_list);
	
	std::cout << std::endl;
	std::cout << "Inset index: ";
	std::getline(std::cin, input);

	if (std::cin.eof())
		return (-1);

	return (0);
}
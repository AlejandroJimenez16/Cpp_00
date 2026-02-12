/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejandj <alejandj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 12:23:21 by alejandj          #+#    #+#             */
/*   Updated: 2026/02/12 20:44:11 by alejandj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "colors.hpp"

int	main(void)
{
	PhoneBook pb;
	std::string input;
	
	std::cout << BOLD << MAGENTA << "WELCOME TO PHONEBOOK!!" << RESET << std::endl;
	std::cout << std::endl;
	std::cout << BOLD << MAGENTA << "Options:" << RESET << std::endl;
	std::cout << BOLD << MAGENTA << "	- ADD -> Add a new contact" << RESET << std::endl;
	std::cout << BOLD << MAGENTA << "	- SEARCH -> Show a specific contact" << RESET << std::endl;
	std::cout << BOLD << MAGENTA << "	- EXIT -> Exit the program" << RESET << std::endl;
	std::cout << std::endl;
	
	while (true)
	{
		std::cout << BOLD << BLUE << "PhoneBook >> " << RESET;
		std::getline(std::cin, input);

		if (std::cin.eof())
		{
			std::cout << std::endl;
			return (0);
		}

		input.erase(0, input.find_first_not_of(" \t\n\r\v\f"));
		input.erase(input.find_last_not_of(" \t\n\r\v\f") + 1);

		if (input == "ADD")
		{
			if (pb.addContact() == -1)
			{
				std::cout << std::endl;
				return (0);
			}
		}
		else if (input == "SEARCH")
		{
			if (pb.searchContact())
			{
				std::cout << std::endl;
				return (0);		
			}
		}
		else if (input == "EXIT")
		{
			std::cout << "Exiting... Bye 👋" << std::endl;
			return (0);
		}
		else
			std::cout << BOLD << RED << "❌ Invalid option" << RESET << std::endl;
	}
}

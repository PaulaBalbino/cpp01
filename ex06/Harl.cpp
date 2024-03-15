/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbalbino <pbalbino@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 21:34:07 by pbalbino          #+#    #+#             */
/*   Updated: 2024/03/15 20:07:20 by pbalbino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

Harl::Harl()
{
	message[0] = "DEBUG";
	message[1] = "INFO";
	message[2] = "WARNING";
	message[3] = "ERROR";

	log_function[0] = &Harl::debug;
	log_function[1] = &Harl::info;
	log_function[2] = &Harl::warning;
	log_function[3] = &Harl::error;
}

void Harl::debug(void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level)
{
	for (int i = 0; i < 4; i++)
	{
		if (message[i] == level)
		{
			switch (i)
			{
			case (0):
				(this->*log_function[0])();
			case (1):
				(this->*log_function[1])();
			case (2):
				(this->*log_function[2])();
			case (3):
				(this->*log_function[3])();
				break;
			}
			return ;
		}
	}
	std::cout << "Incorrect option. Please choose between: 'DEBUG', 'INFO', 'WARNING' and 'ERROR' " << std::endl;
}

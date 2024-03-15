/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbalbino <pbalbino@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 21:34:05 by pbalbino          #+#    #+#             */
/*   Updated: 2024/03/15 16:36:14 by pbalbino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef HARL_HPP
#define HARL_HPP

#include <string>

class Harl
{
private:
	std::string message[4];
	void (Harl::*log_function[4])();
	void debug(void);
	void info(void);
	void warning(void);
	void error(void);


public:
	Harl();
	void complain(std::string level); // calls the four member functions above

};

#endif
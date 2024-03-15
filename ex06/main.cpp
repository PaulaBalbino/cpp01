/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbalbino <pbalbino@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 21:34:02 by pbalbino          #+#    #+#             */
/*   Updated: 2024/03/15 16:52:19 by pbalbino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

int main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "Incorrect number of parameters!" << std::endl;
		return (-1);
	}
	Harl harl_instance; // neste momento harl foi instanciated
	harl_instance.complain(av[1]);
	return (0);
}
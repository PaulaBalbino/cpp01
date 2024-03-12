/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbalbino <pbalbino@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 11:28:55 by pbalbino          #+#    #+#             */
/*   Updated: 2024/03/12 12:40:24 by pbalbino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main()
{
	std::string str = "HI THIS IS BRAIN";
	std::string *strPTR = &str;
	std::string &strREF = str;

	//Memory address:
	std::cout << "Memory address of the string variable is: " << static_cast<void*>(&str) << std::endl;
	std::cout << "Memory address held by stringPTR is: " << strPTR << std::endl;
	std::cout << "Memory address held by stringREF is: " << strREF << std::endl;
	std::cout << std::endl;

	//Value:
	std::cout << "The value of the string variable is: " << str << std::endl;
	std::cout << "The value pointed to by stringPTR is: " << *strPTR << std::endl;
	std::cout << "The value pointed to by stringREF is: " << &strREF << std::endl;

	return (0);

}

/*
	std::string str = "HI THIS IS BRAIN"; // Create a string object
	std::string *strPtr = &str; // Create a pointer to a string and assign the address of the string object to it
	std::string &strRef = str;  // Create a reference to the string object

	To print the memory address of a std::string variable is necessary to use "&" to get the address of the variable
	and then cast it to a pointer type. void* type: is suitable for printing memory addresses

	strinPTR: the memory address is already of type std::string*, which is compatible with the output operator <<

*/
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbalbino <pbalbino@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 20:34:02 by pbalbino          #+#    #+#             */
/*   Updated: 2024/03/13 21:32:24 by pbalbino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

int main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cout << "Incorrect number of parameters!" << std::endl;
		return (-1);
	}

	std::ifstream inputFile(av[1]); // check if the file opened
	if (!inputFile)
	{
		std::cerr << "Error: enable to open the file!" << std::endl;
		return (-1);
	}

	std::string line;
	std::string str1(av[2]);
	std::string str2(av[3]);
	std::ofstream outputFile(std::string(av[1]).append(".replace"));

	if (str1.empty() || str2.empty())
	{
		std::cout << "At least one input is empty" << std::endl;
		return (-1);
	}

	// will get line by line
	while (std::getline(inputFile, line))
	{
		size_t pos = line.find(str1);
		while (pos != std::string::npos) // Replace str1 with str2
		{
			line.erase(pos, str1.length());
			line.insert(pos, str2); // Find the next occurrence of str1 in the modified line
			pos = line.find(str1, pos + str2.length());
		}

		outputFile << line << std::endl; // Write the modified line to the output file
	}
	// Close the input and output files
	inputFile.close();
	outputFile.close();
	return (0);
}

/*

Para criar o arquivo:
cat >> file.txt
oi
hello
blah

 Para testar empty files, basta usar ./sed file.txt "" ""

*/
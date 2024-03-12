/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbalbino <pbalbino@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 12:50:15 by pbalbino          #+#    #+#             */
/*   Updated: 2024/03/12 20:34:06 by pbalbino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>


class Weapon
{
	private:
		std::string type;
	public:
		Weapon() {};
		Weapon(std::string initialType);
		const std::string& getType();
		void setType(std::string newType);
};

#endif
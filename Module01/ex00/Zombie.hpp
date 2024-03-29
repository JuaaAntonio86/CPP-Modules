/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-anm < juan-anm@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 23:06:42 by juan-anm          #+#    #+#             */
/*   Updated: 2024/02/19 18:39:25 by juan-anm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>

class Zombie
{
private:
	std::string 	_name;
public:
					Zombie(std::string name);
					~Zombie();
	void			announce(void);
	static Zombie*	newZombie(std::string name);
	static void		randomChump(std::string name);
};

# endif
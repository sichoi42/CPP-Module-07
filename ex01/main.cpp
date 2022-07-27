/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sichoi <sichoi@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 17:03:53 by sichoi            #+#    #+#             */
/*   Updated: 2022/07/27 22:00:52 by sichoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>

void	print(int& a)
{
	std::cout << a << std::endl;
}

void	print(std::string& a)
{
	std::cout << a << std::endl;
}

int	main(void)
{
	int a[5] = {4, 1, 2, 3, 5};
	iter(a, 5, print);
	return (0);
}


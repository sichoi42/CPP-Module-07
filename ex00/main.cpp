/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sichoi <sichoi@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 16:26:00 by sichoi            #+#    #+#             */
/*   Updated: 2022/07/27 16:35:41 by sichoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

int	main(void)
{
	{
		int	a = 10;
		int	b = 42;
		test(a, b);
	}
	{
		double a = 10.5;
		double b = 42.42;
		test(a, b);
	}
	{
		float a = 10.5f;
		float b = 42.42f;
		test(a, b);
	}
	{
		std::string	a = "sichoi1";
		std::string	b = "sichoi2";
		test(a, b);
	}
	return (0);
}


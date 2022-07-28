/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sichoi <sichoi@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 15:08:03 by sichoi            #+#    #+#             */
/*   Updated: 2022/07/28 18:26:38 by sichoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"

int	main(void)
{
	{
		Array<int> arr(5);
		for (unsigned int i = 0; i < 5; ++i)
		{
			arr[i] = i;
			std::cout << arr[i] << std::endl;
		}
		try
		{
			arr[5];
		}
		catch (const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
		test(arr);
	}
	std::cout << "==========================================" << std::endl;
	{
		Array<float> arr(5);
		for (unsigned int i = 0; i < 5; ++i)
		{
			arr[i] = 42.42f;
			std::cout << arr[i] << std::endl;
		}
		test(arr);
	}
	std::cout << "==========================================" << std::endl;
	{
		Array<double> arr(5);
		for (unsigned int i = 0; i < 5; ++i)
		{
			arr[i] = 42.42;
			std::cout << arr[i] << std::endl;
		}
		test(arr);
	}
	std::cout << "==========================================" << std::endl;
	{
		Array<std::string> arr(5);
		arr[0] = "my";
		arr[1] = "name";
		arr[2] = "is";
		arr[3] = "sichoi";
		arr[4] = "!!!";
		test(arr);
		Array<std::string> arr2 = arr;
		arr2[2] = "IS";
		test(arr2);
	}
	std::cout << "==========================================" << std::endl;
	// system("leaks array");
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sichoi <sichoi@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 16:28:48 by sichoi            #+#    #+#             */
/*   Updated: 2022/07/27 16:36:13 by sichoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

# include <iostream>

template <typename T>
void	swap(T& a, T& b)
{
	T tmp;
	tmp = a;
	a = b;
	b = tmp;
}

template <typename T>
T&	min(T& a, T& b)
{
	return (a < b ? a : b);
}

template <typename T>
T&	max(T& a, T& b)
{
	return (a > b ? a : b);
}

template <typename T>
void	test(T& a, T& b)
{
	std::cout << "=========================" << std::endl;
	std::cout << "a: " << a << " b: " << b << std::endl;
	swap(a, b);
	std::cout << "a: " << a << " b: " << b << std::endl;
	std::cout << "min: " << min(a, b) << std::endl;
	std::cout << "max: " << max(a, b) << std::endl;
	std::cout << "=========================" << std::endl;
}

#endif

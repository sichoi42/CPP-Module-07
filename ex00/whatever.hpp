/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sichoi <sichoi@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 16:28:48 by sichoi            #+#    #+#             */
/*   Updated: 2022/07/31 16:43:23 by sichoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

# include <iostream>
# include <string>

template <typename T>
void	swap(T& a, T& b)
{
	T tmp;
	tmp = a;
	a = b;
	b = tmp;
}

template <typename T>
void	swap(T *a, T *b)
{
	T tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}

template <typename T>
const T&	tmin(const T& a, const T& b)
{
	return (a < b ? a : b);
}

template <typename T>
const T&	tmax(const T& a, const T& b)
{
	return (a > b ? a : b);
}

template <typename T>
void	test(T a, T b)
{
	std::cout << "=========================" << std::endl;
	std::cout << "a: " << a << " b: " << b << std::endl;
	swap(a, b);
	std::cout << "a: " << a << " b: " << b << std::endl;
	std::cout << "min: " << tmin(a, b) << std::endl;
	std::cout << "max: " << tmax(a, b) << std::endl;
	std::cout << "max2: " << tmax(a + b, b) << std::endl;
	std::cout << "min + max: " << tmin(a, b) + tmax(a, b) << std::endl;
	std::cout << "=========================" << std::endl;
}

#endif

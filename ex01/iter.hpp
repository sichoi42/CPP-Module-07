/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sichoi <sichoi@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 16:53:05 by sichoi            #+#    #+#             */
/*   Updated: 2022/07/28 15:03:26 by sichoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template <typename T>
void	iter(T *p, unsigned int len, void (*f)(const T& a))
{
	for (unsigned int i = 0; i < len; ++i)
	{
		(*f)(p[i]);
	}
}

template <typename T>
void	print(const T& a)
{
	std::cout << a << std::endl;
}

#endif

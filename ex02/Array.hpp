/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sichoi <sichoi@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 14:16:41 by sichoi            #+#    #+#             */
/*   Updated: 2022/07/28 18:11:36 by sichoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP
# define GREEN "\033[0;32m"
# define RED "\033[0;31m"
# define RESET "\033[0m"

# include <iostream>
# include <exception>

template <typename T>
class Array
{
	private:
		T				*_elem;
		unsigned int	_size;

	public:
		Array();
		Array(unsigned int size);
		~Array();
		Array(const Array<T>& a);

		Array&			operator=(const Array<T>& a);
		T&				operator[](unsigned int i);
		const T&		operator[](unsigned int i) const;
		unsigned int	size(void) const;

		class OutofRangeException : public std::exception
		{
			public:
				const char* what(void) const throw()
				{
					return ("Error!!! Out of Range!");
				}
		};
};

#include "Array.tpp"

#endif

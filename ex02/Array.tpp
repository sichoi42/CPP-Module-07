/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sichoi <sichoi@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 15:14:53 by sichoi            #+#    #+#             */
/*   Updated: 2022/07/28 19:04:50 by sichoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_TPP
# define ARRAY_TPP

# include "Array.hpp"

template <typename T>
Array<T>::Array() : _elem(NULL), _size(1)
{
	_elem = new T[1];
	std::cout << GREEN << "Empty Array Created!" << RESET << std::endl;
}

template <typename T>
Array<T>::Array(unsigned int size) : _elem(NULL), _size(size)
{
	_elem = new T[_size];
	std::cout << GREEN << "size: " << size << " Array Created!" << RESET << std::endl;
}

template <typename T>
Array<T>::~Array()
{
	delete[] _elem;
	_elem = NULL;
	_size = 0;
	std::cout << RED << "Array Deleted!" << RESET << std::endl;
}

template <typename T>
Array<T>::Array(const Array<T>& a) : _elem(NULL), _size(a._size)
{
	_elem = new T[_size];
	for (unsigned int i = 0; i < _size; ++i)
	{
		_elem[i] = a[i];
	}
	std::cout << GREEN << "Copy Array Created!" << RESET << std::endl;
}

template <typename T>
Array<T>&	Array<T>::operator=(const Array<T>& a)
{
	if (this != &a)
	{
		_size = a._size;
		if (_elem != NULL)
		{
			delete[] _elem;
			_elem = NULL;
		}
		_elem = new T[_size];
		for (unsigned int i = 0; i < _size; ++i)
		{
			_elem[i] = a[i];
		}
		std::cout << GREEN << "Copy Assigned Array Created!" << RESET << std::endl;
	}
	return (*this);
}

template <typename T>
T&	Array<T>::operator[](unsigned int i)
{
	if (_size <= i)
		throw (OutofRangeException());
	return (_elem[i]);
}

template <typename T>
const T&	Array<T>::operator[](unsigned int i) const
{
	if (_size <= i)
		throw (OutofRangeException());
	return (_elem[i]);
}

template <typename T>
unsigned int	Array<T>::size(void) const
{
	return (_size);
}

template <typename T>
void	test(Array<T>& arr)
{
	Array<T> arr2(arr);
	for (unsigned int i = 0; i < arr2.size(); ++i)
	{
		std::cout << arr2[i] << std::endl;
	}
	Array<T> arr3;
	arr3 = arr2;
	std::cout << "==================================" << std::endl;
	for (unsigned int i = 0; i < arr2.size(); ++i)
	{
		std::cout << arr2[i] << std::endl;
	}
	std::cout << "==================================" << std::endl;
}

#endif

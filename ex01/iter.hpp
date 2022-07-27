/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sichoi <sichoi@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 16:53:05 by sichoi            #+#    #+#             */
/*   Updated: 2022/07/27 17:03:33 by sichoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

template <typename T>
void	iter(T *p, unsigned int len, void (*f)(void))
{
	for (unsigned int i = 0; i < len; ++i)
	{
		(*f)(p[i]);
	}
}

#endif

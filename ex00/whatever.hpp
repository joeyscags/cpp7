/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joeyscags <jcupp@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/24 16:39:03 by joeyscags         #+#    #+#             */
/*   Updated: 2026/02/24 16:39:04 by joeyscags        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

template <typename T>
void	swap( T &a, T &b )
{
	T	tmp = a;
	a = b;
	b = tmp;
}

template <typename T>
T	min( T a, T b )
{
	return (b < a) ? b : a;
}

template <typename T>
T	max( T a, T b )
{
	return (b > a) ? b : a;
}

#endif

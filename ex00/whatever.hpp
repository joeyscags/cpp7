/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcupp <jcupp@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/24 16:39:03 by joeyscags         #+#    #+#             */
/*   Updated: 2026/03/03 18:08:06 by jcupp            ###   ########.fr       */
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
	return (a < b) ? a : b;
}

template <typename T>
T	max( T a, T b )
{
	return (a > b) ? a : b;
}

#endif

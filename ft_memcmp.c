/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnau <mnau@student.42nice.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 10:04:32 by mnau              #+#    #+#             */
/*   Updated: 2022/11/11 11:44:01 by mnau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	DESCRIPTION :
	 The memcmp() function compares byte string s1 against byte string s2.
    	 Both strings are assumed to be n bytes long.

	PARAMETERS : 
	*s1 : the pointer in which to compare with the one in s2.
	*s2 : the pointer in which to compare with the one in s1.
	size : the number of bytes to compare between the 2 strings.

	RETURN VALUES
    	The memcmp() function returns zero if the two strings are identical, 
	otherwise returns the difference between the first two differing bytes
    	Zero-length strings are always identical.

*/

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t size)
{
	size_t				i;
	unsigned const char	*ps1;
	unsigned const char	*ps2;

	i = 0;
	ps1 = (unsigned const char *)s1;
	ps2 = (unsigned const char *)s2;
	while (i < size)
	{
		if (ps1[i] != ps2[i])
			return (ps1[i] - ps2[i]);
		i++;
	}
	return (0);
}

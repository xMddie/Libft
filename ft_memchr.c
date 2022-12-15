/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnau <mnau@student.42nice.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 10:24:06 by mnau              #+#    #+#             */
/*   Updated: 2022/11/11 10:53:04 by mnau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	DESCRIPTION :
	The memchr() function locates the first occurrence of c (converted to an 
	unsigned char) in string s.

	PARAMETERS :
	*str : the pointer in which to check for the occurence of c.
	c :  the character to check occurence of.
	size : the number of bytes to check for any occurence of c in s.

	RETURN VALUE :
	The memchr() function returns a pointer to the byte located, or NULL if no 
	such byte exists within n bytes.
*/

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t size)
{
	unsigned const char	*pstr;

	pstr = (unsigned const char *)str;
	while (size)
	{
		if (*pstr == (unsigned char)c)
			return ((unsigned char *)pstr);
		pstr++;
		size--;
	}
	return (NULL);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnau <mnau@student.42nice.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 08:39:23 by mnau              #+#    #+#             */
/*   Updated: 2022/11/15 17:30:23 by mnau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	DESCRIPTION :
	The strchr() function locates the first occurrence of c (converted to a 
	char) in the string pointed to by s. The terminating null character is 
	considered to be part of the string; therefore if c is `\0', the functions 
	locate the terminating `\0'.

	PARAMETERS :
	str : the string in which to checks for the occurence of c.
	searchedc : the character to check the occurence of.

	RETURN VALUE :
	The function strchr() returns a pointer to the located 
	character, or NULL if the character does not appear in the string.
*/

#include "libft.h"

char	*ft_strchr(const char *str, int searchedc)
{
	char	i;

	i = searchedc;
	if (i == '\0')
	{
		while (*str)
		{
			str++;
		}
		return ((char *)str);
	}
	while (*str)
	{
		if (*str == i)
			return ((char *)str);
		str++;
	}
	return (NULL);
}

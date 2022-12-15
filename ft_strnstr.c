/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnau <mnau@student.42nice.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 10:58:51 by mnau              #+#    #+#             */
/*   Updated: 2022/11/16 08:58:26 by mnau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	DESCRIPTION :
	The strnstr() function locates the first occurrence of the null-terminated 
	string needle in the string haystack, where not more than len characters are 
	searched. Characters that appear after a `\0' character are not searched.

	PARAMETERS :
	haystack : the string in which to check for the occurence of the substring.
	needle : the substring to check the occurence of.
	len : the number of bytes to check in haystack.

	RETURN VALUE :
	If needle is an empty string, haystack is returned; if needle occurs nowhere 
	in haystack, NULL is returned; otherwise a pointer to the first character of 
	the first occurrence of needle is returned.
*/

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (haystack == NULL && len == 0)
		return ((char *)haystack);
	if (needle[i] == '\0')
		return ((char *)haystack);
	while (haystack[i] && i < len)
	{
		j = 0;
		while (haystack[i + j] == needle[j] && (i + j) < len)
		{	
			j++;
			if (j == ft_strlen(needle))
				return ((char *)&haystack[i]);
		}
		i++;
	}
	return (NULL);
}

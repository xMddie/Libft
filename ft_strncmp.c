/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnau <mnau@student.42nice.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 08:23:06 by mnau              #+#    #+#             */
/*   Updated: 2022/11/11 09:49:29 by mnau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	DESCRIPTION :
 	The strncmp() function compares not more than n characters. Because 
	strncmp() is designed for comparing strings rather than binary data, 
	characters that appear after a `\0' character are not compared.

	PARAMETERS :
	s1 : the first str to compare.
	s2 : the second str to compare.
	length : the number of bytes to compare the two strings.

	RETURN VALUE :
	The strncmp() function returns an integer greater than, equal to, or less 
	than 0, according as the string s1 is greater than, equal to, or less than 
	the string s2.
*/

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t length)
{
	size_t	i;

	i = 0;
	if (length == 0)
		return (0);
	while (s1[i] && s1[i] == s2[i])
	{
		if (length == 1)
			return (0);
		i++;
		length--;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnau <mnau@student.42nice.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 08:25:11 by mnau              #+#    #+#             */
/*   Updated: 2022/11/11 15:50:15 by mnau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	DESCRIPTION :
	 The strrchr() function is identical to strchr(), except it locates the
     	last occurrence of c.

	PARAMETERS :
	str : the string in which to check the occurence of c.
	searchedc : the character to check the occurence of.

	RETURN VALUE :
	The function strrchr() returns a pointer to the located 
	character, or NULL if the character does not appear in the string.
*/

#include "libft.h"

char	*ft_strrchr(const char *str, int searchedc)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	while (i >= 0)
	{
		if (str[i] == (char)searchedc)
			return ((char *)(str + i));
		i--;
	}
	return (NULL);
}

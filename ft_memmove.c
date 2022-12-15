/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnau <mnau@student.42nice.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 09:08:22 by mnau              #+#    #+#             */
/*   Updated: 2022/11/15 08:43:29 by mnau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	DESCRIPTION
	The memmove() function copies len bytes from string src to string dst.  
	The two strings may overlap; the copy is always done in a nondestructive 
	manner.

	PARAMETERS :
	*dest : the destiny pointer in which to copy.
	*src : the source pointer to copy.
	size : the number of bytes to copy the source string.
	
	RETURN VALUE :
	The memmove() function returns the original value of dest.
*/

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t size)
{
	size_t	i;

	i = 0;
	if (dest == NULL && src == NULL)
		return (NULL);
	if ((char *)dest > (const char *)src)
	{
		while (size)
		{
			((char *)dest)[size - 1] = ((const char *)src)[size - 1];
			size--;
		}
	}
	else
	{
		while (i < size)
		{
			((char *)dest)[i] = ((const char *)src)[i];
			i++;
		}
	}
	return (dest);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnau <mnau@student.42nice.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 09:02:32 by mnau              #+#    #+#             */
/*   Updated: 2022/11/11 16:24:35 by mnau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	DESCRIPTION :
 	The memcpy() function copies n bytes from memory area s2 to memory area
    	s1.  If s1 and s2 overlap, behavior is undefined.  Applications in which
    	s1 and s2 might overlap should use memmove(3) instead.

	PARAMETERS :
	*dest : the pointer where to copy the bite pointed in the src.
	*src : the pointer on the byte to copy.
	size : the number of bytes to copy.

	RETURN VALUE :
     	The memcpy() function returns the original value of dest.

*/

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t size)
{
	size_t		i;
	char		*pdest;
	const char	*psrc;

	i = 0;
	pdest = (char *)dest;
	psrc = (const char *)src;
	if (pdest == NULL && psrc == NULL)
		return (pdest);
	while (size > 0)
	{
		pdest[i] = psrc[i];
		i++;
		size--;
	}
	return (dest);
}

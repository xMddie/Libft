/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnau <mnau@student.42nice.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 07:47:41 by mnau              #+#    #+#             */
/*   Updated: 2022/11/11 13:06:03 by mnau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	DESCRIPTION
	The memset() function writes len bytes of value c (converted to an 
	unsigned char) to the string b.

	PARAMETERS :
	*p : the destiny pointer in which to write.
	v : the character to write.
	size : the number of bytes to write.
	
	RETURN VALUE :
	The memset() function returns its first argument.
*/

#include "libft.h"

void	*ft_memset(void *p, int v, size_t size)
{
	char	*i;

	i = p;
	while (size)
	{
		*i = v;
		i++;
		size--;
	}
	return (p);
}

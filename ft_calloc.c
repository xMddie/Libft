/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnau <mnau@student.42nice.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 16:27:46 by mnau              #+#    #+#             */
/*   Updated: 2022/11/15 16:13:15 by mnau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
  	DESCRIPTION :
 	The calloc() function contiguously allocates enough space for count
    	objects that are size bytes of memory each and returns a pointer to the
    	allocated memory.  The allocated memory is filled with bytes of value
    	zero.

	PARAMETERS :
	count : count of elements to allocate.
	size : size of bytes in each element>

	RETURN VALUE :
	If successful, calloc() function returns a pointer to allocated memory.
	If there is an error, it returns a NULL pointer.
*/

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*p;

	if (count && count * size / count != size)
		return (0);
	p = malloc(count * size);
	if (p == 0)
		return (0);
	ft_bzero(p, count * size);
	return (p);
}

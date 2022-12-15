/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnau <mnau@student.42nice.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 13:33:03 by mnau              #+#    #+#             */
/*   Updated: 2022/11/11 15:46:12 by mnau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	DESCRIPTION :
	strlcat() appends string src to the end of dst.  It will append at most 
	dstsize - strlen(dst) - 1 characters.  It will then NUL-terminate, unless 
	dstsize is 0 or the original dst string was longer than dstsize (in practice 
	this should not happen as it means that either dstsize is incorrect or that 
	dst is not a proper string).

	PARAMETERS :
	dest : the destiny string in which to concatenate.
	src : the source string to concatenate.
	size : the total number of bytes in destiny.

	RETURN VALUE :
	the strlcat() function returns the length of the string it tried to create.
*/

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	if ((dest == NULL || src == NULL) && size == 0)
		return (0);
	j = ft_strlen(dest);
	if (size <= j)
		return (size + ft_strlen(src));
	while (src[i] && j + 1 < size)
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (j + ft_strlen(&src[i]));
}

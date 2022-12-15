/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnau <mnau@student.42nice.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 08:19:12 by mnau              #+#    #+#             */
/*   Updated: 2022/11/17 09:21:24 by mnau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	DESCRIPTION :
 	Applies the function ’f’ to each character of the ’s’ to create a new 
	string (with malloc) resulting from successive applications of ’f’.

	PARAMETERS :
	s : the string on which to iterate.
	*f : the function to apply to each character.

	RETURN VALUE :
	The string created from the successive applications of ’f’. 
	Returns NULL if the allocation fails.
*/

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	unsigned int	len;
	char			*str;

	if (!s)
		return (0);
	len = ft_strlen(s);
	i = 0;
	str = malloc(sizeof(char) * len + 1);
	if (!str)
		return (0);
	while (i < len)
	{
		str[i] = (*f)(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnau <mnau@student.42nice.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 07:09:19 by mnau              #+#    #+#             */
/*   Updated: 2022/11/17 16:30:57 by mnau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	DESCRIPTION
	The strlen() function computes the length of the string s.

	PARAMETERS :
	str : the string to compute length.

	RETURN VALUE :
	The strlen() function returns the number of characters that precede the 
	terminating NUL character.  
*/

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

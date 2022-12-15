/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnau <mnau@student.42nice.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 08:15:39 by mnau              #+#    #+#             */
/*   Updated: 2022/11/08 12:04:29 by mnau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	DESCRIPTION :
	The tolower() function converts an upper-case letter to the corresponding 
	lower-case letter.  The argument must be representable as an unsigned char 
	or the value of EOF.

	PARAMETERS :
	c : the character to convert.

	RETURN VALUE :
	If the argument is an upper-case letter, the tolower() function returns the 
	corresponding lower-case letter if there is one; otherwise, the argument 
	is returned unchanged.
*/

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c = c + 32;
	return (c);
}

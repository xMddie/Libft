/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnau <mnau@student.42nice.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 08:08:23 by mnau              #+#    #+#             */
/*   Updated: 2022/11/08 12:04:42 by mnau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	DESCRIPTION :
	The toupper() function converts a lower-case letter to the corresponding 
	upper-case letter. The argument must be representable as an unsigned char 
	or the value of EOF.

	PARAMETERS :
	c : the character to convert.

	RETURN VALUE :
	If the argument is a lower-case letter, the toupper() function returns the 
	corresponding upper-case letter if there is one; otherwise, the argument is 
	returned unchanged.
*/

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c = c - 32;
	return (c);
}

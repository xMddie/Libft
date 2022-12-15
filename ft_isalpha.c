/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnau <mnau@student.42nice.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 06:49:07 by mnau              #+#    #+#             */
/*   Updated: 2022/11/10 16:54:23 by mnau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	DESCRIPTION :
	The isalpha() function tests for any character for which isupper(3) or 
	islower(3) is true. The value of the argument must be representable as an 
	unsigned char or the value of EOF.
	
	PARAMETERS :
	c : the character to test.

	RETURN VALUE :
	The isalpha() function returns zero if the character tests false and 
	returns non-zero if the character tests true.
*/

#include "libft.h"

int	ft_isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

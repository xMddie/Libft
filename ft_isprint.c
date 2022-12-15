/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnau <mnau@student.42nice.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 07:07:11 by mnau              #+#    #+#             */
/*   Updated: 2022/11/08 07:43:55 by mnau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	DESCRIPTION :
	The isprint() function tests for any printing character, 
	including space (' '). The value of the argument must be representable as an 
	unsigned char or the value of EOF.

	PARAMETERS :
	c : the character to test.
	
	RETURN VALUE :
	The isprint() function returns zero if the character tests false and returns 
	non-zero if the character tests true.
*/

#include "libft.h"

int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}

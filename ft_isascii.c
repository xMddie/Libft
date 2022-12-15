/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnau <mnau@student.42nice.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 07:04:43 by mnau              #+#    #+#             */
/*   Updated: 2022/11/08 07:43:43 by mnau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	DESCRIPTION :
	The isascii() function tests for an ASCII character, which is any character 
	between 0 and octal 0177 inclusive.

	PARAMETERS :
	c : the character to test.

	RETURN VALUE :
	The isascii() function returns zero if the character tests false and returns 
	non-zero if the character tests true.
*/

#include "libft.h"

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}

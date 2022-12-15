/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnau <mnau@student.42nice.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 06:58:21 by mnau              #+#    #+#             */
/*   Updated: 2022/11/08 09:23:42 by mnau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	DESCRIPTION :
	The isalnum() function tests for any character for which isalpha(3) or 
	isdigit(3) is true. The value of the argument must be representable as an 
	unsigned char or the value of EOF.

	PARAMETERS :
	c : the character to test.

	RETURN VALUE :
	The isalnum() function returns zero if the character tests false and
    	returns non-zero if the character tests true.
*/

#include "libft.h"

int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}

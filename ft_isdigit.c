/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnau <mnau@student.42nice.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 06:56:24 by mnau              #+#    #+#             */
/*   Updated: 2022/11/08 07:43:52 by mnau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	DESCRIPTION :
	The isdigit() function tests for a decimal digit character.

	PARAMETERS
	c : the character to test.

	RETURN VALUE :
	The isdigit() function returns zero if the character tests false and 
	returns non-zero if the character tests true.
*/

#include "libft.h"

int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

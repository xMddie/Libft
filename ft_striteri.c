/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnau <mnau@student.42nice.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 08:53:35 by mnau              #+#    #+#             */
/*   Updated: 2022/11/17 10:17:52 by mnau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	DESCRIPTION :
	Applies the function f to each character of the string passed as argument, 
	and passing its index as first argument. Each character is passed by
	address to f to be modified if necessary.

	PARAMETERS :
	s : the string on which to iterate.
	*f : the function to apply to each character.
*/

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	if (!s)
		return ;
	i = 0;
	while (s[i])
	{
		(*f)(i, &s[i]);
		i++;
	}		
	s[i] = 0;
}

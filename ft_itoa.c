/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnau <mnau@student.42nice.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 10:35:02 by mnau              #+#    #+#             */
/*   Updated: 2022/11/15 18:15:36 by mnau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	DESCRIPTION :
	Allocates (with malloc) and returns a string representing the integer 
	received as an argument. Negative numbers must be handled.

	PARAMETERS :
	n : the integer to convert.
	
	RETURN VALUE :
	The string representing the integer. NULL if the allocation fails.
*/

#include "libft.h"

static int	ft_checkdigit(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len++;
	while (n != 0)
	{	
		len++;
		n = n / 10;
	}
	return (len);
}

static int	ft_absolute(int n)
{
	if (n < 0)
		return (-n);
	return (n);
}

char	*ft_itoa(int n)
{
	int		len;
	char	*str;

	len = ft_checkdigit(n);
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (n < 0)
		str[0] = '-';
	else if (n == 0)
		str[0] = '0';
	while (n != 0)
	{
		str[--len] = ft_absolute(n % 10) + '0';
		n = n / 10;
	}
	return (str);
}

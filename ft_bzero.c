/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnau <mnau@student.42nice.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 08:58:27 by mnau              #+#    #+#             */
/*   Updated: 2022/11/10 16:53:44 by mnau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	DESCRIPTION :
	The bzero() function writes n zeroed bytes to the string s.  If n is
    	zero, bzero() does nothing.

	PARAMETERS :
 	*s : function erases the data from this pointer>
	n : number of bytes to erase 
*/

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, '\0', n);
}

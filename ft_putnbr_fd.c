/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnau <mnau@student.42nice.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 08:03:10 by mnau              #+#    #+#             */
/*   Updated: 2022/11/14 08:07:18 by mnau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	DESCRIPTION :
	Outputs the integer ānā to the given file descriptor.

	PARAMETERS :
	n : the integer to output.
	fd : the file descriptor on which to write.
*/

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
		write(fd, "-2147483648", 11);
	else
	{
		if (n < 0)
		{
			n *= -1;
			write (fd, "-", 1);
		}
		if (n > 9)
		{
			ft_putnbr_fd((n / 10), fd);
			ft_putnbr_fd((n % 10), fd);
		}
		else
			ft_putchar_fd(('0' + n), fd);
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pchambon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 16:24:23 by pchambon          #+#    #+#             */
/*   Updated: 2018/12/14 14:48:55 by pchambon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"
#include <string.h>

void	ft_putnbr(int n)
{
	int size;
	int nbr;

	size = 1;
	if ((n < 0) && (n != -2147483648))
	{
		ft_putchar('-');
		n = -n;
	}
	if (n == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		n = 147483648;
	}
	nbr = n;
	while ((nbr /= 10) > 0)
		size *= 10;
	nbr = n;
	while (size >= 1)
	{
		ft_putchar((char)((nbr / size) + 48));
		nbr %= size;
		size /= 10;
	}
}

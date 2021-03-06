/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pchambon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/09 16:31:06 by pchambon          #+#    #+#             */
/*   Updated: 2018/12/14 14:41:34 by pchambon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "./includes/libft.h"

int		ft_atoi(const char *str)
{
	long negative;
	long nbr;

	negative = 1;
	while (*str == ' ' || *str == '\f' || *str == '\t' || *str == '\n'
			|| *str == '\v' || *str == '\r')
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			negative = -1;
		str++;
	}
	nbr = 0;
	while (ft_isdigit((int)*str))
	{
		nbr = nbr * 10 + *str - 48;
		str++;
	}
	return (negative * nbr);
}

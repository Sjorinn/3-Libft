/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pchambon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/15 10:27:28 by pchambon          #+#    #+#             */
/*   Updated: 2018/12/14 14:50:31 by pchambon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "./includes/libft.h"

void	ft_strclr(char *s)
{
	size_t i;

	i = 0;
	if (!s)
		return ;
	while (s[i])
		i++;
	ft_memset(((void *)s), 0, i);
}

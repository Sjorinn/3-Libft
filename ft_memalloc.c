/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pchambon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/15 10:10:13 by pchambon          #+#    #+#             */
/*   Updated: 2018/12/14 14:46:11 by pchambon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include "./includes/libft.h"

void	*ft_memalloc(size_t size)
{
	void	*dest;

	if (!(dest = (void *)malloc(size * sizeof(size_t))))
		return (NULL);
	ft_memset(dest, 0, size);
	return (dest);
}

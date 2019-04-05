/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pchambon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/15 10:19:52 by pchambon          #+#    #+#             */
/*   Updated: 2018/12/14 14:51:42 by pchambon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include "./includes/libft.h"

char	*ft_strnew(size_t size)
{
	char	*new;
	size_t	i;

	i = size;
	if (!(new = (char *)malloc((size + 1) * sizeof(char))))
		return (NULL);
	ft_memset(((void *)new), 0, (size + 1));
	return (new);
}

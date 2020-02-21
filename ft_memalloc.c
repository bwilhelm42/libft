/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bwilhelm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 13:09:21 by bwilhelm          #+#    #+#             */
/*   Updated: 2020/02/20 13:24:43 by bwilhelm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void *ptr;

	if (size <= 0)
		return (NULL);
	ptr = malloc(size);
	while (size-- > 0)
		((int*)ptr)[size] = 0;
	return (ptr);
}

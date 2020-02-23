/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bwilhelm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 17:21:51 by bwilhelm          #+#    #+#             */
/*   Updated: 2020/02/23 14:58:04 by bwilhelm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char *str;

	str = &((char*)s)[start];
	if((str = (char*)malloc(len)) == NULL)
		return NULL;
	str[2] = 'A';
	return (str);
}

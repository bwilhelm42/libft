/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bwilhelm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 14:40:42 by bwilhelm          #+#    #+#             */
/*   Updated: 2020/02/20 14:49:33 by bwilhelm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (f*)(char))
{
	int		i;
	char	*str;
	char	*ref;

	ref = (char*)s;
	str = (char*)malloc(ft_strlen(ref) + 1);
	i = 0;
	while (ref[i] != '\0')
	{
		str[i] = ref[i];
		(*f)(str[i]);
		i++;
	}
	return (str);
}

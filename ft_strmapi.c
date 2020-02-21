/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bwilhelm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 16:58:05 by bwilhelm          #+#    #+#             */
/*   Updated: 2020/02/20 17:00:50 by bwilhelm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*str;
	char	*ref;

	ref = (char*)s;
	str = (char*)malloc(ft_strlen(ref) + 1);
	i = 0;
	while (ref[i] != '\0')
	{
		str[i] = (*f)(i, ref[i]);
		i++;
	}
	return (str);
}

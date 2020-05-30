/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bwilhelm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 19:34:09 by bwilhelm          #+#    #+#             */
/*   Updated: 2020/02/24 20:56:35 by bwilhelm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	in_set(char s, char *set)
{
	while (*set)
	{
		if (*set == s)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s, char const *set)
{
	char	*new;
	int		i;

	while (*s && (in_set(*s, (char*)set)))
		s++;
	if (!(*s))
		return ("\0");
	while (s[i])
		i++;
	while (in_set(s[--i], (char*)set));
	i++;
	new = (char*)malloc(i + 1);
	ft_strncpy(new, s, i);
	new[i] = '\0';
	return (new);
}

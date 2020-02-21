/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bwilhelm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 22:04:47 by bwilhelm          #+#    #+#             */
/*   Updated: 2020/02/19 22:15:55 by bwilhelm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*big;
	char	*small;
	int		i;

	big = (char*)haystack;
	small = (char*)needle;
	if (*needle == '\0')
		return (big);
	while (*big != '\0' && len-- > 0)
	{
		i = 0;
		while (big[i] == needle[i] && len - i > 0)
		{
			i++;
			if (needle[i] == '\0')
				return (big);
		}
		big++;
	}
	return (NULL);
}

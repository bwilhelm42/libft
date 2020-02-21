/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bwilhelm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 22:45:37 by bwilhelm          #+#    #+#             */
/*   Updated: 2020/02/19 23:26:45 by bwilhelm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int sign;
	int ret;

	sign = 1;
	ret = 0;
	while (*str == ' ' || *str == '\t' || *str == '\r' || *str == '\n'
			|| *str == '\v' || *str == '\f')
		str++;
	if (*str == '-')
		sign = -1;
	if (*str == '-' || *str == '+')
		str++;
	while ((*str >= '0' && *str <= '9'))
	{
		ret = (ret * 10) + (*str - '0');
		str++;
	}
	return (ret * sign);
}

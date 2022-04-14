/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akadi <akadi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 19:15:27 by akadi             #+#    #+#             */
/*   Updated: 2022/04/14 02:33:28 by akadi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	ft_atoi(const char *str)
{
	int		sign;
	int		result;
	int		i;
	char	*src;

	i = 0;
	sign = 1;
	result = 0;
	src = (char *)str;
	while ((src[i] >= 9 && src[i] <= 13) || src[i] == ' ')
		i++;
	if (src[i] == '+' || src[i] == '-')
	{
		if (src[i] == '-')
			sign = sign * -1;
		i++;
	}
	while ((src[i] >= '0' && src[i] <= '9') && src[i] != '\0')
	{
		result = result * 10 + src[i] - '0';
		i++;
	}
	return (result * sign);
}

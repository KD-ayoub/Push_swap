/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split_int.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akadi <akadi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 23:34:28 by akadi             #+#    #+#             */
/*   Updated: 2022/04/15 02:15:04 by akadi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

char **split_int(char **av)
{
	char *str;
	char **split;
	int i;

	i = 1;
	str = ft_strdup("");
	while (av[i])
	{
		str = ft_strjoin(ft_strjoin(str, av[i]), " ");
		i++;
	}
	split = ft_split(str,' ');
	free(str);
	return (split);
}
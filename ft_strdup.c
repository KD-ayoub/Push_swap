/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akadi <akadi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 02:13:29 by akadi             #+#    #+#             */
/*   Updated: 2022/04/18 23:21:48 by akadi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

char	*ft_strdup(const char *s)
{
	char	*ss;
	size_t	len;
	char	*dp;
	int		i;

	ss = (char *)s;
	len = ft_strlen(ss);
	i = 0;
	dp = (char *)malloc((len + 1) * sizeof(char));
	if (dp == NULL)
		return (NULL);
	while (ss[i] != '\0')
	{
		dp[i] = ss[i];
		i++;
	}
	dp[i] = '\0';
	return (dp);
}

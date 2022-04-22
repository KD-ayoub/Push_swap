/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akadi <akadi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 16:55:49 by akadi             #+#    #+#             */
/*   Updated: 2022/04/18 23:23:18 by akadi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

char	*ft_strjoin(char *buffers, char *buff)
{
	int		i;
	int		j;
	char	*new;

	if (!buffers)
	{
		buffers = (char *)malloc(sizeof(char));
		buffers[0] = '\0';
	}
	new = (char *)malloc(sizeof(char) * (ft_strlen(buffers)
				+ ft_strlen(buff) + 2));
	if (new == 0)
		return (0);
	i = -1;
	j = 0;
	while (buffers[++i])
		new[i] = buffers[i];
	while (buff[j])
		new[i++] = buff[j++];
	new[ft_strlen(buffers) + ft_strlen(buff)] = '\0';
	free (buffers);
	return (new);
}
// char	*ft_strjoin(char const *s1, char const *s2)
// {
// 	char	*p;
// 	int		i;
// 	int		j;

// 	i = 0;
// 	j = 0;
// 	if (!s1)
// 		s1 = ft_strdup("");
// 	p = malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
// 	if (p == NULL)
// 		return (NULL);
// 	while (s1[i] != '\0')
// 	{
// 		p[i] = s1[i];
// 		i++;
// 	}
// 	while (s2[j] != '\0')
// 	{
// 		p[i] = s2[j];
// 		i++;
// 		j++;
// 	}
// 	p[i++] = ' ';
// 	p[i] = '\0';
// 	return (p);
// }
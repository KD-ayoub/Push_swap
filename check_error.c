/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_error.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akadi <akadi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 15:45:40 by akadi             #+#    #+#             */
/*   Updated: 2022/04/03 18:02:55 by akadi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
int ft_isnbr(char *av)
{
    int i;
    int len;

    i = 0;
    len = ft_strlen(av);
    if (av[i] == '-' || av[i] == '+')
    {
        i = 1;
        if (len == 1)
            return (0);
    }
    while (i < len)
    {
        if (!ft_isdigit(av[i]))
            return (0);
        i++;
    }
    return (1);
    
}
int	ft_isint(char *number, char *max, char *min)
{
	char	*num;

	if (ft_strlen(number) >= 10)
	{
		if (number[0] == '-' && ft_strlen(number) >= 11)
		{
			num = ft_itoa(ft_atoi(number));
			if (ft_strncmp(num, number, ft_strlen(min)))
				return (1);
		}
		if (number[0] == '+' && ft_strlen(number) >= 11)
		{
			num = ft_itoa(ft_atoi(number));
			if (ft_strncmp(num, &number[1], 11))
				return (1);
		}
		else if (ft_strlen(number) >= 10)
		{
			num = ft_itoa(ft_atoi(number));
			if (ft_strncmp(num, number, ft_strlen(max)))
				return (1);
		}
		free(num);
	}
	return (0);
}

int duplicate(int ac, char ***av)
{
    int i;
    int j;
    int k;
    int len;
    char **arr;

    i = 0; 
    len = 0;
    while (i < ac -1)
    {
        j = 0;
        while(av[i][j])
        {
            len++;
            j++;
        }
        i++;
    }
    arr = malloc(sizeof(char *) * len);
    k = 0;
    i = 0;
    j = 0;
    while (av[i])
    {
        j = 0;
        while (av[i][j])
        {
            arr[k++] = av[i][j];
            j++;
        }
        i++;
    }
    i = 0;
    while (i < len)
    {
        if ( !ft_isnbr(arr[i]) || ft_isint(arr[i],"2147483647","-2147483648"))
            return (0);
        i++;
    }
    i = 0;
    while (arr[i])
    {
        j = i + 1;
        while (arr[j] && j < len)
        {
            if (ft_atoi(arr[i]) == ft_atoi(arr[j]))
            {
                free(arr);
                return (0);
            }
            j++;
        }
        i++;
    }
    free(arr);
    return (1);
}
int check_error(int ac, char **av)
{
    int len;
    int i;
    char ***numbers;
    numbers = malloc(sizeof(char **) * ac - 1);

    i = 1;
    int j = 0;
    while(i <= ac)
    {
        numbers[j++] = ft_split(av[i],' ');
        i++;
    }
    if (ac < 2 || !duplicate(ac, numbers))
    { 
        i = 0;
        while(numbers[i])
        {
            j = 0;
            while(numbers[i][j])
            {
                free(numbers[i][j++]);
            }
            free(numbers[i]);
            i++;
        }
        free(numbers);
        return (0);
    }
    
  
    i = 0;
    while(numbers[i])
    {
        j = 0;
        while(numbers[i][j])
        {
            free(numbers[i][j++]);
        }
        free(numbers[i]);
        i++;
    }
    free(numbers);
    return (1);
}

int main(int ac, char **av)
{
    if (!check_error(ac, av) || ac == 1)
    {
        write(1, "Error\n",6);
    }
    return (0);
}
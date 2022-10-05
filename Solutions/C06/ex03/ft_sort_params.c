/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmesrar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 19:48:29 by hmesrar           #+#    #+#             */
/*   Updated: 2022/08/04 12:57:25 by hmesrar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	put_str(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
	write(1, "\n", 1);
}

int	str_cmp(char *s1, char *s2)
{
	while ((*s1 != '\0' || *s2 != '\0') && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

char	**tab_sort(char **strs, int size)
{
	int		i;
	int		j;
	int		min;
	char	*swap;

	i = 1;
	while (i < size)
	{
		min = i;
		j = i + 1;
		while (j < size)
		{
			if (str_cmp(strs[min], strs[j]) > 0)
			{
				swap = strs[min];
				strs[min] = strs[j];
				strs[j] = swap;
			}
			j++;
		}
		i++;
	}
	return (strs);
}

int	main(int argc, char **argv)
{
	int	i;

	i = 1;
	while (i < argc)
	{
		put_str(tab_sort(argv, argc)[i]);
		i++;
	}
	return (0);
}

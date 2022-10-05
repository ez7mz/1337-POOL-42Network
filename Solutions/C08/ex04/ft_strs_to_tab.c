/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmesrar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 16:39:34 by hmesrar           #+#    #+#             */
/*   Updated: 2022/08/07 18:23:59 by hmesrar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	str_len(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(char	*str)
{
	int		i;
	int		len;
	char	*dup;

	i = 0;
	len = str_len(str);
	dup = (char *)malloc(len + 1);
	if (!dup)
		return (0);
	while (str[i] != '\0')
	{
		dup[i] = str[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int					i;
	struct s_stock_str	*res;

	i = 0;
	res = malloc(sizeof(struct s_stock_str) * (ac + 1));
	if (!res)
		return (NULL);
	while (i < ac)
	{
		res[i].size = str_len(av[i]);
		res[i].str = av[i];
		res[i].copy = ft_strdup(av[i]);
		i++;
	}
	res[i].str = 0;
	res[i].copy = 0;
	res[i].size = 0;
	return (res);
}

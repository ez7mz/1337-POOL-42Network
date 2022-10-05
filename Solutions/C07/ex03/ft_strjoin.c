/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmesrar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 19:36:46 by hmesrar           #+#    #+#             */
/*   Updated: 2022/08/06 16:17:03 by hmesrar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	str_len(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	count_char(int size, char **strs, char *sep)
{
	int	res;
	int	i;

	res = 0;
	i = 0;
	while (i < size)
	{
		res += str_len(strs[i]);
		i++;
	}
	res += ((size - 1) * str_len(sep));
	return (res);
}

void	concat(char *s1, char *s2)
{
	int	i;
	int	len;

	i = 0;
	len = str_len(s1);
	while (s2[i])
	{
		s1[len] = s2[i];
		len++;
		i++;
	}
	s1[len] = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;
	int		i;
	int		len;

	i = 0;
	len = count_char(size, strs, sep);
	str = (char *) malloc(len + 1);
	str[0] = 0;
	if (size <= 0)
		return (str);
	while (i < size)
	{
		concat(str, strs[i]);
		if (i != size - 1)
			concat(str, sep);
		i++;
	}
	str[len] = '\0';
	return (str);
}

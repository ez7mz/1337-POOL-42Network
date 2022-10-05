/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmesrar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 14:45:19 by hmesrar           #+#    #+#             */
/*   Updated: 2022/07/30 22:22:09 by hmesrar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	str_len(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	is_equal(char *s1, char *s2, int start, int end)
{
	int	i;
	int	j;

	i = start;
	j = 0;
	while ((s1[i] != '\0' || s2[j] != '\0') && i < end)
	{
		if (s1[i] != s2[j])
			return (0);
		i++;
		j++;
	}
	return (1);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	len;

	i = 0;
	len = str_len(to_find);
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		if (is_equal(str, to_find, i, len + i))
			return (&str[i]);
		i++;
	}
	return (0);
}

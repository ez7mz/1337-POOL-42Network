/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmesrar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 12:09:21 by hmesrar           #+#    #+#             */
/*   Updated: 2022/07/26 23:17:33 by hmesrar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_alpha(char c)
{
	if (c < 'A' || (c > 'Z' && c < 'a') || c > 'z')
		return (0);
	return (1);
}

int	is_number(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z')
			&& is_alpha(str[i - 1]) == 0 && is_number(str[i - 1]) == 0)
			str[i] -= 32;
		else if ((str[i] >= 'A' && str[i] <= 'Z')
			&& (is_alpha(str[i - 1]) == 1 || is_number(str[i - 1]) == 1))
			str[i] += 32;
		i++;
	}
	return (str);
}

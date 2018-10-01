/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arsciand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/03 13:38:28 by arsciand          #+#    #+#             */
/*   Updated: 2018/09/14 15:01:39 by arsciand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_alphab(char c)
{
	int i;

	i = 0;
	if (!((c >= '0' && c <= '9')
				|| (c >= 'a' && c <= 'z')
				|| (c >= 'A' && c <= 'Z')))
		return (0);
	return (1);
}

char	*ft_strcapitalize(char *str)
{
	int i;
	int is_w;

	i = 0;
	is_w = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z' && is_w == 1)
			str[i] += 32;
		else if (str[i] >= 'a' && str[i] <= 'z' && is_w == 0)
			str[i] -= 32;
		if (!(ft_str_is_alphab(str[i])))
			is_w = 0;
		else
			is_w = 1;
		i++;
	}
	return (str);
}

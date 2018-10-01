/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arsciand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/03 16:26:52 by arsciand          #+#    #+#             */
/*   Updated: 2018/09/12 13:58:16 by arsciand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int j;

	j = 0;
	i = ft_strlen(dest);
	while (j <= ft_strlen(src))
	{
		dest[i + j] = src[j];
		j++;
	}
	return (dest);
}

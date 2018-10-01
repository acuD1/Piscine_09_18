/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arsciand <arsciand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 08:33:27 by arsciand          #+#    #+#             */
/*   Updated: 2018/10/02 00:20:25 by arsciand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int				ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int j;
	unsigned int dest_l;

	i = 0;
	dest_l = ft_strlen(dest);
	while (dest[i])
		i++;
	if (dest_l >= size)
		return (size + ft_strlen(src));
	j = 0;
	while ((i + j + 1) < size)
	{
		dest[i + j] = src[j];
		j = j + 1;
	}
	dest[i + j] = '\0';
	return (dest_l + ft_strlen(src));
}

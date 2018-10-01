/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arsciand <arsciand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 08:39:44 by arsciand          #+#    #+#             */
/*   Updated: 2018/10/02 00:20:51 by arsciand         ###   ########.fr       */
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

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int i;
	int len;

	len = size;
	i = -1;
	if (size == 0)
		return (ft_strlen(src));
	while (++i < (len - 1) && src[i])
		dest[i] = src[i];
	dest[i] = '\0';
	return (ft_strlen(src));
}

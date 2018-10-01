/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rot42.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arsciand <arsciand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/07 09:46:30 by arsciand          #+#    #+#             */
/*   Updated: 2018/10/02 00:24:00 by arsciand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_rot42(char *str)
{
	int i;

	i = 0;
	while (str[i] && str)
	{
		if (str[i] >= 'K' && str[i] <= 'Z')
			str[i] = str[i] - 10;
		else if (str[i] >= 'A' && str[i] < 'K')
			str[i] = str[i] + 16;
		else if (str[i] >= 'k' && str[i] <= 'z')
			str[i] = str[i] - 10;
		else if (str[i] >= 'a' && str[i] < 'k')
			str[i] = str[i] + 16;
		i++;
	}
	return (str);
}

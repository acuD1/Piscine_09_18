/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arsciand <arsciand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/10 18:03:43 by arsciand          #+#    #+#             */
/*   Updated: 2019/04/24 15:12:38 by arsciand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		av_size(int argc, char **argv)
{
	int i;
	int j;
	int size;

	i = 0;
	size = 0;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j])
			j++;
		size += j + 1;
		i++;
	}
	return (size);
}

char	*ft_concat_params(int argc, char **argv)
{
	char	*str;
	int		i;
	int		j;
	int		y;
	int		size;

	i = 0;
	y = 0;
	size = av_size(argc, argv);
	if (!(str = malloc(sizeof(char) * (size + 1))))
		return (0);
	while (++i && argv[i])
	{
		j = 0;
		while (argv[i][j])
		{
			str[y++] = argv[i][j];
			j++;
		}
		if (i < argc - 1)
			str[y++] = '\n';
	}
	str[y] = '\0';
	return (str);
}

int		main(int ac, char **av)
{
	(void)ac;
	printf("%s\n", ft_concat_params(ac, av));
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arsciand <arsciand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/15 17:05:18 by arsciand          #+#    #+#             */
/*   Updated: 2018/10/02 00:36:02 by arsciand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

///////////////// READER
char	*readcolle(void)
{
	char BUFF[2];
	char *str;

	str = NULL;
	BUFF[1] = 0;
	while (read(0, BUFF, 1))
	{
		if (str == NULL)
			str = ft_strdup(BUFF);
		else
			ft_strcat(str, BUFF);
	}
	return (str);
}
////////////////// PARSING

int		*parsing(char *str)
{
	char *tabch;
	int	*tabflag;
	int i;
	int j;

	tabch = ft_strdup("o-| *\\ABC");
	j = 0;
	i = 0;
	tabflag = NULL;
	while (i < 11)
		tabflag[i++] = 0;
	while (str[j])
	{
		i = 0;
		while (tabch[i])
		{
			if (str[j] == tabch[i])
				tabflag[i] = 1;
			i++;
		}
		j++;
	}
	return (tabflag);
}

int		main(void)
{
	char *str;
	int *tab;

	str = readcolle();
//	tab = parsing(str);
	printf("%s\n", str);
/*	printf("tabflag[%d]\n", tab[0]);
	printf("tabflag[%d]\n", tab[1]);
	printf("tabflag[%d]\n", tab[2]);
	printf("tabflag[%d]\n", tab[3]);
	printf("tabflag[%d]\n", tab[4]);
	printf("tabflag[%d]\n", tab[5]);
	printf("tabflag[%d]\n", tab[6]);
	printf("tabflag[%d]\n", tab[7]);
	printf("tabflag[%d]\n", tab[8]);
	printf("tabflag[%d]\n", tab[9]);
	printf("tabflag[%d]\n", tab[10]);*/
	return (0);
}



/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arsciand <arsciand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/15 13:20:55 by arsciand          #+#    #+#             */
/*   Updated: 2018/10/02 00:34:53 by arsciand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "eval_expr.h"

int		check_add_sous(char *stk, int id)
{
	if (stk[id] == '\0' || stk[id] == '+' || stk[id] == '-')
		return (1);
	if (stk[id] == '*' || stk[id] == '%' || stk[id] == '/')
		return (1);
	if (stk[id] == '(')
		return (0);
	return (check_add_sous(stk, id - 1));
}

int		check_mult_div_mod(char *stk, int id)
{
	if (stk[id] == '\0' || stk[id] == '+' || stk[id] == '-')
		return (0);
	if (stk[id] == '*' || stk[id] == '%' || stk[id] == '/')
		return (1);
	if (stk[id] == '(')
		return (0);
	return (check_mult_div_mod(stk, id - 1));
}

t_node	*mult_d(t_node *list, char **str, char stk[4096], int *id)
{
	if ((**str == '*' || **str == '/' || **str == '%') && *id > 0)
	{
		if (check_mult_div_mod(stk, *id))
		{
			while (*id >= 1 && stk[*id] != '(')
			{
				list = add_node(list, 0, 0, stk[*id]);
				stk[*id] = 0;
				*id -= 1;
			}
		}
	}
	*id += 1;
	stk[*id] = **str;
	str[0] = str[0] + 1;
	return (list);
}

t_node	*add_s(t_node *list, char **str, char stk[4096], int *id)
{
	if ((**str == '+' || **str == '-') && *id > 0)
	{
		if (check_add_sous(stk, *id))
		{
			while (*id >= 1 && stk[*id] != '(')
			{
				list = add_node(list, 0, 0, stk[*id]);
				stk[*id] = 0;
				*id -= 1;
			}
		}
	}
	*id += 1;
	stk[*id] = **str;
	str[0] = str[0] + 1;
	return (list);
}

t_node	*parsupp(t_node *list, char **str, char stk[4096], int *id)
{
	if (**str == ')')
	{
		while (stk[*id] != '(')
		{
			list = add_node(list, 0, 0, stk[*id]);
			stk[*id] = 0;
			*id -= 1;
		}
		stk[*id] = 0;
		*id -= 1;
		str[0] = str[0] + 1;
		return (list);
	}
	*id += 1;
	stk[*id] = **str;
	str[0] = str[0] + 1;
	return (list);
}

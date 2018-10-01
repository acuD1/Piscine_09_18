/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_expr.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arsciand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/15 13:07:15 by arsciand          #+#    #+#             */
/*   Updated: 2018/09/16 21:33:43 by arsciand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EVAL_EXPR_H
# define EVAL_EXPR_H
# include <stdlib.h>
# include <unistd.h>

typedef	struct		s_stack
{
	int				nbr;
	struct s_stack	*next;
	struct s_stack	*prev;
}					t_stack;

typedef	struct		s_node
{
	int				flag;
	int				nbr;
	char			fct;
	struct s_node	*next;
}					t_node;

int					ft_atoi(char **upstr);
int					read_rpn(t_node *rpn);
void				ft_putchar(char c);
void				ft_putnbr(int nb);
void				destroy_list(t_node *list);
t_node				*add_node(t_node *list, int flag, int nbr, char fct);
t_node				*mult_d(t_node *list, char **str, char stk[4096], int *id);
t_node				*add_s(t_node *list, char **str, char stk[4096], int *id);
t_node				*parsupp(t_node *list, char **str, char stk[4096], int *id);
#endif

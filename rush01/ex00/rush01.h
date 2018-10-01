/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arsciand <arsciand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/09 20:23:33 by arsciand          #+#    #+#             */
/*   Updated: 2018/10/02 00:35:47 by arsciand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH01_H
# define RUSH01_H

# include <unistd.h>
# include <stdlib.h>

void	ft_putchar(char c);
void	ft_putstr(char *str);
int		ft_strlen(char *str);
int		ft_multic(int **sudoku, int line, int col, int put_nu);
int		ft_avc(char *av);
void	ft_do_sudoku(int **sudoku, int line, int col);
void	ft_p_sudoku(int **sudoku);
int		ft_rush01(char **av);

#endif

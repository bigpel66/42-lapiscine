/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main08.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jseo <jseo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 12:00:44 by jseo              #+#    #+#             */
/*   Updated: 2020/11/04 03:52:13 by jseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// EX00
//#include "ft.h"
//int	main(void)
//{
	//return (0);
//}

// EX01
//#include "ft_boolean.h"
//void	ft_putstr(char *str)
//{
	//while (*str)
		//write(1, str++, 1);
//}
//t_bool	ft_is_even(int nbr)
//{
	//return ((EVEN(nbr)) ? TRUE : FALSE);
//}
//int		main(int argc, char **argv)
//{
	//(void)argv;
	//if (ft_is_even(argc - 1) == TRUE)
		//ft_putstr(EVEN_MSG);
	//else
		//ft_putstr(ODD_MSG);
	//return (SUCCESS);
//}

// EX02
//#include <stdio.h>
//#include "ft_abs.h"
//int	main(void)
//{
	//int	index;
//
	//index = -5;
	//while (index < 5)
	//{
		//printf("macros::abs(%d) = %d\n", index, ABS(index));
		//index++;
	//}
//}

// EX03
//#include <stdio.h>
//#include "ft_point.h"
//void	set_point(t_point *point)
//{
	//point->x = 42;
	//point->y = 21;
//}
//int		main(void)
//{
	//t_point	point;
//
	//set_point(&point);
	//printf("%d %d", point.x, point.y);
	//return (0);
//}

// EX04
#include "c08.h"
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	int				index;
	int				ac;
	char			**av;
	t_stock_str		*arr;
//
	ac = 10;
	av = (char **)malloc((ac + 1) * sizeof(char *));
	index = -1;
	while (++index < ac)
	{
		av[index] = (char *)malloc(2 + 1);
		av[index][0] = 'x';
		av[index][1] = '0' + index;
		av[index][2] = '\0';
	}
	arr = ft_strs_to_tab(ac, av);
	index = -1;
	while (++index < ac)
	{
		printf("%d\n", index);
		printf("\t| original : $%s$ @ %p\n", arr[index].str, arr[index].str);
		printf("\t|   copied : $%s$ @ %p\n", arr[index].copy, arr[index].copy);
		printf("\t|     size : %d\n", arr[index].size);
	}
	printf("-----------SHOW TAB\n");
	ft_show_tab(arr);
	return (0);
}

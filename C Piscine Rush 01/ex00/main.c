/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jseo <jseo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/24 10:28:24 by jseo              #+#    #+#             */
/*   Updated: 2020/10/24 14:58:56 by jseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "boolean.h"
#include "string.h"
#include "solution.h"
#include "is.h"
#define BASENUM 64

int		main(int argc, char **argv)
{
	t_bool	is_error;
	int		nbr_cnt;
	int		grid_size;

	is_error = (argc != 2);
	if (!is_error)
	{
		nbr_cnt = ft_count_input(argv[1]);
		grid_size = nbr_cnt / 4;
		is_error = (grid_size < 3 || grid_size > 9 || nbr_cnt != grid_size * 4);
		if (!is_error)
		{
			is_error = ft_init_sol(grid_size, argv[1]);
		}
	}
	if (is_error)
		ft_write_str("ERROR OCCURED ON RUNNING TIME");
	ft_write_char('\n');
	return (0);
}

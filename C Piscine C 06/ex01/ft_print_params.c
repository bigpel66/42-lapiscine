/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jseo <jseo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 17:22:40 by jseo              #+#    #+#             */
/*   Updated: 2020/10/28 17:48:19 by jseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int argc, char **argv)
{
	if (argc > 1)
	{
		while (*(++argv))
		{
			while (**argv)
				write(1, (*argv)++, 1);
			write(1, "\n", 1);
		}
	}
	return (0);
}

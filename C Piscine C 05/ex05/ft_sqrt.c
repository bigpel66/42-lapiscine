/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jseo <jseo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 03:32:41 by jseo              #+#    #+#             */
/*   Updated: 2020/10/28 03:50:00 by jseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	long long	i;

	i = 1;
	if (nb <= 0)
		return (0);
	while (i * i < (long long)nb)
		++i;
	if (i * i == nb)
		return (i);
	return (0);
}

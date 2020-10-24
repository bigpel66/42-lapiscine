/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validation.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jseo <jseo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/24 11:26:28 by jseo              #+#    #+#             */
/*   Updated: 2020/10/24 15:41:05 by jseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VALIDATION_H
# define VALIDATION_H
# include "boolean.h"
# include "constraint.h"

t_bool		ft_validate_cstr(t_cstr cstr[4], int grid_size);

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jseo <jseo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 15:57:05 by jseo              #+#    #+#             */
/*   Updated: 2020/11/01 11:13:10 by jseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_ERROR_H
# define FT_ERROR_H
# include "ft_dict.h"

typedef enum {
	none_e,
	argc,
	numeric,
	convert,
	parse,
}	t_error;

typedef enum {
	none_p,
	fail,
	empty_line,
	end_of_file,
}	t_parse_error;

void			ft_read_line(int fd, t_parse_error *error);
t_error		ft_sep_role(int argc, char **argv, char **conv, t_dict *dict);
t_error		ft_exec_conv(char *conv, t_dict *dict);
void		show_error(t_error error);

#endif
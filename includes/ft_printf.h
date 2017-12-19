/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seliasbe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/01 01:45:24 by seliasbe          #+#    #+#             */
/*   Updated: 2017/11/01 01:45:31 by seliasbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdint.h>
# include <wchar.h>
# include <stdbool.h>
# include "../libft/includes/libft.h"

typedef enum
{
	none,
	hh,
	h,
	l,
	ll,
	j,
	z,
}	t_length;

typedef enum
{
	no,
	yes,
	o,
	x,
	X,
}	t_hash;

typedef struct	s_flags
{
	t_hash		hash;
	int			zero;
	int			minus;
	int			plus;
	int			space;
}				t_flags;

typedef struct	s_params
{
	t_flags		flags;
	int			width;
	int			preci;
	t_length	length;
	char		specifier;
}				t_params;

int				ft_printf(const char *format, ...);
int				parse_params(int indx, const char *format, t_params *params,
				va_list ap);
int				parse_specifiers(va_list ap, t_params *params);
void			parse_numb_specifiers(t_params *params, char specifier,
				intmax_t numb);
int				flags(const char *format, t_params *params);
int				width(const char *format, t_params *params, va_list ap);
int				precision(const char *format, t_params *params, va_list ap);
int				length(const char *format, t_params *params);
int				number(va_list ap, t_params *params);
int				symbol(va_list ap, t_params *params);
int				string(va_list ap, t_params *params);
int				no_specifier(t_params *params);
void			push_left(t_params *params, char **line, int size, char *str);
void			push_right(t_params *params, char **line, int size, char *str);
int				get_size(char *str, t_params *params);
int				is_multibyte(char *str);

#endif

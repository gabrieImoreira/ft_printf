/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gantonio <gantonio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 17:45:13 by gantonio          #+#    #+#             */
/*   Updated: 2021/07/14 18:50:39 by gantonio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static	char	*ft_hex_tolower(char *str)
{
	int i;

	i = -1;
	while (str[++i])
		str[i] = ft_tolower(str[i]);
	return (str);
}

static int	ft_putzero(char *str, t_flags flags)
{
	int		i;
	char	*str_dot;
	int		counter;

	i = -1;
	if (!str)
		return (0);
	str_dot = malloc(sizeof(char) * ft_strlen(str) + 1);
	if (!str_dot)
		return (0);
	ft_memcpy(str_dot, str, ft_strlen(str));
	ft_bzero(str, ft_strlen(str));
	while (++i <= (int)(flags.dot - (flags.width - ft_strlen(str_dot) + 1)))
		str[i] = '0';
	ft_memmove(str + i, str_dot, ft_strlen(str_dot) + 1);
	counter = ft_strlen(str);
	free(str_dot);
	return (0);
}

int	ft_print_hex(unsigned int integer, t_flags flags, int case_type)
{
	int		counter;
	int		f_zero;
	char	*str;

	f_zero = 0;
	counter = 0;
	str = ft_convert_base(integer, 16);
	str = ft_hex_tolower(str);
	if (flags.dot > 0 && flags.dot > (int)ft_strlen(str))
		counter += ft_putzero(str, flags);
	if (flags.zero == 1)
		f_zero = 1;
	if (flags.minus == 1)
		counter += ft_putstr(str, ft_strlen(str));
	if (flags.dot > 0)
		counter += ft_print_width((flags.width - ft_strlen(str) + 1), 1, 0);
	else
		counter += ft_print_width(flags.width - ft_strlen(str) + 1, 1, f_zero);
	if (flags.minus == 0)
		counter += ft_putstr(str, ft_strlen(str));
	return (counter);
}

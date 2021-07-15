/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_integer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gantonio <gantonio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/10 18:10:42 by gantonio          #+#    #+#             */
/*   Updated: 2021/07/14 23:10:41 by gantonio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

static int	ft_putzero(char *str, t_flags flags, int is_positive)
{
	int		i;
	char	*str_dot;
	int		counter;
	int 	size_str;

	i = -1;
	size_str = flags.dot - (ft_strlen(str_dot) + is_positive);
	if (!str)
		return (0);
	str_dot = malloc(sizeof(char) * ft_strlen(str));
	if (!str_dot)
		return (0);
	ft_memcpy(str_dot, str, ft_strlen(str));
	ft_bzero(str, ft_strlen(str));
	while (++i <= (int)(flags.dot - (ft_strlen(str_dot) + is_positive)))
		str[i] = '0';
	printf("\n\ndot >>>>>>|%s|\n", str);
	if (str_dot[0] == '-')
	{	
		str[0] = '-';
		ft_memmove(str + i, str_dot, ft_strlen(str_dot));
	}
	else
		ft_memmove(str + i, str_dot, ft_strlen(str_dot));
		//str[ft_strlen(str)] = '\0';
		printf("str >>>>>>|%s|\n", str);
	counter = ft_strlen(str);
	free(str_dot);
	return (0);
}

int	ft_print_integer(int integer, t_flags flags)
{
	int		counter;
	int		f_zero;
	char	*str;
	int		is_positive;

	is_positive = -1;
	f_zero = 0;
	counter = 0;
	str = ft_itoa(integer);
	if (str[f_zero] != '-')
		is_positive = 1;
	if (flags.dot > 0 && flags.dot >= (int)ft_strlen(str))
		counter += ft_putzero(str, flags, is_positive);
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

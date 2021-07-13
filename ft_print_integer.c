/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_integer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gantonio <gantonio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/10 18:10:42 by gantonio          #+#    #+#             */
/*   Updated: 2021/07/12 21:15:56 by gantonio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_putzero(char *str, t_flags flags)
{
	int		i;
	char	*str_dot;
	int		counter;

	i = -1;
	str_dot = malloc(sizeof(char) * ft_strlen(str) + 1);
	ft_memcpy(str_dot, str, ft_strlen(str));
	ft_bzero(str, ft_strlen(str));
	while (++i <= (int)(flags.dot - (flags.width - ft_strlen(str_dot) + 1)))
		str[i] = '0';
	if (str_dot[0] == '-')
	{	
		str[0] = '-';
		ft_memmove(str + i, str_dot + 1, ft_strlen(str_dot) + 1);
	}
	else
		ft_memmove(str + i, str_dot, ft_strlen(str_dot) + 1);
	counter = ft_strlen(str);
	free(str_dot);
	return (0);
}

int	ft_print_integer(int integer, t_flags flags)
{
	int		counter;
	int		f_zero;
	char	*str;

	f_zero = 0;
	counter = 0;
	str = ft_itoa(integer);
	if (flags.dot > 0 && flags.dot >= (int)ft_strlen(str))
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
	//printf("counter %d\n\n", counter);
	return (counter);
}

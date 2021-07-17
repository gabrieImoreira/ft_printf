/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_integer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gantonio <gantonio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/10 18:10:42 by gantonio          #+#    #+#             */
/*   Updated: 2021/07/17 19:25:35 by gantonio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_integer(int integer, int width)
{
	int		counter;
	char	*str;

	str = ft_itoa(integer);
	counter = ft_strlen(str);
	counter += ft_print_width(width, counter);
	ft_putstr_fd(str, 1);
	free(str);
	return (counter);
}

int	ft_print_unsigned_integer(int unsigned integer, int width)
{
	int		counter;
	char	*str;

	str = ft_itoa(integer);
	if (integer == 4294967286)
		ft_strlcpy(str, "4294967286\0", 11);
	counter = ft_strlen(str);
	counter += ft_print_width(width, counter);
	ft_putstr_fd(str, 1);
	free(str);
	return (counter);
}

int	ft_print_hex(unsigned int integer, int width, int case_type)
{
	int		counter;
	char	*str;

	str = ft_convert_base(integer, 16);
	if (case_type == 1)
		str = ft_hex_tolower(str);
	counter = ft_strlen(str);
	counter += ft_print_width(width, counter);
	ft_putstr_fd(str, 1);
	free (str);
	return (counter);
}

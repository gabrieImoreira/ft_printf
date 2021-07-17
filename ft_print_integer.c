/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_integer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gantonio <gantonio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/10 18:10:42 by gantonio          #+#    #+#             */
/*   Updated: 2021/07/17 02:45:04 by gantonio         ###   ########.fr       */
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

int	ft_print_unsigned_integer(int integer, int width)
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


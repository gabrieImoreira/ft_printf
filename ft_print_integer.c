/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_integer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gantonio <gantonio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/10 18:10:42 by gantonio          #+#    #+#             */
/*   Updated: 2021/07/10 18:22:58 by gantonio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_integer(int integer, t_flags flags)
{
	int counter;
	char *str_integer;
	
	counter = 0;
	str_integer = ft_itoa(integer);
	ft_putstr(str_integer, ft_strlen(str_integer));
}
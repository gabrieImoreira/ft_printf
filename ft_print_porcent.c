/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_porcent.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gantonio <gantonio@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/09 17:59:14 by gantonio          #+#    #+#             */
/*   Updated: 2021/07/09 18:08:35 by gantonio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_porcent(t_flags flags)
{
	int counter;

	counter = 0;
		counter += ft_putstr("%", 1);
	return (counter);
}
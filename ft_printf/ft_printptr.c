/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printptr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maruiz-p <maruiz-p@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 10:31:11 by maruiz-p          #+#    #+#             */
/*   Updated: 2023/06/08 10:34:01 by maruiz-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printptr(unsigned long long ptr)
{
	int	counter;

	counter = 0;
	counter += ft_putstr("0x");
	counter += ft_printhexa(ptr, 'x');
	return (counter);
}

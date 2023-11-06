/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigned.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maruiz-p <maruiz-p@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 09:18:17 by maruiz-p          #+#    #+#             */
/*   Updated: 2023/06/09 09:22:19 by maruiz-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_unsigned(unsigned int u)
{
	int	counter;

	counter = 0;
	if (u >= 10)
		counter += ft_unsigned(u / 10);
	ft_putchar(u % 10 + '0');
	counter++;
	return (counter);
}

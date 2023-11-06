/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maruiz-p <maruiz-p@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 12:43:34 by maruiz-p          #+#    #+#             */
/*   Updated: 2023/11/06 18:25:03 by maruiz-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf/ft_printf.h"
#include "server.h"
#include <string.h>

void	bit_receptor(int bit)
{
	static unsigned char	bit_keeper_c = 0;
	static int				bit_keeper_i = 0;

	if (bit == SIGUSR1)
		bit_keeper_c += 1 << bit_keeper_i;
	if (++bit_keeper_i == 8)
	{
		write(1, &bit_keeper_c, 1);
		bit_keeper_c = 0;
		bit_keeper_i = 0;
	}
}

int	main(void)
{
	ft_printf("PID: %d\n", getpid());
	signal(SIGUSR1, bit_receptor);
	signal(SIGUSR2, bit_receptor);
	while (1)
		pause();
}

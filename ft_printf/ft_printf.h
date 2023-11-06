/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maruiz-p <maruiz-p@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 13:19:02 by maruiz-p          #+#    #+#             */
/*   Updated: 2023/10/28 18:52:53 by maruiz-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <unistd.h>

int	ft_printf(const char *str, ...);
int	ft_strlen_printf(char *str);
int	ft_putstr(char *str);
int	ft_putchar(char c);
int	ft_printhexa(unsigned long long n, char c);
int	ft_printptr(unsigned long long ptr);
int	ft_printdec(long int n);
int	ft_unsigned(unsigned int u);

#endif
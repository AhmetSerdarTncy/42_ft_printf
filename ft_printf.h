/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahtuncay <ahtuncay@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 17:34:42 by ahtuncay          #+#    #+#             */
/*   Updated: 2023/08/06 17:34:43 by ahtuncay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int	ft_int(int number);
int	ft_check(char str);
int	ft_putchar(char c);
int	ft_string(char *str);
int	ft_unsigned(unsigned int number);
int	ft_printf(const char *format, ...);
int	ft_format(va_list *arg, char format);
int	ft_hex(unsigned int number, char format);
int	ft_point(unsigned long int number, int mod);

#endif

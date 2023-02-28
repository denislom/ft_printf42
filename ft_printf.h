/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlom <dlom@student.42prague.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 22:05:15 by dlom              #+#    #+#             */
/*   Updated: 2023/02/11 22:05:15 by dlom             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdint.h>
# include <unistd.h>
// # include <stddef.h>
# include <stdlib.h>
# include <stdarg.h>

int		ft_printf(const char *str, ...);
int		ft_putstr(char	*str);
int		ft_print_pointer(uintptr_t num);
char	*ft_itoa(int n);
int		ft_print_decimal_number(int number);
int		ft_print_decimal_number(int number);
int		ft_print_unsigned_decimal(unsigned int num);
int		ft_print_hexadecimal(unsigned int number, char format);

#endif
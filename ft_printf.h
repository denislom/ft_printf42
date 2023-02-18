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
// # include <stdlib.h>
# include <stdarg.h>

int	ft_printf(char *str, ...);
int	ft_putstr(char	*str);

#endif
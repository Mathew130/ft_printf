/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlucka <mlucka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/27 23:09:17 by mlucka            #+#    #+#             */
/*   Updated: 2026/05/31 15:05:04 by mlucka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

int		ft_printf(const char *str, ...);
void	ft_putstr_fd(char *s, int fd);
size_t	ft_strlen(const char *str);
char	*ft_utoa(unsigned int n);
char	*ft_hex(unsigned long n, char *base);
int		print_char(va_list args);
int		print_string(va_list args);
int		print_int(va_list args);
int		print_unsigned(va_list args);
int		print_hex(va_list args, char format);
int		print_pointer(va_list args);
int		ft_check(char c, va_list args);
int		print_percent(void);
void	ft_putchar_fd(char c, int fd);

char	*ft_itoa(int n);

#endif
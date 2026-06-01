/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlucka <mlucka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/27 23:06:53 by mlucka            #+#    #+#             */
/*   Updated: 2026/05/31 15:05:30 by mlucka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_check(char c, va_list args)
{
	if (c == 'c')
		return (print_char(args));
	else if (c == 's')
		return (print_string(args));
	else if (c == 'd' || c == 'i')
		return (print_int(args));
	else if (c == 'u')
		return (print_unsigned(args));
	else if (c == 'x' || c == 'X')
		return (print_hex(args, c));
	else if (c == 'p')
		return (print_pointer(args));
	else if (c == '%')
		return (print_percent());
	return (0);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		i;
	int		count;

	i = 0;
	count = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%' && str[i + 1])
		{
			count += ft_check(str[i + 1], args);
			i += 2;
		}
		else
		{
			ft_putchar_fd(str[i], 1);
			count++;
			i++;
		}
	}
	va_end(args);
	return (count);
}

// int	main(void)
// {
// 	char	*s;

// 	s = "hello";
// 	ft_printf("%p", 0);
// }

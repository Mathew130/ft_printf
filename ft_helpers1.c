/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_helpers1.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlucka <mlucka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/29 17:13:39 by mlucka            #+#    #+#             */
/*   Updated: 2026/05/31 10:25:49 by mlucka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_char(va_list args)
{
	int	c;

	c = va_arg(args, int);
	ft_putchar_fd(c, 1);
	return (1);
}

int	print_string(va_list args)
{
	char	*s;

	s = va_arg(args, char *);
	if (!s)
		s = "(null)";
	ft_putstr_fd(s, 1);
	return (ft_strlen(s));
}

int	print_percent(void)
{
	ft_putchar_fd('%', 1);
	return (1);
}

int	print_int(va_list args)
{
	int		n;
	char	*t;
	int		len;

	n = va_arg(args, int);
	t = ft_itoa(n);
	ft_putstr_fd(t, 1);
	len = ft_strlen(t);
	free(t);
	return (len);
}

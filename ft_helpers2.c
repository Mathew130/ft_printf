/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_helpers2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlucka <mlucka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/30 18:06:28 by mlucka            #+#    #+#             */
/*   Updated: 2026/05/31 14:51:16 by mlucka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_unsigned(va_list args)
{
	unsigned int	n;
	char			*t;
	int				len;

	n = va_arg(args, unsigned int);
	t = ft_utoa(n);
	ft_putstr_fd(t, 1);
	len = ft_strlen(t);
	free(t);
	return (len);
}

int	print_hex(va_list args, char format)
{
	unsigned int	n;
	char			*t;
	int				len;

	n = va_arg(args, unsigned int);
	if (format == 'x')
		t = ft_hex(n, "0123456789abcdef");
	else
		t = ft_hex(n, "0123456789ABCDEF");
	ft_putstr_fd(t, 1);
	len = ft_strlen(t);
	free(t);
	return (len);
}

int	print_pointer(va_list args)
{
	void			*ptr;
	char			*t;
	int				len;

	ptr = va_arg(args, void *);
	if (!ptr)
	{
		ft_putstr_fd("(nil)", 1);
		return (5);
	}
	ft_putstr_fd("0x", 1);
	len = 2;
	t = ft_hex((unsigned long)ptr, "0123456789abcdef");
	ft_putstr_fd(t, 1);
	len += ft_strlen(t);
	free(t);
	return (len);
}

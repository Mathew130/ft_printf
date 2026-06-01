/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlucka <mlucka@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/28 10:39:41 by mlucka            #+#    #+#             */
/*   Updated: 2026/05/31 14:54:47 by mlucka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_hex(unsigned long n, char *base)
{
	char			*str;
	unsigned long	t;
	int				len;

	t = n;
	len = 1;
	while (t >= 16)
	{
		t /= 16;
		len++;
	}
	str = malloc(len + 1);
	if (!str)
		return (NULL);
	str[len] = '\0';
	while (len > 0)
	{
		str[len - 1] = base[n % 16];
		n /= 16;
		len--;
	}
	return (str);
}
